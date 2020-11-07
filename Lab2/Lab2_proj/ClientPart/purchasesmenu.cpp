#include "purchasesmenu.h"
#include "ui_purchasesmenu.h"

PurchasesMenu::PurchasesMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PurchasesMenu)
{
    ui->setupUi(this);

}

PurchasesMenu::~PurchasesMenu()
{
    delete ui;
}
