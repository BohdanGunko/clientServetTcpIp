#include "buytickets.h"
#include "ui_buytickets.h"
#include<QGraphicsDropShadowEffect>

BuyTickets::BuyTickets(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BuyTickets)
{
    ui->setupUi(this);
    QGraphicsDropShadowEffect *DepartEffect = new QGraphicsDropShadowEffect;
    DepartEffect->setBlurRadius(20);
    DepartEffect->setXOffset(0);
    DepartEffect->setYOffset(0);
    DepartEffect->setColor(Qt::black);
    ui->DepartureLineEdit->setGraphicsEffect(DepartEffect);

    QGraphicsDropShadowEffect *DestEffect = new QGraphicsDropShadowEffect;
    DestEffect->setBlurRadius(20);
    DestEffect->setXOffset(0);
    DestEffect->setYOffset(0);
    DestEffect->setColor(Qt::black);
    ui->DestinationLineEdit->setGraphicsEffect(DestEffect);


    QGraphicsDropShadowEffect *FromLabelEffect = new QGraphicsDropShadowEffect;
    FromLabelEffect->setBlurRadius(20);
    FromLabelEffect->setXOffset(0);
    FromLabelEffect->setYOffset(0);
    FromLabelEffect->setColor(Qt::black);
    ui->FromLabel->setGraphicsEffect(FromLabelEffect);

    QGraphicsDropShadowEffect *ToLabelEffect = new QGraphicsDropShadowEffect;
    ToLabelEffect->setBlurRadius(20);
    ToLabelEffect->setXOffset(0);
    ToLabelEffect->setYOffset(0);
    ToLabelEffect->setColor(Qt::black);
    ui->ToLabel->setGraphicsEffect(ToLabelEffect);

    QGraphicsDropShadowEffect *DepTimeLabEffect = new QGraphicsDropShadowEffect;
    DepTimeLabEffect->setBlurRadius(20);
    DepTimeLabEffect->setXOffset(0);
    DepTimeLabEffect->setYOffset(0);
    DepTimeLabEffect->setColor(Qt::black);
    ui->DepTimeLab->setGraphicsEffect(DepTimeLabEffect);

    QGraphicsDropShadowEffect *HourLabelEffect = new QGraphicsDropShadowEffect;
    HourLabelEffect->setBlurRadius(20);
    HourLabelEffect->setXOffset(0);
    HourLabelEffect->setYOffset(0);
    HourLabelEffect->setColor(Qt::black);
    ui->HourLabel->setGraphicsEffect(HourLabelEffect);

    QGraphicsDropShadowEffect *DateEditEffect = new QGraphicsDropShadowEffect;
    DateEditEffect->setBlurRadius(20);
    DateEditEffect->setXOffset(0);
    DateEditEffect->setYOffset(0);
    DateEditEffect->setColor(Qt::black);
    ui->DateEdit->setGraphicsEffect(DateEditEffect);

    QGraphicsDropShadowEffect *HoursComboBoxEffect = new QGraphicsDropShadowEffect;
    HoursComboBoxEffect->setBlurRadius(20);
    HoursComboBoxEffect->setXOffset(0);
    HoursComboBoxEffect->setYOffset(0);
    HoursComboBoxEffect->setColor(Qt::black);
    ui->HoursComboBox->setGraphicsEffect(HoursComboBoxEffect);

    QGraphicsDropShadowEffect *SearchButtonEffect = new QGraphicsDropShadowEffect;
    SearchButtonEffect->setBlurRadius(20);
    SearchButtonEffect->setXOffset(0);
    SearchButtonEffect->setYOffset(0);
    SearchButtonEffect->setColor(Qt::black);
    ui->SearchButton->setGraphicsEffect(SearchButtonEffect);
}

BuyTickets::~BuyTickets()
{
    delete ui;
}
