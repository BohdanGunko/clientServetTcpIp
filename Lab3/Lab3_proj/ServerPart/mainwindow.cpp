#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSql>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QTableView>
#include <QSqlRelationalTableModel>
#include <QSqlTableModel>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    QString serverName = "DESKTOP-UJSLV1O\\SQLEXPRESS";
    QString dbName = "TrainsDb";
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");


    db.setConnectOptions();
    QString dsn =QString("Driver={SQL Server};Server=%1;Database=%2;Trusted_Connection=Yes;").arg(serverName).arg(dbName);

    db.setDatabaseName(dsn);

    if(db.open()){
        model = new QSqlQueryModel(this); //Without this line code crashes
        model->setQuery("SELECT * FROM UsersInfo");
        ui->tableView->setModel(model);


        qDebug()<<"opened";


    }else{

        qDebug()<<db.lastError().text();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

