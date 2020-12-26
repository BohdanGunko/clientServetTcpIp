#include "purchasesmenu.h"
#include "ui_purchasesmenu.h"
#include <QPixmap>

// set icons on start of ui
void PurchasesMenu::setIcons()
{
    QPixmap BuyIcon(":/recources/img/TrainIcon.png");
    ui->BuyButton->setIcon(BuyIcon);
    ui->BuyButton->setIconSize(QSize(65, 55));

    QPixmap ReservedIcon(":/recources/img/BookedTicketsIcon.png");
    ui->ReserveButton->setIcon(ReservedIcon);
    ui->ReserveButton->setIconSize(QSize(65, 55));

    QPixmap LogOutIcon(":/recources/img/ExitIcon.png");
    ui->LogOutButton->setIcon(LogOutIcon);
    ui->LogOutButton->setIconSize(QSize(65, 55));

    ui->BuyButton->installEventFilter(this);
    ui->ReserveButton->installEventFilter(this);
    ui->LogOutButton->installEventFilter(this);
}

// set icon on mouse enter button event
void PurchasesMenu::setEnterIcon(QObject* watched)
{
    QPushButton* button = qobject_cast<QPushButton*>(watched);

    if (button->objectName() == "BuyButton")
    {
        if (!ui->BuyButton->isCheckable())
        {
            return;
        }
        QPixmap BuyIcon(":/recources/img/TrainIconHover.png");
        ui->BuyButton->setIcon(BuyIcon);
    }
    else if (button->objectName() == "ReserveButton")
    {
        if (!ui->ReserveButton->isCheckable())
        {
            return;
        }
        QPixmap ReservedIcon(":/recources/img/BookedTicketsIconHover.png");
        ui->ReserveButton->setIcon(ReservedIcon);
    }
    else if (button->objectName() == "LogOutButton")
    {
        if (!ui->LogOutButton->isCheckable())
        {
            return;
        }
        QPixmap LogOutIcon(":/recources/img/ExitIconHover.png");
        ui->LogOutButton->setIcon(LogOutIcon);
    }
    return;
}

// set icon on mouse leave button event
void PurchasesMenu::setLeaveIcon(QObject* watched)
{
    QPushButton* button = qobject_cast<QPushButton*>(watched);

    if (button->objectName() == "BuyButton")
    {
        if (!ui->BuyButton->isCheckable())
        {
            return;
        }
        QPixmap BuyIcon(":/recources/img/TrainIcon.png");
        ui->BuyButton->setIcon(BuyIcon);
    }
    else if (button->objectName() == "ReserveButton")
    {
        if (!ui->ReserveButton->isCheckable())
        {
            return;
        }
        QPixmap ReservedIcon(":/recources/img/BookedTicketsIcon.png");
        ui->ReserveButton->setIcon(ReservedIcon);
    }
    else if (button->objectName() == "LogOutButton")
    {
        if (!ui->LogOutButton->isCheckable())
        {
            return;
        }
        QPixmap LogOutIcon(":/recources/img/ExitIcon.png");
        ui->LogOutButton->setIcon(LogOutIcon);
    }
    return;
}

// set icon on button clecked event
void PurchasesMenu::setFocusIcon(QObject* watched)
{
    QPushButton* button = qobject_cast<QPushButton*>(watched);

    if (button->objectName() == "BuyButton")
    {
        ui->stackedWidget->setCurrentWidget(BuyScreen);



        ui->BuyButton->setCheckable(0);
        QPixmap BuyIcon(":/recources/img/TrainIconFocus.png");
        ui->BuyButton->setIcon(BuyIcon);

        ui->ReserveButton->setCheckable(1);
        QPixmap ReservedIcon(":/recources/img/BookedTicketsIcon.png");
        ui->ReserveButton->setIcon(ReservedIcon);

        ui->LogOutButton->setCheckable(1);
        QPixmap LogOutIcon(":/recources/img/ExitIcon.png");
        ui->LogOutButton->setIcon(LogOutIcon);
    }
    else if (button->objectName() == "ReserveButton")
    {
        ui->stackedWidget->setCurrentWidget(reserveScreen);


        showTicketsForCurrentUser();

        ui->BuyButton->setCheckable(1);
        QPixmap BuyIcon(":/recources/img/TrainIcon.png");
        ui->BuyButton->setIcon(BuyIcon);

        ui->ReserveButton->setCheckable(0);
        QPixmap ReservedIcon(":/recources/img/BookedTicketsIconFocus.png");
        ui->ReserveButton->setIcon(ReservedIcon);

        ui->LogOutButton->setCheckable(1);
        QPixmap LogOutIcon(":/recources/img/ExitIcon.png");
        ui->LogOutButton->setIcon(LogOutIcon);
    }
    else if (button->objectName() == "LogOutButton")
    {
        ui->BuyButton->setCheckable(1);
        QPixmap BuyIcon(":/recources/img/TrainIcon.png");
        ui->BuyButton->setIcon(BuyIcon);

        ui->ReserveButton->setCheckable(1);
        QPixmap ReservedIcon(":/recources/img/BookedTicketsIcon.png");
        ui->ReserveButton->setIcon(ReservedIcon);

        ui->LogOutButton->setCheckable(0);
        QPixmap LogOutIcon(":/recources/img/ExitIconFocus.png");
        ui->LogOutButton->setIcon(LogOutIcon);
    }
    return;
}


