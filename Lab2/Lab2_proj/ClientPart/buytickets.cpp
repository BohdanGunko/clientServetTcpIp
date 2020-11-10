#include "buytickets.h"
#include "ui_buytickets.h"

BuyTickets::BuyTickets(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BuyTickets)
{
    ui->setupUi(this);
}

BuyTickets::~BuyTickets()
{
    delete ui;
}
