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
#include <QtWidgets/QLabel>
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
    QWidget *TopBar;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *SearchButton;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_3;
    QDateEdit *DateEdit;
    QLineEdit *DestinationLineEdit;
    QPushButton *ReverseDepDest;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *HoursComboBox;
    QLineEdit *DepartureLineEdit;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QTableView *TrainsTable;

    void setupUi(QWidget *BuyTickets)
    {
        if (BuyTickets->objectName().isEmpty())
            BuyTickets->setObjectName(QString::fromUtf8("BuyTickets"));
        BuyTickets->resize(1214, 524);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BuyTickets->sizePolicy().hasHeightForWidth());
        BuyTickets->setSizePolicy(sizePolicy);
        BuyTickets->setStyleSheet(QString::fromUtf8("#TopBar{\n"
"  background-color:none;\n"
"\n"
"}\n"
"#TrainsTable{\n"
"background-color:rgb(33, 33, 33);\n"
"border:none;\n"
"border-radius: 20px;\n"
"}\n"
"#TopBar{\n"
"background-color:rgba(21, 115, 60, 150);\n"
"border:none;\n"
"border-radius: 20px;\n"
"}\n"
"/*--------------------------------Button--------------------------------*/\n"
"\n"
"QPushButton{\n"
"	\n"
"	background-color: #2C2C2C;\n"
"	\n"
"	border: 2px solid #232323;\n"
"	border-radius:10px;\n"
"\n"
"	color:#B9B9B9;\n"
"	font-family: \"Open Sans Light\";\n"
"	font-size: 15px;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover:!pressed{\n"
"	background-color: #136836;\n"
"border-color:#232323;\n"
"}\n"
"\n"
"QPushButton:hover:pressed{\n"
"	background-color: #082E18;\n"
"border-color:#232323;\n"
"}\n"
"\n"
"/*--------------------------------Label--------------------------------*/\n"
"QLabel{\n"
"	background:none;\n"
"color:#B9B9B9;\n"
"	font:   \"Calibri\";\n"
"	font-size: 15px;\n"
"}\n"
"\n"
"\n"
"/*--------------------------------Line edit-------------------"
                        "-------------*/\n"
"\n"
"QLineEdit{\n"
"	background-color:#262626 ;\n"
"\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"	border-color: #565656;\n"
"	border-radius: 10px;\n"
"\n"
"	color:#CCCCCC;\n"
"	font-family: \"Open Sans Light\";\n"
"	font-size: 15px;\n"
"\n"
"	padding-left:10px;\n"
"	padding-right:10px;\n"
"}\n"
"\n"
"\n"
"QLineEdit:hover{\n"
"	background-color: #212121;\n"
" \n"
"    border-color: #115C30;\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	background-color: #1A1A1A;\n"
"\n"
"	border-color: #15733C;\n"
"}"));
        gridLayout_5 = new QGridLayout(BuyTickets);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setHorizontalSpacing(0);
        gridLayout_5->setVerticalSpacing(10);
        gridLayout_5->setContentsMargins(10, 10, 10, 10);
        TopBar = new QWidget(BuyTickets);
        TopBar->setObjectName(QString::fromUtf8("TopBar"));
        TopBar->setMinimumSize(QSize(0, 120));
        TopBar->setMaximumSize(QSize(16777215, 170));
        gridLayout_2 = new QGridLayout(TopBar);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(10, 10, 10, 10);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(5);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(5, 5, 5, 5);
        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 0, 1, 1);

        SearchButton = new QPushButton(TopBar);
        SearchButton->setObjectName(QString::fromUtf8("SearchButton"));
        sizePolicy.setHeightForWidth(SearchButton->sizePolicy().hasHeightForWidth());
        SearchButton->setSizePolicy(sizePolicy);
        SearchButton->setMinimumSize(QSize(100, 27));
        SearchButton->setMaximumSize(QSize(200, 45));

        gridLayout_4->addWidget(SearchButton, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        gridLayout->addLayout(gridLayout_4, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        DateEdit = new QDateEdit(TopBar);
        DateEdit->setObjectName(QString::fromUtf8("DateEdit"));
        sizePolicy.setHeightForWidth(DateEdit->sizePolicy().hasHeightForWidth());
        DateEdit->setSizePolicy(sizePolicy);
        DateEdit->setMinimumSize(QSize(100, 27));
        DateEdit->setMaximumSize(QSize(150, 45));
        DateEdit->setCalendarPopup(true);

        gridLayout_3->addWidget(DateEdit, 1, 4, 1, 1);

        DestinationLineEdit = new QLineEdit(TopBar);
        DestinationLineEdit->setObjectName(QString::fromUtf8("DestinationLineEdit"));
        sizePolicy.setHeightForWidth(DestinationLineEdit->sizePolicy().hasHeightForWidth());
        DestinationLineEdit->setSizePolicy(sizePolicy);
        DestinationLineEdit->setMinimumSize(QSize(200, 27));
        DestinationLineEdit->setMaximumSize(QSize(500, 45));

        gridLayout_3->addWidget(DestinationLineEdit, 1, 3, 1, 1);

        ReverseDepDest = new QPushButton(TopBar);
        ReverseDepDest->setObjectName(QString::fromUtf8("ReverseDepDest"));
        sizePolicy.setHeightForWidth(ReverseDepDest->sizePolicy().hasHeightForWidth());
        ReverseDepDest->setSizePolicy(sizePolicy);
        ReverseDepDest->setMinimumSize(QSize(40, 30));
        ReverseDepDest->setMaximumSize(QSize(40, 45));
        ReverseDepDest->setSizeIncrement(QSize(1, 1));

        gridLayout_3->addWidget(ReverseDepDest, 1, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        HoursComboBox = new QComboBox(TopBar);
        HoursComboBox->setObjectName(QString::fromUtf8("HoursComboBox"));
        sizePolicy.setHeightForWidth(HoursComboBox->sizePolicy().hasHeightForWidth());
        HoursComboBox->setSizePolicy(sizePolicy);
        HoursComboBox->setMinimumSize(QSize(70, 25));
        HoursComboBox->setMaximumSize(QSize(110, 45));

        gridLayout_3->addWidget(HoursComboBox, 1, 5, 1, 1);

        DepartureLineEdit = new QLineEdit(TopBar);
        DepartureLineEdit->setObjectName(QString::fromUtf8("DepartureLineEdit"));
        sizePolicy.setHeightForWidth(DepartureLineEdit->sizePolicy().hasHeightForWidth());
        DepartureLineEdit->setSizePolicy(sizePolicy);
        DepartureLineEdit->setMinimumSize(QSize(200, 27));
        DepartureLineEdit->setMaximumSize(QSize(500, 45));
        DepartureLineEdit->setFrame(true);

        gridLayout_3->addWidget(DepartureLineEdit, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 1, 6, 1, 1);

        label = new QLabel(TopBar);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 1, 1, 1);

        label_2 = new QLabel(TopBar);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 0, 3, 1, 1);

        label_3 = new QLabel(TopBar);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 0, 4, 1, 1);

        label_4 = new QLabel(TopBar);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 0, 5, 1, 1);


        gridLayout->addLayout(gridLayout_3, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        gridLayout_5->addWidget(TopBar, 0, 0, 1, 1);

        TrainsTable = new QTableView(BuyTickets);
        TrainsTable->setObjectName(QString::fromUtf8("TrainsTable"));
        sizePolicy.setHeightForWidth(TrainsTable->sizePolicy().hasHeightForWidth());
        TrainsTable->setSizePolicy(sizePolicy);
        TrainsTable->setMaximumSize(QSize(16777215, 16777215));
        TrainsTable->setSizeIncrement(QSize(0, 0));

        gridLayout_5->addWidget(TrainsTable, 1, 0, 1, 1);

        gridLayout_5->setRowStretch(0, 1);
        gridLayout_5->setRowStretch(1, 5);

        retranslateUi(BuyTickets);

        QMetaObject::connectSlotsByName(BuyTickets);
    } // setupUi

    void retranslateUi(QWidget *BuyTickets)
    {
        BuyTickets->setWindowTitle(QCoreApplication::translate("BuyTickets", "Form", nullptr));
        SearchButton->setText(QCoreApplication::translate("BuyTickets", "PushButton", nullptr));
        DestinationLineEdit->setPlaceholderText(QCoreApplication::translate("BuyTickets", "Destination", nullptr));
        ReverseDepDest->setText(QCoreApplication::translate("BuyTickets", "\342\206\224", nullptr));
        DepartureLineEdit->setPlaceholderText(QCoreApplication::translate("BuyTickets", "Departure", nullptr));
        label->setText(QCoreApplication::translate("BuyTickets", "From:", nullptr));
        label_2->setText(QCoreApplication::translate("BuyTickets", "To", nullptr));
        label_3->setText(QCoreApplication::translate("BuyTickets", "Departure time:", nullptr));
        label_4->setText(QCoreApplication::translate("BuyTickets", "Hour:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BuyTickets: public Ui_BuyTickets {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUYTICKETS_H
