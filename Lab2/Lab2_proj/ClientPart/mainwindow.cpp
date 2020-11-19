#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <UiHelperMainWindow.cpp>

#include <QEvent>
#include <QDebug>


//constructor
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //adding main menu ui to stacked widget
    ui->stackedWidget->addWidget(&OvScreen);

    //setting Log menu as starting screen (0 is index of login menu in stacked widget)
    ui->stackedWidget->setCurrentIndex(0);

    //calling func to make shadows in login and reg menus
    setShadowEff();

    //create socket
    createSocket();
}

//destructor
MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_RegButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    resizeRegMenu();
}

void MainWindow::on_RegGoBackButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    resizeLogMenu();
}

void MainWindow::on_LogButton_clicked()
{
    //read data from line edits
    QString txtToSend = QString("log:%1; pass:%2").arg(ui->LoginLineEdit->text()).arg(ui->PassLineEdit->text());

    //send log and pass to server
    socket->write(txtToSend.toLocal8Bit());


    //go to main menu
    //ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_ExitButton_clicked()
{
    this->close();
}

//for handeling MainWindow resize event
void MainWindow::resizeEvent(QResizeEvent* event)
{
    if(ui->stackedWidget->currentIndex()==0)
    {
        resizeLogMenu();
    }else if (ui->stackedWidget->currentIndex()==1)
    {
        resizeRegMenu();
    }
}

//creating and initializing socket
void MainWindow::createSocket()
{
    //create socket and connect signals
    socket = new QTcpSocket();
        connect(socket, SIGNAL(readyRead()), this, SLOT(sockReady()));
        connect(socket, SIGNAL(disconnected()), this, SLOT(sockDisk()));

    //init socket with ip and port of server
    socket->connectToHost("178.137.161.32", 27000);

    //wait for connection to be established
    socket->waitForConnected(1500);
}

//reading from socket
void MainWindow::sockReady()
{
    //wait for stable connection
    if(socket->waitForConnected(1500))
    {
        //read all data
        recievedData = socket->readAll();
        qDebug()<<"Recieved data from server: "<<recievedData;
    }
    //if connecting failed
    else
    {
        qDebug()<<"Can not connect to server";
    }
}

//disconnect from server event
void MainWindow::sockDisk()
{
    qDebug()<<"Disconnected from server";
    socket->deleteLater();
}

