#include "mainwindow.h"
#include <UiHelperMainWindow.cpp>
#include "ui_mainwindow.h"

// constructor
MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // create blue background for loading screen
    loadingBckGround = new QLabel(this);
    loadingBckGround->setStyleSheet("QLabel{background-color:rgb(38,50,56);}");

    // create view for gif
    loadingGif = new QLabel(this);
    loadingGif->resize(200, 124);
    movie = new QMovie(":/recources/img/loadingGif.gif");
    movie->setScaledSize(QSize(loadingGif->width(), loadingGif->height()));
    loadingGif->setMovie(movie);
    movie->setSpeed(110);

    // create buttons for loading screen
    retryLoadingYesBtn = new QPushButton(this);
    retryLoadingNoBtn = new QPushButton(this);
    retryLoadingYesBtn->setText("Retry");
    retryLoadingNoBtn->setText("Quit app");

    // create lable to show text on loading screen
    retConnLabel = new QLabel(this);
    retConnLabel->setText("Could not connect to server. Do you want to rty again?");
    retConnLabel->adjustSize();

    // adding main menu ui to stacked widget
    ui->stackedWidget->addWidget(&OvScreen);

    // setting Log menu as starting screen (0 is index of login menu in stackedwidget)
    ui->stackedWidget->setCurrentIndex(0);

    // calling func to make shadows in login and reg menus
    setShadowEff();

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

    // when back end can not connect to server show loading screen
    connect(bckEnd, SIGNAL(_reconnFailed()), this, SLOT(loadScrnShow()));

    // close loading screen when connection restored
    connect(bckEnd, SIGNAL(_reconnSuccess()), this, SLOT(loadScrnHide()));

    // when loginization is successful
    connect(bckEnd, SIGNAL(_logSuccess(int)), ui->stackedWidget, SLOT(setCurrentIndex(int)));

    // when registration is successful
    connect(bckEnd, SIGNAL(_regSuccess()), this, SLOT(regSuccess()));

    // when error in log or reg process
    connect(bckEnd, SIGNAL(_errSignal(QString, QString)), this, SLOT(errSlot(QString, QString)));

    // when user dont want to try connecting again
    connect(retryLoadingNoBtn, SIGNAL(clicked()), this, SLOT(on_ExitButton_clicked()));

    // when user dont want to try connecting again
    connect(retryLoadingYesBtn, SIGNAL(clicked()), bckEnd, SLOT(tryToReccon()));

    // show gif while trying to conect
    connect(retryLoadingYesBtn, SIGNAL(clicked()), this, SLOT(retryLoadingYesBtn_clicked()));

    // start new thread
    bckEnd->moveToThread(secThread);
    secThread->start();

    resizeLoadindScreen();
}

// destructor
MainWindow::~MainWindow()
{
    secThread->quit();
    secThread->wait();
    delete ui;
}

