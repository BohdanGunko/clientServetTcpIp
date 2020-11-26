#include "buytickets.h"
#include "ui_buytickets.h"
#include <UiHelperBuyTickets.cpp>
#include <QGraphicsDropShadowEffect>
#include <QDebug>

BuyTickets::BuyTickets(BackEnd* bckEnd, QWidget* parent) : QWidget(parent), ui(new Ui::BuyTickets)
{
    ui->setupUi(this);

    this->bckEnd = bckEnd;

    connect(bckEnd, SIGNAL(_cList(QStringList)), this, SLOT(aComplete(QStringList)));
    // calling func to make shadows in BuyTickets menu
    setShadowEff();
}

BuyTickets::~BuyTickets()
{
    delete ui;
}

void BuyTickets::on_SearchButton_clicked()
{
}

void BuyTickets::on_ReverseDepDest_clicked()
{
    QString depTmp = ui->DepartureLineEdit->text();
    ui->DepartureLineEdit->setText(ui->DestinationLineEdit->text());
    ui->DestinationLineEdit->setText(depTmp);
}

void BuyTickets::aComplete(QStringList cList)
{
    for (QString& c : cList)
        qDebug() << c;
}
