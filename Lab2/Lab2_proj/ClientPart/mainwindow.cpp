#include "mainwindow.h"
#include <UiHelperMainWindow.cpp>
#include "ui_mainwindow.h"
#include <QWidget>

// constructor
MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // adding main menu ui to stacked widget
    ui->stackedWidget->addWidget(&OvScreen);

    // setting Log menu as starting screen (0 is index of login menu in stackedwidget)
    ui->stackedWidget->setCurrentIndex(0);

    // calling func to make shadows in login and reg menus
    setShadowEff();

    // create loading screen
    loadingScrn = new LoadingScreen();
    loadingScrn->setModal(true);
    loadingScrn->show();

    // creating new backend
    bckEnd = new BackEnd();

    // crerate new thread this makes possible showing animations while connecting
    secThread = new QThread(this);

    // quit second thred when app closes
    connect(this, SIGNAL(destroyed()), secThread, SLOT(quit()));

    // create socket and connect to server when new threa started
    connect(secThread, SIGNAL(started()), bckEnd, SLOT(createSocket()));

    // to be able to send data to bckEnd object
    connect(this, SIGNAL(_dataToSend(QByteArray)), bckEnd, SLOT(sendData(QByteArray)));

    // when back end can not connect to server call connFailed()
    connect(bckEnd, SIGNAL(_reconnFailed()), this, SLOT(connFailed()));

    // close loading screen when connection restored
    connect(bckEnd, SIGNAL(_reconnSuccess()), loadingScrn, SLOT(close()));

    // when client want to recconect run tryToReccon func
    connect(this, SIGNAL(_tryToReconn()), bckEnd, SLOT(tryToReccon()));

    // when loginization is successful
    connect(bckEnd, SIGNAL(_logSuccess()), this, SLOT(logSuccess()));

    // when registration is successful
    connect(bckEnd, SIGNAL(_regSuccess()), this, SLOT(regSuccess()));

    // when error in log or reg process
    connect(bckEnd, SIGNAL(_errSignal(QString, QString)), this, SLOT(errSlot(QString, QString)));

    // start new thread
    bckEnd->moveToThread(secThread);
    secThread->start();
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
    emit _dataToSend(txtToSend.toLocal8Bit());
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
        _dataToSend(txtToSend.toLocal8Bit());
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

// ask if client want to recconect
void MainWindow::connFailed()
{
    // ask if client want to try to reconnect
    QMessageBox recMsgBox;
    recMsgBox.setWindowTitle("Connection with server lost");
    recMsgBox.setInformativeText("Unable connect to server. Do u want to try again?");
    QAbstractButton* recYesBtn = recMsgBox.addButton("Yes", QMessageBox::YesRole);
    QAbstractButton* recNoBtn = recMsgBox.addButton("Quit app", QMessageBox::NoRole);
    recMsgBox.setIcon(QMessageBox::Question);
    recMsgBox.exec();
    // if yes
    if (recMsgBox.clickedButton() == recYesBtn)
    {
        loadingScrn->show();
        emit _tryToReconn();
    }
    // else close app
    else
    {
        loadingScrn->close();
        this->close();
    }
}

void MainWindow::logSuccess()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::regSuccess()
{
    QMessageBox::information(this, "Registration successful", "Registration is successful, now you can login");
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::errSlot(QString titel, QString Info)
{
    QMessageBox::critical(this, titel, Info);
}
