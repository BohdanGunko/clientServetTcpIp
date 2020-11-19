/********************************************************************************
** Form generated from reading UI file 'purchasesmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PURCHASESMENU_H
#define UI_PURCHASESMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PurchasesMenu
{
public:
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout;
    QWidget *SpacerMenuBlack;
    QGridLayout *gridLayout_3;
    QPushButton *BuyButton;
    QLabel *SpacerMenuGrey;
    QPushButton *ReserveButton;
    QPushButton *LogOutButton;
    QStackedWidget *stackedWidget;

    void setupUi(QWidget *PurchasesMenu)
    {
        if (PurchasesMenu->objectName().isEmpty())
            PurchasesMenu->setObjectName(QString::fromUtf8("PurchasesMenu"));
        PurchasesMenu->resize(1292, 620);
        PurchasesMenu->setStyleSheet(QString::fromUtf8(""));
        gridLayout_4 = new QGridLayout(PurchasesMenu);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, -1, -1, -1);
        SpacerMenuBlack = new QWidget(PurchasesMenu);
        SpacerMenuBlack->setObjectName(QString::fromUtf8("SpacerMenuBlack"));
        SpacerMenuBlack->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#37474F;\n"
"	border:none;\n"
"\n"
"}\n"
"\n"
"\n"
"#SpacerMenuBlack{\n"
"	background-color:#0f1416;\n"
"\n"
"}\n"
"\n"
"#SpacerMenuGrey{\n"
"	background-color:#37474F;\n"
"}\n"
"\n"
""));
        gridLayout_3 = new QGridLayout(SpacerMenuBlack);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(0);
        gridLayout_3->setVerticalSpacing(4);
        gridLayout_3->setContentsMargins(0, 0, 4, 0);
        BuyButton = new QPushButton(SpacerMenuBlack);
        BuyButton->setObjectName(QString::fromUtf8("BuyButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BuyButton->sizePolicy().hasHeightForWidth());
        BuyButton->setSizePolicy(sizePolicy);
        BuyButton->setMinimumSize(QSize(65, 55));
        BuyButton->setMaximumSize(QSize(65, 55));

        gridLayout_3->addWidget(BuyButton, 2, 0, 1, 1);

        SpacerMenuGrey = new QLabel(SpacerMenuBlack);
        SpacerMenuGrey->setObjectName(QString::fromUtf8("SpacerMenuGrey"));

        gridLayout_3->addWidget(SpacerMenuGrey, 6, 0, 1, 1);

        ReserveButton = new QPushButton(SpacerMenuBlack);
        ReserveButton->setObjectName(QString::fromUtf8("ReserveButton"));
        sizePolicy.setHeightForWidth(ReserveButton->sizePolicy().hasHeightForWidth());
        ReserveButton->setSizePolicy(sizePolicy);
        ReserveButton->setMinimumSize(QSize(65, 55));
        ReserveButton->setMaximumSize(QSize(65, 55));

        gridLayout_3->addWidget(ReserveButton, 4, 0, 1, 1);

        LogOutButton = new QPushButton(SpacerMenuBlack);
        LogOutButton->setObjectName(QString::fromUtf8("LogOutButton"));
        sizePolicy.setHeightForWidth(LogOutButton->sizePolicy().hasHeightForWidth());
        LogOutButton->setSizePolicy(sizePolicy);
        LogOutButton->setMinimumSize(QSize(65, 55));
        LogOutButton->setMaximumSize(QSize(65, 55));

        gridLayout_3->addWidget(LogOutButton, 5, 0, 1, 1);


        gridLayout->addWidget(SpacerMenuBlack, 0, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(PurchasesMenu);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));

        gridLayout_4->addWidget(stackedWidget, 0, 1, 1, 1);


        retranslateUi(PurchasesMenu);

        QMetaObject::connectSlotsByName(PurchasesMenu);
    } // setupUi

    void retranslateUi(QWidget *PurchasesMenu)
    {
        PurchasesMenu->setWindowTitle(QCoreApplication::translate("PurchasesMenu", "Form", nullptr));
        BuyButton->setText(QString());
        SpacerMenuGrey->setText(QString());
        ReserveButton->setText(QString());
        LogOutButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PurchasesMenu: public Ui_PurchasesMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PURCHASESMENU_H
