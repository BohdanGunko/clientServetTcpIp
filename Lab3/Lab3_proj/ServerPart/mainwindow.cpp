#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    server = new myServer();
    server->startServer();
}

MainWindow::~MainWindow()
{
    delete ui;
}
