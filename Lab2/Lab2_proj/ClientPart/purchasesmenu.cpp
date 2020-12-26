#include "purchasesmenu.h"
#include "ui_purchasesmenu.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <UiHelperPurchasesMenu.cpp>
#include <QPixmap>
#include <QEvent>

// constructor
PurchasesMenu::PurchasesMenu(BackEnd* bckEnd, QWidget* parent) : QWidget(parent), ui(new Ui::PurchasesMenu)
{
    ui->setupUi(this);

    // create pointer wich points to mainwindow bckEnd
    this->bckEnd = bckEnd;

    // adding BuyTickets screen to stacked widget
    BuyScreen = new BuyTickets(bckEnd);
    ui->stackedWidget->addWidget(BuyScreen);

    reserveScreen = new reserveTicketsMenu(bckEnd);
    ui->stackedWidget->addWidget(reserveScreen);

    // seting ButTickets as start screen
    ui->stackedWidget->setCurrentWidget(BuyScreen);

    // to be able to send data to bckEnd object
    connect(this, SIGNAL(_dataToSend(QByteArray)), bckEnd, SLOT(sendData(QByteArray)));

    // set icons on start of ui
    setIcons();
}

// destructor
PurchasesMenu::~PurchasesMenu()
{
    delete ui;
}

// to handle on button click events
bool PurchasesMenu::eventFilter(QObject* watched, QEvent* event)
{
    QPushButton* button = qobject_cast<QPushButton*>(watched);

    if (!button)
    {
        return false;
    }

    if (event->type() == QEvent::Enter)
    {
        setEnterIcon(watched);
        return true;
    }
    else if (event->type() == QEvent::Leave)
    {
        setLeaveIcon(watched);
        return true;
    }
    else if (event->type() == QEvent::FocusIn)
    {
        setFocusIcon(watched);
        return true;
    }

    return false;
}

void PurchasesMenu::showTicketsForCurrentUser()
{
    QString txtToSend = QString("{\"operation\":\"getUserTickets\", \"userName\":\"%1\"}").arg(bckEnd->curUsername);
    emit _dataToSend(txtToSend.toUtf8());
}
