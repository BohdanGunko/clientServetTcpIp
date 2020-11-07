#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_RegButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_RegGoBaxkButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
