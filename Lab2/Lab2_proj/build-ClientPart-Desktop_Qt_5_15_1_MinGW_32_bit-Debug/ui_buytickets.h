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
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTimeEdit>
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
    QLineEdit *DepartureLineEdit;
    QSpacerItem *horizontalSpacer_4;
    QLabel *FromLabel;
    QLabel *ToLabel;
    QLabel *DepTimeLab;
    QLabel *HourLabel;
    QTimeEdit *TimeEdit;
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
        BuyTickets->setStyleSheet(QString::fromUtf8("/*--------------------------------Time Edit--------------------------------*/\n"
"QTimeEdit{\n"
"icon:none;\n"
"	background-color:#37474F ;\n"
"\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"	border-color: #455A64;\n"
"	border-radius: 10px;\n"
"\n"
"	color:#ECEFF1;\n"
"	font-family: \"Calibri\";\n"
"	font-size: 17px;\n"
"\n"
"	padding-left:10px;\n"
"	padding-right:10px;\n"
"}\n"
"\n"
"\n"
"/*--------------------------------PopUp calendar--------------------------------*/\n"
"\n"
"QCalendarWidget QToolButton {\n"
"	color:#1b2327;\n"
"    background-color: #607D8B;\n"
"	font: bold \"Calibri\";\n"
"	font-size:14px;\n"
"  }\n"
"\n"
" QCalendarWidget QWidget { \n"
"	alternate-background-color:#546E7A ; \n"
"}\n"
"\n"
"QCalendarWidget QAbstractItemView:enabled \n"
"  {\n"
"	color:#d4d6d7;\n"
"	font-family:  \"Calibri Bold\";\n"
"	font-size: 14px;\n"
"    background-color: #1e282d;  \n"
"    selection-background-color: #546E7A; \n"
"    selection-color:#1b2327; \n"
"  }\n"
"\n"
"\n"
"QCalendarWidget QWidget#q"
                        "t_calendar_navigationbar\n"
"{ \n"
"	background-color: #607D8B;\n"
"}\n"
"\n"
"QCalendarWidget QMenu {\n"
"	background-color: #607D8B;\n"
"	color: #1b2327;\n"
"	selection-background-color: #1b2327;\n"
"    selection-color: #607D8B;\n"
"	font: bold \"Calibri\";\n"
"	font-size:14px;\n"
"  }\n"
"\n"
"QCalendarWidget QSpinBox { \n"
"	color: #607D8B; \n"
"	background-color: #607D8B;\n"
"	color: #1b2327;\n"
"	selection-background-color: #1b2327;\n"
"	selection-color: #607D8B;\n"
"	font: bold \"Calibri\";\n"
"	font-size:14px;\n"
"  }\n"
"\n"
"\n"
"/*--------------------------------Date edit--------------------------------*/\n"
"QDateEdit {\n"
"	background-color:#37474F ;\n"
"\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"	border-color: #455A64;\n"
"	border-radius: 10px;\n"
"\n"
"	color:#EEEEEE;\n"
"	font-family: \"Calibri\";\n"
"	font-size: 15px;\n"
"\n"
"	padding-left:10px;\n"
"	padding-right:10px;\n"
"}\n"
"\n"
"QDateEdit:hover {\n"
"background-color: #263238;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"QDateEdit::drop-d"
                        "own {\n"
"  image: url(:/recources/img/Arrow.png);\n"
"\n"
"\n"
"    \n"
"    \n"
"    background-color: #455A64;\n"
"    border-style: solid;\n"
"    border-width: 1px;\n"
"	border-radius:right 7px;\n"
"    border-color:#455A64;\n"
"border-radius:6px;\n"
" \n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"/*--------------------------------Table view--------------------------------*/\n"
"\n"
"#TrainsTable{\n"
"	background-color:#37474F ;\n"
"}\n"
"\n"
"\n"
"/*--------------------------------Button--------------------------------*/\n"
"\n"
"QPushButton{\n"
"	\n"
"	background-color: rgba(242, 150, 47, 220);\n"
"	\n"
"	border:none;\n"
"	border-radius:10px;\n"
"\n"
"	color:#1b2327;\n"
"	font-family:  \"Calibri Bold\";\n"
"	font-size: 17px;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover:!pressed{\n"
"	background-color: #455A64;\n"
"color:#EEEEEE;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover:pressed{\n"
"	background-color: #37474F;\n"
"color:#DDDDDD;\n"
"}\n"
"QPushButton#ReverseDepDest{\n"
"	\n"
"	background-color: none;\n"
"	\n"
"\n"
"\n"
"	color:#"
                        "78909C;\n"
"	font-family:  \"Calibri Bold\";\n"
"	font-size: 19px;\n"
"\n"
"}\n"
"QPushButton#ReverseDepDest:hover:!pressed{\n"
"	color:rgba(242, 150, 47, 220);\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"/*--------------------------------Line edit--------------------------------*/\n"
"\n"
"QLineEdit{\n"
"	background-color:#37474F ;\n"
"\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"	border-color: #455A64;\n"
"	border-radius: 10px;\n"
"\n"
"	color:#ECEFF1;\n"
"	font-family: \"Calibri\";\n"
"	font-size: 17px;\n"
"\n"
"	padding-left:10px;\n"
"	padding-right:10px;\n"
"}\n"
"\n"
"\n"
"QLineEdit:hover{\n"
"	background-color: #263238;\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"	background-color: #1c2428;\n"
"}\n"
"\n"
"\n"
"/*--------------------------------Label--------------------------------*/\n"
"QLabel{\n"
"	background:none ;\n"
"\n"
"	color:#EEEEEE;\n"
"	font: italic\"Calibri\";\n"
"	font-size: 14px;\n"
"}\n"
""));
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
        SearchButton->setMinimumSize(QSize(50, 0));
        SearchButton->setMaximumSize(QSize(100, 16777215));

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
        DateEdit->setMinimumSize(QSize(70, 27));
        DateEdit->setMaximumSize(QSize(140, 45));
        DateEdit->setReadOnly(false);
        DateEdit->setCalendarPopup(true);

        gridLayout_3->addWidget(DateEdit, 1, 4, 1, 1);

        DestinationLineEdit = new QLineEdit(TopBar);
        DestinationLineEdit->setObjectName(QString::fromUtf8("DestinationLineEdit"));
        sizePolicy.setHeightForWidth(DestinationLineEdit->sizePolicy().hasHeightForWidth());
        DestinationLineEdit->setSizePolicy(sizePolicy);
        DestinationLineEdit->setMinimumSize(QSize(200, 0));
        DestinationLineEdit->setMaximumSize(QSize(500, 45));

        gridLayout_3->addWidget(DestinationLineEdit, 1, 3, 1, 1);

        ReverseDepDest = new QPushButton(TopBar);
        ReverseDepDest->setObjectName(QString::fromUtf8("ReverseDepDest"));
        sizePolicy.setHeightForWidth(ReverseDepDest->sizePolicy().hasHeightForWidth());
        ReverseDepDest->setSizePolicy(sizePolicy);
        ReverseDepDest->setMinimumSize(QSize(40, 0));
        ReverseDepDest->setMaximumSize(QSize(40, 16777215));
        ReverseDepDest->setSizeIncrement(QSize(1, 1));
        ReverseDepDest->setAutoDefault(false);

        gridLayout_3->addWidget(ReverseDepDest, 1, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        DepartureLineEdit = new QLineEdit(TopBar);
        DepartureLineEdit->setObjectName(QString::fromUtf8("DepartureLineEdit"));
        sizePolicy.setHeightForWidth(DepartureLineEdit->sizePolicy().hasHeightForWidth());
        DepartureLineEdit->setSizePolicy(sizePolicy);
        DepartureLineEdit->setMinimumSize(QSize(200, 0));
        DepartureLineEdit->setMaximumSize(QSize(500, 45));
        DepartureLineEdit->setFrame(true);

        gridLayout_3->addWidget(DepartureLineEdit, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 1, 6, 1, 1);

        FromLabel = new QLabel(TopBar);
        FromLabel->setObjectName(QString::fromUtf8("FromLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(FromLabel->sizePolicy().hasHeightForWidth());
        FromLabel->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(FromLabel, 0, 1, 1, 1);

        ToLabel = new QLabel(TopBar);
        ToLabel->setObjectName(QString::fromUtf8("ToLabel"));

        gridLayout_3->addWidget(ToLabel, 0, 3, 1, 1);

        DepTimeLab = new QLabel(TopBar);
        DepTimeLab->setObjectName(QString::fromUtf8("DepTimeLab"));
        sizePolicy1.setHeightForWidth(DepTimeLab->sizePolicy().hasHeightForWidth());
        DepTimeLab->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(DepTimeLab, 0, 4, 1, 1);

        HourLabel = new QLabel(TopBar);
        HourLabel->setObjectName(QString::fromUtf8("HourLabel"));
        HourLabel->setMinimumSize(QSize(120, 0));

        gridLayout_3->addWidget(HourLabel, 0, 5, 1, 1);

        TimeEdit = new QTimeEdit(TopBar);
        TimeEdit->setObjectName(QString::fromUtf8("TimeEdit"));
        TimeEdit->setProperty("showGroupSeparator", QVariant(false));
        TimeEdit->setCurrentSection(QDateTimeEdit::HourSection);
        TimeEdit->setCalendarPopup(false);
        TimeEdit->setCurrentSectionIndex(0);

        gridLayout_3->addWidget(TimeEdit, 1, 5, 1, 1);


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
        SearchButton->setText(QCoreApplication::translate("BuyTickets", "Serch", nullptr));
        DateEdit->setSpecialValueText(QString());
        DestinationLineEdit->setPlaceholderText(QCoreApplication::translate("BuyTickets", "Destination", nullptr));
        ReverseDepDest->setText(QCoreApplication::translate("BuyTickets", "\342\206\224", nullptr));
        DepartureLineEdit->setPlaceholderText(QCoreApplication::translate("BuyTickets", "Departure", nullptr));
        FromLabel->setText(QCoreApplication::translate("BuyTickets", "From:", nullptr));
        ToLabel->setText(QCoreApplication::translate("BuyTickets", "To:", nullptr));
        DepTimeLab->setText(QCoreApplication::translate("BuyTickets", "Departure date:", nullptr));
        HourLabel->setText(QCoreApplication::translate("BuyTickets", "Departure time from:", nullptr));
        TimeEdit->setDisplayFormat(QCoreApplication::translate("BuyTickets", "HH:mm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BuyTickets: public Ui_BuyTickets {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUYTICKETS_H
