#include "purchasesmenu.h"
#include "ui_purchasesmenu.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <UiHelperPurchasesMenu.cpp>
#include <QPixmap>
#include <QEvent>

// constructor
PurchasesMenu::PurchasesMenu(QWidget* parent) : QWidget(parent), ui(new Ui::PurchasesMenu)
{
    ui->setupUi(this);

    // adding BuyTickets screen to stacked widget
    ui->stackedWidget->addWidget(&BuyScreen);

    // seting ButTickets as start screen
    ui->stackedWidget->setCurrentIndex(0);

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

void PurchasesMenu::setSocket(QTcpSocket* sck)
{
    socket = sck;
}
