/********************************************************************************
** Form generated from reading UI file 'buytickets.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUYTICKETS_H
#define UI_BUYTICKETS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BuyTickets
{
public:
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_3;
    QComboBox *comboBox;
    QDateEdit *dateEdit;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_4;
    QTableView *tableView;

    void setupUi(QWidget *BuyTickets)
    {
        if (BuyTickets->objectName().isEmpty())
            BuyTickets->setObjectName(QString::fromUtf8("BuyTickets"));
        BuyTickets->resize(1366, 768);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BuyTickets->sizePolicy().hasHeightForWidth());
        BuyTickets->setSizePolicy(sizePolicy);
        BuyTickets->setStyleSheet(QString::fromUtf8(""));
        gridLayout_5 = new QGridLayout(BuyTickets);
        gridLayout_5->setSpacing(4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(10, 10, 10, -1);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 0, 1, 1);

        pushButton = new QPushButton(BuyTickets);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(100, 27));
        pushButton->setMaximumSize(QSize(200, 50));

        gridLayout_4->addWidget(pushButton, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        gridLayout->addLayout(gridLayout_4, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        comboBox = new QComboBox(BuyTickets);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        comboBox->setMinimumSize(QSize(70, 25));
        comboBox->setMaximumSize(QSize(110, 50));

        gridLayout_3->addWidget(comboBox, 0, 5, 1, 1);

        dateEdit = new QDateEdit(BuyTickets);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        sizePolicy.setHeightForWidth(dateEdit->sizePolicy().hasHeightForWidth());
        dateEdit->setSizePolicy(sizePolicy);
        dateEdit->setMinimumSize(QSize(100, 27));
        dateEdit->setMaximumSize(QSize(150, 50));
        dateEdit->setCalendarPopup(true);

        gridLayout_3->addWidget(dateEdit, 0, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        lineEdit_2 = new QLineEdit(BuyTickets);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        sizePolicy.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy);
        lineEdit_2->setMinimumSize(QSize(200, 27));
        lineEdit_2->setMaximumSize(QSize(500, 50));

        gridLayout_3->addWidget(lineEdit_2, 0, 3, 1, 1);

        lineEdit = new QLineEdit(BuyTickets);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(200, 27));
        lineEdit->setMaximumSize(QSize(500, 50));
        lineEdit->setFrame(true);

        gridLayout_3->addWidget(lineEdit, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(BuyTickets);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(40, 30));
        pushButton_2->setMaximumSize(QSize(40, 50));
        pushButton_2->setSizeIncrement(QSize(1, 1));

        gridLayout_3->addWidget(pushButton_2, 0, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 0, 6, 1, 1);


        gridLayout->addLayout(gridLayout_3, 0, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 1);

        gridLayout_5->addLayout(gridLayout, 0, 0, 1, 1);

        tableView = new QTableView(BuyTickets);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);
        tableView->setMaximumSize(QSize(16777215, 16777215));
        tableView->setSizeIncrement(QSize(0, 0));

        gridLayout_5->addWidget(tableView, 1, 0, 1, 1);

        gridLayout_5->setRowStretch(0, 2);
        gridLayout_5->setRowStretch(1, 15);

        retranslateUi(BuyTickets);

        QMetaObject::connectSlotsByName(BuyTickets);
    } // setupUi

    void retranslateUi(QWidget *BuyTickets)
    {
        BuyTickets->setWindowTitle(QCoreApplication::translate("BuyTickets", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("BuyTickets", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("BuyTickets", "\342\206\224", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BuyTickets: public Ui_BuyTickets {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUYTICKETS_H
