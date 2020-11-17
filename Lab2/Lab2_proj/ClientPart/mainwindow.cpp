#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <UiHelperMainWindow.cpp>

#include <QEvent>
#include <QDebug>
#include <QGraphicsDropShadowEffect>


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

    //setting same socket to purchases ui
    OvScreen.setSocket(socket);

    //create socket and connect signals
    socket = new QTcpSocket();
        connect(socket, SIGNAL(readyRead()), this, SLOT(sockReady()));
        connect(socket, SIGNAL(disconnected()), this, SLOT(sockDick()));

    //to be
    QHostAddress _adres;
    _adres.setAddress("192.168.0.102");
    socket->connectToHost(_adres, 60000);
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
    qDebug()<<"Host name: "<<QHostAddress::LocalHost;


    //go to main menu
    ui->stackedWidget->setCurrentIndex(2);
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

void MainWindow::sockReady()
{
    if(socket->waitForConnected(3000))
    {
        socket->waitForReadyRead(3000);
        recievedData = socket->readAll();
        qDebug()<<"Recieved data from server: "<<recievedData;
    }
    else
    {
        qDebug()<<"Can not read data from server";
    }
}

void MainWindow::sockDick()
{

}

