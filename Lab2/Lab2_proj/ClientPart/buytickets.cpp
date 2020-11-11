#include "buytickets.h"
#include "ui_buytickets.h"
#include<QGraphicsDropShadowEffect>

BuyTickets::BuyTickets(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BuyTickets)
{
    ui->setupUi(this);
    QGraphicsDropShadowEffect *DepartEffect = new QGraphicsDropShadowEffect;
    DepartEffect->setBlurRadius(30);
    DepartEffect->setXOffset(0);
    DepartEffect->setYOffset(0);
    DepartEffect->setColor(0x0A0A0A);
    ui->DepartureLineEdit->setGraphicsEffect(DepartEffect);

    QGraphicsDropShadowEffect *DestEffect = new QGraphicsDropShadowEffect;
    DestEffect->setBlurRadius(30);
    DestEffect->setXOffset(0);
    DestEffect->setYOffset(0);
    DestEffect->setColor(0x0A0A0A);
    ui->DestinationLineEdit->setGraphicsEffect(DestEffect);


    QGraphicsDropShadowEffect *LabelEffect = new QGraphicsDropShadowEffect;
    LabelEffect->setBlurRadius(20);
    LabelEffect->setXOffset(0);
    LabelEffect->setYOffset(0);
    LabelEffect->setColor(0x0A0A0A);
    ui->label->setGraphicsEffect(LabelEffect);


}

BuyTickets::~BuyTickets()
{
    delete ui;
}