void MainWindow::on_RegButton_clicked()
{
    resizeRegMenu();
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_LogButton_clicked()
{
    QString logTxt = ui->LoginLineEdit->text();
    QString passTxt = ui->PassLineEdit->text();
    QRegularExpression logPattern("[a-zA-Z0-9@.]{5,}");
    QRegularExpression passPattern("[a-zA-Z0-9]{6,}");

    if (logPattern.match(logTxt).capturedLength() >= 5 && logPattern.match(logTxt).capturedLength() == logTxt.length())
    // if login format is correct
    {
        if (passPattern.match(passTxt).capturedLength() >= 6 && passPattern.match(passTxt).capturedLength() == passTxt.length())
        // if pass format is correct
        {
            // read data from line edits and convert it to JSON format
            QString txtToSend = QString("{\"operation\":\"login\", \"log\":\"%1\", \"pass\":\"%2\"}").arg(logTxt).arg(passTxt);

            // send log and pass to server
            emit _dataToSend(txtToSend.toLocal8Bit());
        }
        // if passs format is not correct
        else
        {
            QWhatsThis::showText(ui->PassLineEdit->mapToGlobal(QPoint(ui->PassLineEdit->width() / 2, ui->PassLineEdit->height())),
                                                     "<html><ul style =\"font: 12px;\">"
                                                     "<li>Password can only contain latin letters and numbers and must be longer than 6 characters</li>"
                                                     "</ul></html>");
        }
    }
    // if log format is incorrect
    else
    {
        // check pass format
        if (passPattern.match(passTxt).capturedLength() < 6 || passPattern.match(passTxt).capturedLength() != passTxt.length())
        // if password format is incorrect
        {
            QWhatsThis::showText(ui->LoginLineEdit->mapToGlobal(QPoint(ui->LoginLineEdit->width() / 2, ui->LoginLineEdit->height())),
                                                     "<html><ul style =\"font: 12px;\">"
                                                     "<li>Login can only contain latin letters, numbers and characters . and @ and must be longer than 5 characters </li>"
                                                     "<li>Password can only contain latin letters and numbers and must be longer than 6 characters</li>"
                                                     "</ul></html>");
        }
        else
        {
            QWhatsThis::showText(ui->LoginLineEdit->mapToGlobal(QPoint(ui->LoginLineEdit->width() / 2, ui->LoginLineEdit->height())),
                                                     "<html><ul style =\"font: 12px;\">"
                                                     "<li>Login can only contain latin letters, numbers and characters . and @ and must be longer than 5 characters </li>"
                                                     "</ul></html>");
        }
    }
}

void MainWindow::retryLoadingYesBtn_clicked()
{
    retryLoadingYesBtn->hide();
    retryLoadingNoBtn->hide();
    retConnLabel->hide();
    movie->start();
    loadingGif->show();
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
    QString logTxt = ui->RegLogLineEdit->text();
    QString passTxt = ui->RegPassLineEdit->text();
    QString confTxt = ui->RegConfLineEdit->text();
    QRegularExpression logFormat("[a-zA-Z0-9@.]{5,}");
    QRegularExpression passFormat("[A-Za-z0-9]{6,}");

    if (logFormat.match(logTxt).capturedLength() >= 5 && logFormat.match(logTxt).capturedLength() == logTxt.length())
    // if login fits log format
    {
        if (passFormat.match(passTxt).capturedLength() >= 6 && passFormat.match(passTxt).capturedLength() == passTxt.length())
        // if pass match pass format
        {
            if (passTxt == confTxt)
            // if pass==conf
            {
                // read data from line edits and convert it to JSON format
                QString txtToSend = QString("{\"operation\":\"register\", \"log\":\"%1\", \"pass\":\"%2\"}").arg(logTxt).arg(passTxt);

                // send log and pass to server
                _dataToSend(txtToSend.toLocal8Bit());
            }
            else
            {
                QWhatsThis::showText(ui->RegConfLineEdit->mapToGlobal(QPoint(ui->RegConfLineEdit->width() / 2, ui->RegConfLineEdit->height())),
                                                         "<html><ul style =\"font: 12px;\">"
                                                         "<li>Password and confirm field must match</li>"
                                                         "</ul></html>");
            }
        }
        else
        {
            QWhatsThis::showText(ui->RegPassLineEdit->mapToGlobal(QPoint(ui->RegPassLineEdit->width() / 2, ui->RegPassLineEdit->height())),
                                                     "<html><ul style =\"font: 12px;\">"
                                                     "<li>Password can only contain latin letters and numbers and must be longer than 6 characters</li>"
                                                     "</ul></html>");
        }
    }
    // if login doesnt match needed format
    else
    {
        if (passFormat.match(passTxt).capturedLength() < 6 || passFormat.match(passTxt).capturedLength() != passTxt.length())
        // if pass doesnt match needed format
        {
            QWhatsThis::showText(ui->RegPassLineEdit->mapToGlobal(QPoint(ui->RegPassLineEdit->width() / 2, ui->RegPassLineEdit->height())),
                                                     "<html><ul style =\"font: 12px;\">"
                                                     "<li>Login can only contain latin letters, numbers and characters . and @ and must be longer than 5 characters </li>"
                                                     "<li>Password can only contain latin letters and numbers and must be longer than 6 characters</li>"
                                                     "</ul></html>");
        }
        else
        {
            QWhatsThis::showText(ui->RegPassLineEdit->mapToGlobal(QPoint(ui->RegPassLineEdit->width() / 2, ui->RegPassLineEdit->height())),
                                                     "<html><ul style =\"font: 12px;\">"
                                                     "<li>Password can only contain latin letters and numbers and must be longer than 6 characters</li>"
                                                     "</ul></html>");
        }
    }
}

// for handeling MainWindow resize event
void MainWindow::resizeEvent(QResizeEvent* event)
{
    if (loadingBckGround->isVisible())
    {
        resizeLoadindScreen();
    }
    if (ui->stackedWidget->currentIndex() == 0)
    {
        resizeLogMenu();
    }
    else if (ui->stackedWidget->currentIndex() == 1)
    {
        resizeRegMenu();
    }
    QWidget::resizeEvent(event);
}

void MainWindow::loadScrnShow()
{
    retryLoadingYesBtn->show();
    retryLoadingNoBtn->show();
    retConnLabel->show();
    movie->stop();
    loadingGif->hide();
    if (!loadingBckGround->isVisible())
    {
        resizeLoadindScreen();
        loadingGif->show();
        loadingBckGround->show();
    }
}

void MainWindow::loadScrnHide()
{
    retryLoadingYesBtn->hide();
    retryLoadingNoBtn->hide();
    retConnLabel->hide();
    movie->stop();
    loadingBckGround->hide();
    loadingGif->hide();
}

void MainWindow::regSuccess()
{
    ui->stackedWidget->setCurrentIndex(0);
    QWhatsThis::showText(ui->LoginLineEdit->mapToGlobal(QPoint(ui->LoginLineEdit->width() / 2, ui->LoginLineEdit->height())), "Registration is successful, now you can login.");
}

void MainWindow::errSlot(QString titel, QString Info)
{
    QMessageBox::critical(this, titel, Info);
}
