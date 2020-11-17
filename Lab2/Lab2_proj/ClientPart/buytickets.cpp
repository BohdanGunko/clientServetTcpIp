#include "buytickets.h"
#include "ui_buytickets.h"
#include <UiHelperBuyTickets.cpp>
#include <QGraphicsDropShadowEffect>
#include <QDebug>



BuyTickets::BuyTickets(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BuyTickets)
{
    ui->setupUi(this);

    //calling func to make shadows in BuyTickets menu
    setShadowEff();

}

BuyTickets::~BuyTickets()
{
    delete ui;
}



void BuyTickets::on_SearchButton_clicked()
{

}




