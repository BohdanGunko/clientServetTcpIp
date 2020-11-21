#include "mainwindow.h"
#include <UiHelperMainWindow.cpp>
#include "ui_mainwindow.h"

// constructor
MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    loadingBckGround = new QLabel(this);
    loadingBckGround->setStyleSheet("QLabel{background-color:rgb(38,50,56);}");
    loadingBckGround->show();

    loadingGif = new QLabel(this);
    loadingGif->resize(200, 124);

    movie = new QMovie(":/recources/img/loadingGif.gif");
    movie->setScaledSize(QSize(loadingGif->width(), loadingGif->height()));
    loadingGif->setMovie(movie);

    movie->setSpeed(110);

    retryLoadingYesBtn = new QPushButton(this);
    retryLoadingNoBtn = new QPushButton(this);
    retryLoadingYesBtn->setText("Retry");
    retryLoadingNoBtn->setText("Quit app");
    retryLoadingYesBtn->setStyleSheet("QPushButton\
                                  {\
                                      background-color: rgba(242, 150, 47, 220);\
                                      border:none;                             \
                                      border-radius:10px;                      \
                                      color:#1b2327;                           \
                                      font-family:  \"Calibri Bold\";            \
                                      font-size: 17px;                         \
                                  }                                            \
                                  QPushButton:hover:!pressed{                  \
                                      background-color: #455A64;               \
                                  color:#EEEEEE;                               \
                                  }                                            \
                                  QPushButton:hover:pressed{                   \
                                      background-color: #37474F;               \
                                  color:#DDDDDD;                               \
                                  }");

    retryLoadingNoBtn->setStyleSheet("QPushButton{\
                                  background-color: rgba(242, 150, 47, 220);\
                                  border:none;                             \
                                  border-radius:10px;                      \
                                  color:#1b2327;                           \
                                  font-family:  \"Calibri Bold\";            \
                                  font-size: 17px;                         \
                              }                                            \
                              QPushButton:hover:!pressed{                  \
                                  background-color: #455A64;               \
                              color:#EEEEEE;                               \
                              }                                            \
                              QPushButton:hover:pressed{                   \
                                  background-color: #37474F;               \
                              color:#DDDDDD;                               \
                              }");

    retConnLabel = new QLabel(this);
    retConnLabel->setText("Connection with server lost. Do you want to rty again?");
    retConnLabel->setStyleSheet("QLabel{\
                                background:none ;\
                                color:#EEEEEE;\
                                font: \"Calibri\";\
                                font-size: 14px;\
                            }");
    retConnLabel->adjustSize();
    loadingGif->show();
    movie->start();
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

    // when back end can not connect to server call connFailed()
    connect(bckEnd, SIGNAL(_reconnFailed()), this, SLOT(loadScrnShow()));

    // close loading screen when connection restored
    connect(bckEnd, SIGNAL(_reconnSuccess()), this, SLOT(loadScrnHide()));

    // when loginization is successful
    connect(bckEnd, SIGNAL(_logSuccess()), this, SLOT(logSuccess()));

    // when registration is successful
    connect(bckEnd, SIGNAL(_regSuccess()), this, SLOT(regSuccess()));

    // when error in log or reg process
    connect(bckEnd, SIGNAL(_errSignal(QString, QString)), this, SLOT(errSlot(QString, QString)));

    //
    connect(retryLoadingNoBtn, SIGNAL(clicked()), this, SLOT(on_ExitButton_clicked()));

    //
    connect(retryLoadingYesBtn, SIGNAL(clicked()), bckEnd, SLOT(tryToReccon()));

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
}

void MainWindow::loadScrnShow()
{
    if (!loadingBckGround->isVisible())
    {
        retryLoadingYesBtn->show();
        retryLoadingNoBtn->show();
        retConnLabel->show();
        resizeLoadindScreen();
        loadingGif->show();
        movie->start();
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
