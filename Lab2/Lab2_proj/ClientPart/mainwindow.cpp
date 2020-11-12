#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QEvent>
#include <QDebug>
#include <Qstring>
#include <QGraphicsDropShadowEffect>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->addWidget(&OvScreen);
    ui->stackedWidget->setCurrentIndex(0);

    QGraphicsDropShadowEffect *LogEffect = new QGraphicsDropShadowEffect;
    LogEffect->setBlurRadius(15);
    LogEffect->setXOffset(0);
    LogEffect->setYOffset(0);
    LogEffect->setColor(Qt::black);
    ui->LoginLineEdit->setGraphicsEffect(LogEffect);


    QGraphicsDropShadowEffect *PassEffect = new QGraphicsDropShadowEffect;
    PassEffect->setBlurRadius(15);
    PassEffect->setXOffset(0);
    PassEffect->setYOffset(0);
    PassEffect->setColor(Qt::black);
    ui->PassLineEdit->setGraphicsEffect(PassEffect);



    QGraphicsDropShadowEffect *LogButtonEffect = new QGraphicsDropShadowEffect;
    LogButtonEffect->setBlurRadius(20);
    LogButtonEffect->setXOffset(0);
    LogButtonEffect->setYOffset(0);
    LogButtonEffect->setColor(Qt::black);
    ui->LogButton->setGraphicsEffect(LogButtonEffect);

    QGraphicsDropShadowEffect *REgButtonEffect = new QGraphicsDropShadowEffect;
    REgButtonEffect->setBlurRadius(20);
    REgButtonEffect->setXOffset(0);
    REgButtonEffect->setYOffset(0);
    REgButtonEffect->setColor(Qt::black);
    ui->RegButton->setGraphicsEffect(REgButtonEffect);

    QGraphicsDropShadowEffect *ExitEffect = new QGraphicsDropShadowEffect;
    ExitEffect->setBlurRadius(20);
    ExitEffect->setXOffset(0);
    ExitEffect->setYOffset(0);
    ExitEffect->setColor(Qt::black);
    ui->ExitButton->setGraphicsEffect(ExitEffect);

    QGraphicsDropShadowEffect *RegLofEffect = new QGraphicsDropShadowEffect;
    RegLofEffect->setBlurRadius(20);
    RegLofEffect->setXOffset(0);
    RegLofEffect->setYOffset(0);
    RegLofEffect->setColor(Qt::black);
    ui->RegLogLineEdit->setGraphicsEffect(RegLofEffect);

    QGraphicsDropShadowEffect *RegPassEffect = new QGraphicsDropShadowEffect;
    RegPassEffect->setBlurRadius(20);
    RegPassEffect->setXOffset(0);
    RegPassEffect->setYOffset(0);
    RegPassEffect->setColor(Qt::black);
    ui->RegPassLineEdit->setGraphicsEffect(RegPassEffect);

    QGraphicsDropShadowEffect *RegPConfEffect = new QGraphicsDropShadowEffect;
    RegPConfEffect->setBlurRadius(20);
    RegPConfEffect->setXOffset(0);
    RegPConfEffect->setYOffset(0);
    RegPConfEffect->setColor(Qt::black);
    ui->RegConfLineEdit->setGraphicsEffect(RegPConfEffect);

    QGraphicsDropShadowEffect *RegRegfEffect = new QGraphicsDropShadowEffect;
    RegRegfEffect->setBlurRadius(20);
    RegRegfEffect->setXOffset(0);
    RegRegfEffect->setYOffset(0);
    RegRegfEffect->setColor(Qt::black);
    ui->RegRegButton->setGraphicsEffect(RegRegfEffect);

    QGraphicsDropShadowEffect *RegBackfEffect = new QGraphicsDropShadowEffect;
    RegBackfEffect->setBlurRadius(20);
    RegBackfEffect->setXOffset(0);
    RegBackfEffect->setYOffset(0);
    RegBackfEffect->setColor(Qt::black);
    ui->RegGoBackButton->setGraphicsEffect(RegBackfEffect);




}

MainWindow::~MainWindow()
{
    delete ui;  
}


void MainWindow::on_RegButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_RegGoBackButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_LogButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::resizeEvent(QResizeEvent* event)
{

    const short hMarg = 6;
    const short betweenMarg = 30;

    const short wW= this->size().width();
    const short wH= this->size().height();

    const short LeH = wH/18;
    const short LeW = wW/4;

    const short bH = wH/20;
    const short bW = wW/8;



    short totalHeight = 3*hMarg+betweenMarg+2*LeH+3*bH;

    ui->LoginLineEdit->resize(LeW,LeH);
    ui->PassLineEdit->resize(LeW,LeH);


    ui->LoginLineEdit->move(
                            wW/2-LeW/2,
                            wH/2-totalHeight/2
                            );
    ui->PassLineEdit->move(
                            wW/2-LeW/2,
                            wH/2-totalHeight/2+LeH+hMarg
                );



    ui->LogButton->resize(bW,bH);
    ui->RegButton->resize(bW,bH);
    ui->ExitButton->resize(bW,bH);

    ui->LogButton->move(
                            wW/2-bW/2,
                            wH/2-totalHeight/2+LeH+hMarg+LeH+betweenMarg
                            );
    ui->RegButton->move(
                            wW/2-bW/2,
                            wH/2-totalHeight/2+LeH+hMarg+LeH+betweenMarg+bH+hMarg
                            );
    ui->ExitButton->move(
                            wW/2-bW/2,
                            wH/2-totalHeight/2+LeH+hMarg+LeH+betweenMarg+bH+hMarg+bH+hMarg
                            );
    //QString bordRad ="QPushButton { border-radius: "+(std)(bH/2)+"px; }";
   // ui->LogButton->setStyleSheet( bordRad );

    qDebug()<<this->size()<<"   "<<totalHeight<<LeH<<bH<<ui->RegButton->pos();

}

