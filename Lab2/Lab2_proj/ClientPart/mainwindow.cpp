#include "mainwindow.h"
#include <UiHelperMainWindow.cpp>
#include "ui_mainwindow.h"

// constructor
MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // adding main menu ui to stacked widget
    ui->stackedWidget->addWidget(&OvScreen);

    // setting Log menu as starting screen (0 is index of login menu in stacked
    // widget)
    ui->stackedWidget->setCurrentIndex(0);

    // calling func to make shadows in login and reg menus
    setShadowEff();

    // create socket
    createSocket();
}

// destructor
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_RegButton_clicked()
{
    resizeRegMenu();
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_LogButton_clicked()
{
    // read data from line edits and convert it to JSON format
    QString txtToSend = QString("{\"operation\":\"login\", \"log\":\"%1\", \"pass\":\"%2\"}").arg(ui->LoginLineEdit->text()).arg(ui->PassLineEdit->text());

    // send log and pass to server
    socket->write(txtToSend.toLocal8Bit());
    socket->waitForBytesWritten(1500);
}

void MainWindow::on_ExitButton_clicked()
{
    // to do: ask if user really want to exit
    this->close();
}

void MainWindow::on_RegGoBackButton_clicked()
{
    resizeLogMenu();
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_RegRegButton_clicked()
{
    // to do: check if login fits login format
    // to do :check if password fits password format

    // check if pass and pass confirmation line edits have same text
    // if same
    if (ui->RegPassLineEdit->text() == ui->RegConfLineEdit->text())
    {
        // read data from line edits and convert it to JSON format
        QString txtToSend = QString("{\"operation\":\"register\", \"log\":\"%1\", \"pass\":\"%2\"}").arg(ui->RegLogLineEdit->text()).arg(ui->RegPassLineEdit->text());

        // send log and pass to server
        socket->write(txtToSend.toLocal8Bit());
        socket->waitForBytesWritten(1500);
    }
    else
    {
        QMessageBox::critical(this, "Registration error", "Passwords don't match.\nPassword and confirmation password must match", "Ok");
    }
}
// for handeling MainWindow resize event
void MainWindow::resizeEvent(QResizeEvent* event)
{
    if (ui->stackedWidget->currentIndex() == 0)
    {
        resizeLogMenu();
    }
    else if (ui->stackedWidget->currentIndex() == 1)
    {
        resizeRegMenu();
    }
}

// creating and initializing socket
void MainWindow::createSocket()
{
    // create socket and connect signals
    socket = new QTcpSocket();
    connect(socket, SIGNAL(readyRead()), this, SLOT(sockReady()));
    connect(socket, SIGNAL(disconnected()), this, SLOT(sockDisk()));
}

// reading from socket
void MainWindow::sockReady()
{
    // wait for stable connection
    if (socket->waitForConnected(1500))
    {
        // read all data
        recievedData = socket->readAll();

        // create new JSON doc
        jsnDoc = new QJsonDocument();

        // convert recieved data to JSON format
        *jsnDoc = QJsonDocument::fromJson(recievedData, errJsn);

        // get JSON object from JSON document

        *obj = jsnDoc->object();

        // chack if convertion eas successful
        if (errJsn->errorString().toInt() == QJsonParseError::NoError)
        {
            // do smt accordin to command from server
            decEndExec();
            return;
        }
        // if data could not be converted to json
        else
        {
            // show can not convert err msg box
            QMessageBox::critical(this, "Error information", "Something went wrong. Please restert the app", "Ok");
            return;
        }
    }
    // if connecting failed
    else
    {
        // show bad connection error
        qDebug() << "Can not read data from client: Connestion failed";
        return;
    }
}

// trying to reconnect to server
bool MainWindow::tryToReccon()
{
    bool reconnRepl = 1;
    while (reconnRepl == 1)
    {
        // try to recconect to server
        socket->connectToHost("178.137.161.32", 27000);

        // wait for connection to be established
        socket->waitForConnected(7000);

        // if client is not connected reconnect
        if (socket->state() != QTcpSocket::ConnectedState)
        {
            // create msf box
            // ask if user want to try to connect again
            QMessageBox recMsgBox;
            recMsgBox.setWindowTitle("Connection with server lost");
            recMsgBox.setInformativeText("Unable connect to server. Do u want to try again?");
            recMsgBox.addButton("Yes", QMessageBox::YesRole);
            QAbstractButton* recNoBtn = recMsgBox.addButton("Quit app", QMessageBox::NoRole);
            recMsgBox.setIcon(QMessageBox::Question);
            recMsgBox.exec();
            if (recMsgBox.clickedButton() == recNoBtn)
            {
                reconnRepl = 0;
            }
        }
        // if we connected
        else
        {
            // if connected returk true
            return 1;
        }
    }
    // if not connected and user dont want to try again
    return 0;
}

// disconnect from server event
void MainWindow::sockDisk()
{
    // if we user dont want to reconnect
    if (!tryToReccon())
    {
        // if user dont want to reconnect
        socket->deleteLater();
        this->close();
    }
}

void MainWindow::decEndExec()
{
    // if it is respond to login process
    if (obj->value("operation").toString() == "login")
    {
        // call login funct
        logProc();
    }
    // if it is respond to registration process
    else if (obj->value("operation").toString() == "register")
    {
        regProc();
    }
    // if server send unknown operation
    else
    {
        QMessageBox::critical(this, "Error information", "Something went wrong. Please check your internet connection", "Ok");
    }
}

// reacting to login reslond
void MainWindow::logProc()
{
    // if log and pass are good
    if (obj->value("resp").toString() == "ok")
    {
        ui->stackedWidget->setCurrentIndex(2);
    }
    // if smt went wrong
    else
    {
        QMessageBox::critical(this, "Error information", obj->value("err").toString(), "Ok");
    }
}

// reacting to registration reslond
void MainWindow::regProc()
{
    // if registration is successful
    if (obj->value("resp").toString() == "ok")
    {
        // show msg and go to login menu
        QMessageBox::information(this, "Registration info", "Registration is successful. Now yoo can login");
        resizeLogMenu();
        ui->stackedWidget->setCurrentIndex(0);
    }
    // if smt went wrong
    else
    {
        QMessageBox::critical(this, "Registration error", obj->value("err").toString(), "Ok");
    }
}
