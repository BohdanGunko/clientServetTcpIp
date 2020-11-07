/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *LoginMenu;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_9;
    QPushButton *RegButton;
    QPushButton *ExitButton;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *LogButton;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_8;
    QLabel *PassLable;
    QCheckBox *RemMECheckBox;
    QTextEdit *PassTextEdit;
    QLabel *LogLabel;
    QTextEdit *LogTextEdit;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *horizontalSpacer_2;
    QWidget *RegMenu;
    QVBoxLayout *verticalLayout_9;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout_3;
    QTextEdit *RegPassTextEdit;
    QTextEdit *RegLoginTextEdit;
    QLabel *RegPassLable;
    QLabel *RegPassConf;
    QLabel *RegLogLable;
    QTextEdit *RegConfTextEdit;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *RegGoBaxkButton;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout_5;
    QPushButton *RerRegButton;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(654, 517);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        LoginMenu = new QWidget();
        LoginMenu->setObjectName(QString::fromUtf8("LoginMenu"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoginMenu->sizePolicy().hasHeightForWidth());
        LoginMenu->setSizePolicy(sizePolicy);
        LoginMenu->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setBold(true);
        font.setWeight(75);
        LoginMenu->setFont(font);
        LoginMenu->setStyleSheet(QString::fromUtf8("QWidget#LoginMenu{\n"
"	background-color:#424242 ;\n"
"}\n"
""));
        verticalLayout_4 = new QVBoxLayout(LoginMenu);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(9);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(5, 5, 5, 5);
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setHorizontalSpacing(2);
        gridLayout_9->setVerticalSpacing(9);
        gridLayout_9->setContentsMargins(0, 20, 0, 0);
        RegButton = new QPushButton(LoginMenu);
        RegButton->setObjectName(QString::fromUtf8("RegButton"));
        sizePolicy.setHeightForWidth(RegButton->sizePolicy().hasHeightForWidth());
        RegButton->setSizePolicy(sizePolicy);
        RegButton->setMinimumSize(QSize(100, 27));
        RegButton->setMaximumSize(QSize(300, 45));
        RegButton->setBaseSize(QSize(0, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        RegButton->setFont(font1);
        RegButton->setContextMenuPolicy(Qt::DefaultContextMenu);
        RegButton->setStyleSheet(QString::fromUtf8("	border-radius: 10px;\n"
"	color:white;\n"
"	background: #000000;\n"
"	font-size: 20px;\n"
"	font: \"Calibr Boldi\";\n"
"	border-style: outset;\n"
"   	border-width: 2px;\n"
"  	border-color:#009624;"));

        gridLayout_9->addWidget(RegButton, 0, 1, 1, 1);

        ExitButton = new QPushButton(LoginMenu);
        ExitButton->setObjectName(QString::fromUtf8("ExitButton"));
        ExitButton->setEnabled(true);
        sizePolicy.setHeightForWidth(ExitButton->sizePolicy().hasHeightForWidth());
        ExitButton->setSizePolicy(sizePolicy);
        ExitButton->setMinimumSize(QSize(100, 27));
        ExitButton->setMaximumSize(QSize(300, 45));

        gridLayout_9->addWidget(ExitButton, 2, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_9, 1, 2, 1, 1);

        LogButton = new QPushButton(LoginMenu);
        LogButton->setObjectName(QString::fromUtf8("LogButton"));
        sizePolicy.setHeightForWidth(LogButton->sizePolicy().hasHeightForWidth());
        LogButton->setSizePolicy(sizePolicy);
        LogButton->setMinimumSize(QSize(100, 27));
        LogButton->setMaximumSize(QSize(300, 45));

        gridLayout_9->addWidget(LogButton, 1, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_8, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_3, 3, 1, 1, 1);

        gridLayout_9->setRowStretch(0, 5);
        gridLayout_9->setRowStretch(1, 5);
        gridLayout_9->setRowStretch(2, 5);
        gridLayout_9->setRowStretch(3, 1);

        gridLayout_6->addLayout(gridLayout_9, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer, 1, 0, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(9);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        PassLable = new QLabel(LoginMenu);
        PassLable->setObjectName(QString::fromUtf8("PassLable"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(PassLable->sizePolicy().hasHeightForWidth());
        PassLable->setSizePolicy(sizePolicy1);

        gridLayout_8->addWidget(PassLable, 2, 0, 1, 1);

        RemMECheckBox = new QCheckBox(LoginMenu);
        RemMECheckBox->setObjectName(QString::fromUtf8("RemMECheckBox"));
        RemMECheckBox->setChecked(false);

        gridLayout_8->addWidget(RemMECheckBox, 3, 1, 1, 1);

        PassTextEdit = new QTextEdit(LoginMenu);
        PassTextEdit->setObjectName(QString::fromUtf8("PassTextEdit"));
        sizePolicy.setHeightForWidth(PassTextEdit->sizePolicy().hasHeightForWidth());
        PassTextEdit->setSizePolicy(sizePolicy);
        PassTextEdit->setMinimumSize(QSize(350, 35));
        PassTextEdit->setMaximumSize(QSize(500, 50));

        gridLayout_8->addWidget(PassTextEdit, 2, 1, 1, 1);

        LogLabel = new QLabel(LoginMenu);
        LogLabel->setObjectName(QString::fromUtf8("LogLabel"));
        sizePolicy1.setHeightForWidth(LogLabel->sizePolicy().hasHeightForWidth());
        LogLabel->setSizePolicy(sizePolicy1);

        gridLayout_8->addWidget(LogLabel, 1, 0, 1, 1);

        LogTextEdit = new QTextEdit(LoginMenu);
        LogTextEdit->setObjectName(QString::fromUtf8("LogTextEdit"));
        sizePolicy.setHeightForWidth(LogTextEdit->sizePolicy().hasHeightForWidth());
        LogTextEdit->setSizePolicy(sizePolicy);
        LogTextEdit->setMinimumSize(QSize(350, 35));
        LogTextEdit->setMaximumSize(QSize(500, 50));

        gridLayout_8->addWidget(LogTextEdit, 1, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_6, 0, 1, 1, 1);

        gridLayout_8->setRowStretch(0, 1);
        gridLayout_8->setRowStretch(1, 3);
        gridLayout_8->setRowStretch(2, 3);

        gridLayout_6->addLayout(gridLayout_8, 1, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_7, 0, 1, 1, 1);

        verticalSpacer_8 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_8, 3, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        gridLayout_6->setRowStretch(0, 5);
        gridLayout_6->setRowStretch(1, 4);
        gridLayout_6->setRowStretch(2, 4);
        gridLayout_6->setRowStretch(3, 5);

        verticalLayout_4->addLayout(gridLayout_6);

        stackedWidget->addWidget(LoginMenu);
        RegMenu = new QWidget();
        RegMenu->setObjectName(QString::fromUtf8("RegMenu"));
        sizePolicy.setHeightForWidth(RegMenu->sizePolicy().hasHeightForWidth());
        RegMenu->setSizePolicy(sizePolicy);
        RegMenu->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"	border-radius: 10px;\n"
"	background: #73AD21;\n"
"	font-size: 20px;\n"
"	font-family:\"Arial Rounded MT Bold\";\n"
"}\n"
"QPushButton:pressed{\n"
"\n"
"	border-radius: 10px;\n"
"	background: rgb(34, 86, 255);\n"
"	font-size: 20px;\n"
"	font-family:\"Arial Rounded MT Bold\";\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"\n"
"	border-radius: 10px;\n"
"	background:rgb(0, 0, 0);\n"
"	font-size: 20px;\n"
"	font-family:\"Arial Rounded MT Bold\";\n"
"}\n"
"\n"
"QLabel{\n"
"	font-size: 20px;\n"
"	font-family:\"Arial Rounded MT Bold\";\n"
"}\n"
"\n"
"QTextEdit{\n"
"\n"
"	border-radius: 10px;\n"
"	background: #73AD21;\n"
"	font-size: 20px;\n"
"	font-family:\"Arial Rounded MT Bold\";\n"
"}\n"
"\n"
"\n"
"QCheckBox{\n"
"	font-size: 15px;\n"
"	font-family:\"Arial Rounded MT Bold\";\n"
"}"));
        verticalLayout_9 = new QVBoxLayout(RegMenu);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(9);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_6 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_6, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 2, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 5, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(9);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        RegPassTextEdit = new QTextEdit(RegMenu);
        RegPassTextEdit->setObjectName(QString::fromUtf8("RegPassTextEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(RegPassTextEdit->sizePolicy().hasHeightForWidth());
        RegPassTextEdit->setSizePolicy(sizePolicy2);
        RegPassTextEdit->setMinimumSize(QSize(250, 35));
        RegPassTextEdit->setMaximumSize(QSize(500, 50));

        gridLayout_3->addWidget(RegPassTextEdit, 2, 1, 1, 1);

        RegLoginTextEdit = new QTextEdit(RegMenu);
        RegLoginTextEdit->setObjectName(QString::fromUtf8("RegLoginTextEdit"));
        sizePolicy2.setHeightForWidth(RegLoginTextEdit->sizePolicy().hasHeightForWidth());
        RegLoginTextEdit->setSizePolicy(sizePolicy2);
        RegLoginTextEdit->setMinimumSize(QSize(250, 35));
        RegLoginTextEdit->setMaximumSize(QSize(500, 50));
        RegLoginTextEdit->setSizeIncrement(QSize(0, 0));

        gridLayout_3->addWidget(RegLoginTextEdit, 1, 1, 1, 1);

        RegPassLable = new QLabel(RegMenu);
        RegPassLable->setObjectName(QString::fromUtf8("RegPassLable"));
        sizePolicy1.setHeightForWidth(RegPassLable->sizePolicy().hasHeightForWidth());
        RegPassLable->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(RegPassLable, 2, 0, 1, 1);

        RegPassConf = new QLabel(RegMenu);
        RegPassConf->setObjectName(QString::fromUtf8("RegPassConf"));
        sizePolicy1.setHeightForWidth(RegPassConf->sizePolicy().hasHeightForWidth());
        RegPassConf->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(RegPassConf, 3, 0, 1, 1);

        RegLogLable = new QLabel(RegMenu);
        RegLogLable->setObjectName(QString::fromUtf8("RegLogLable"));
        sizePolicy1.setHeightForWidth(RegLogLable->sizePolicy().hasHeightForWidth());
        RegLogLable->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(RegLogLable, 1, 0, 1, 1);

        RegConfTextEdit = new QTextEdit(RegMenu);
        RegConfTextEdit->setObjectName(QString::fromUtf8("RegConfTextEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(RegConfTextEdit->sizePolicy().hasHeightForWidth());
        RegConfTextEdit->setSizePolicy(sizePolicy3);
        RegConfTextEdit->setMinimumSize(QSize(250, 35));
        RegConfTextEdit->setMaximumSize(QSize(500, 50));

        gridLayout_3->addWidget(RegConfTextEdit, 3, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_4, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 3, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_7, 3, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        RegGoBaxkButton = new QPushButton(RegMenu);
        RegGoBaxkButton->setObjectName(QString::fromUtf8("RegGoBaxkButton"));
        sizePolicy.setHeightForWidth(RegGoBaxkButton->sizePolicy().hasHeightForWidth());
        RegGoBaxkButton->setSizePolicy(sizePolicy);
        RegGoBaxkButton->setMinimumSize(QSize(30, 30));
        RegGoBaxkButton->setMaximumSize(QSize(30, 30));

        horizontalLayout_2->addWidget(RegGoBaxkButton);

        horizontalSpacer_5 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        gridLayout_4->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(-1, 20, -1, -1);
        RerRegButton = new QPushButton(RegMenu);
        RerRegButton->setObjectName(QString::fromUtf8("RerRegButton"));
        sizePolicy.setHeightForWidth(RerRegButton->sizePolicy().hasHeightForWidth());
        RerRegButton->setSizePolicy(sizePolicy);
        RerRegButton->setMinimumSize(QSize(50, 25));
        RerRegButton->setMaximumSize(QSize(300, 50));

        gridLayout_5->addWidget(RerRegButton, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        verticalSpacer_5 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_5, 1, 1, 1, 1);

        gridLayout_5->setRowStretch(0, 1);
        gridLayout_5->setRowStretch(1, 2);

        gridLayout_4->addLayout(gridLayout_5, 4, 1, 1, 1);

        gridLayout_4->setRowStretch(2, 7);
        gridLayout_4->setRowStretch(3, 5);
        gridLayout_4->setRowStretch(4, 4);
        gridLayout_4->setRowStretch(5, 7);
        gridLayout_4->setColumnStretch(0, 4);
        gridLayout_4->setColumnStretch(1, 5);
        gridLayout_4->setColumnStretch(2, 4);

        verticalLayout_9->addLayout(gridLayout_4);

        stackedWidget->addWidget(RegMenu);

        horizontalLayout_3->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        RegButton->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        ExitButton->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        LogButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        PassLable->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        RemMECheckBox->setText(QCoreApplication::translate("MainWindow", "Remember me", nullptr));
        LogLabel->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        RegPassLable->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        RegPassConf->setText(QCoreApplication::translate("MainWindow", "Confirm pass", nullptr));
        RegLogLable->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        RegGoBaxkButton->setText(QCoreApplication::translate("MainWindow", "\342\206\220", nullptr));
        RerRegButton->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
