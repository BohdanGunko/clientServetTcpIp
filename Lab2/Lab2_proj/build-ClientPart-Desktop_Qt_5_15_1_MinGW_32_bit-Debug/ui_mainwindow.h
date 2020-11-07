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
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_12;
    QGridLayout *gridLayout_2;
    QLabel *PassLable;
    QLabel *LogLabel;
    QTextEdit *LogTextEdit;
    QTextEdit *PassTextEdit;
    QCheckBox *RemMECheckBox;
    QVBoxLayout *verticalLayout_3;
    QPushButton *RegButton;
    QPushButton *LogButton;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QWidget *RegMenu;
    QVBoxLayout *verticalLayout_9;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_8;
    QLabel *RegLogLable;
    QLabel *RegPassLable;
    QLabel *RegPassConf;
    QSpacerItem *verticalSpacer_6;
    QVBoxLayout *verticalLayout_7;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1366, 768);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
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
        LoginMenu->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        verticalLayout_4 = new QVBoxLayout(LoginMenu);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_8 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_12->setContentsMargins(-1, 0, -1, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(9);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_2->setContentsMargins(-1, 0, -1, -1);
        PassLable = new QLabel(LoginMenu);
        PassLable->setObjectName(QString::fromUtf8("PassLable"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(PassLable->sizePolicy().hasHeightForWidth());
        PassLable->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(PassLable, 1, 0, 1, 1);

        LogLabel = new QLabel(LoginMenu);
        LogLabel->setObjectName(QString::fromUtf8("LogLabel"));
        sizePolicy1.setHeightForWidth(LogLabel->sizePolicy().hasHeightForWidth());
        LogLabel->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(LogLabel, 0, 0, 1, 1);

        LogTextEdit = new QTextEdit(LoginMenu);
        LogTextEdit->setObjectName(QString::fromUtf8("LogTextEdit"));
        sizePolicy.setHeightForWidth(LogTextEdit->sizePolicy().hasHeightForWidth());
        LogTextEdit->setSizePolicy(sizePolicy);
        LogTextEdit->setMinimumSize(QSize(350, 35));
        LogTextEdit->setMaximumSize(QSize(500, 50));

        gridLayout_2->addWidget(LogTextEdit, 0, 1, 1, 1);

        PassTextEdit = new QTextEdit(LoginMenu);
        PassTextEdit->setObjectName(QString::fromUtf8("PassTextEdit"));
        sizePolicy.setHeightForWidth(PassTextEdit->sizePolicy().hasHeightForWidth());
        PassTextEdit->setSizePolicy(sizePolicy);
        PassTextEdit->setMinimumSize(QSize(350, 35));
        PassTextEdit->setMaximumSize(QSize(500, 50));

        gridLayout_2->addWidget(PassTextEdit, 1, 1, 1, 1);


        verticalLayout_12->addLayout(gridLayout_2);

        RemMECheckBox = new QCheckBox(LoginMenu);
        RemMECheckBox->setObjectName(QString::fromUtf8("RemMECheckBox"));

        verticalLayout_12->addWidget(RemMECheckBox);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(9);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_3->setContentsMargins(180, 25, 180, 0);
        RegButton = new QPushButton(LoginMenu);
        RegButton->setObjectName(QString::fromUtf8("RegButton"));
        sizePolicy.setHeightForWidth(RegButton->sizePolicy().hasHeightForWidth());
        RegButton->setSizePolicy(sizePolicy);
        RegButton->setMinimumSize(QSize(100, 27));
        RegButton->setMaximumSize(QSize(300, 50));
        RegButton->setBaseSize(QSize(0, 0));

        verticalLayout_3->addWidget(RegButton);

        LogButton = new QPushButton(LoginMenu);
        LogButton->setObjectName(QString::fromUtf8("LogButton"));
        sizePolicy.setHeightForWidth(LogButton->sizePolicy().hasHeightForWidth());
        LogButton->setSizePolicy(sizePolicy);
        LogButton->setMinimumSize(QSize(100, 27));
        LogButton->setMaximumSize(QSize(300, 50));

        verticalLayout_3->addWidget(LogButton);

        pushButton_5 = new QPushButton(LoginMenu);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setEnabled(true);
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setMinimumSize(QSize(100, 27));
        pushButton_5->setMaximumSize(QSize(300, 50));

        verticalLayout_3->addWidget(pushButton_5);


        verticalLayout_12->addLayout(verticalLayout_3);

        verticalLayout_12->setStretch(0, 1);
        verticalLayout_12->setStretch(1, 1);
        verticalLayout_12->setStretch(2, 2);

        horizontalLayout_7->addLayout(verticalLayout_12);

        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);

        horizontalLayout_7->setStretch(0, 2);
        horizontalLayout_7->setStretch(1, 3);
        horizontalLayout_7->setStretch(2, 2);

        verticalLayout_4->addLayout(horizontalLayout_7);

        verticalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(1, 1);
        verticalLayout_4->setStretch(2, 1);
        stackedWidget->addWidget(LoginMenu);
        RegMenu = new QWidget();
        RegMenu->setObjectName(QString::fromUtf8("RegMenu"));
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
        pushButton_2 = new QPushButton(RegMenu);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(25, 25));

        verticalLayout_9->addWidget(pushButton_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(9);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setSizeConstraint(QLayout::SetDefaultConstraint);
        RegLogLable = new QLabel(RegMenu);
        RegLogLable->setObjectName(QString::fromUtf8("RegLogLable"));
        sizePolicy1.setHeightForWidth(RegLogLable->sizePolicy().hasHeightForWidth());
        RegLogLable->setSizePolicy(sizePolicy1);

        verticalLayout_8->addWidget(RegLogLable);

        RegPassLable = new QLabel(RegMenu);
        RegPassLable->setObjectName(QString::fromUtf8("RegPassLable"));
        sizePolicy1.setHeightForWidth(RegPassLable->sizePolicy().hasHeightForWidth());
        RegPassLable->setSizePolicy(sizePolicy1);

        verticalLayout_8->addWidget(RegPassLable);

        RegPassConf = new QLabel(RegMenu);
        RegPassConf->setObjectName(QString::fromUtf8("RegPassConf"));
        sizePolicy1.setHeightForWidth(RegPassConf->sizePolicy().hasHeightForWidth());
        RegPassConf->setSizePolicy(sizePolicy1);

        verticalLayout_8->addWidget(RegPassConf);

        verticalSpacer_6 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_8->addItem(verticalSpacer_6);


        horizontalLayout_2->addLayout(verticalLayout_8);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(9);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(-1, -1, 0, 10);
        textEdit = new QTextEdit(RegMenu);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setMinimumSize(QSize(250, 35));
        textEdit->setMaximumSize(QSize(300, 40));

        verticalLayout_7->addWidget(textEdit);

        textEdit_2 = new QTextEdit(RegMenu);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        sizePolicy.setHeightForWidth(textEdit_2->sizePolicy().hasHeightForWidth());
        textEdit_2->setSizePolicy(sizePolicy);
        textEdit_2->setMinimumSize(QSize(250, 35));
        textEdit_2->setMaximumSize(QSize(300, 40));

        verticalLayout_7->addWidget(textEdit_2);

        textEdit_3 = new QTextEdit(RegMenu);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        sizePolicy.setHeightForWidth(textEdit_3->sizePolicy().hasHeightForWidth());
        textEdit_3->setSizePolicy(sizePolicy);
        textEdit_3->setMinimumSize(QSize(250, 35));
        textEdit_3->setMaximumSize(QSize(300, 40));

        verticalLayout_7->addWidget(textEdit_3);

        verticalSpacer_5 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_7->addItem(verticalSpacer_5);


        horizontalLayout_2->addLayout(verticalLayout_7);


        verticalLayout_9->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(100, 0, 100, -1);
        pushButton = new QPushButton(RegMenu);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(50, 25));
        pushButton->setMaximumSize(QSize(200, 35));

        horizontalLayout_4->addWidget(pushButton);


        verticalLayout_9->addLayout(horizontalLayout_4);

        verticalSpacer_4 = new QSpacerItem(0, 35, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_4);

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
        PassLable->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        LogLabel->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        RemMECheckBox->setText(QCoreApplication::translate("MainWindow", "Remember me", nullptr));
        RegButton->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        LogButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\342\206\220", nullptr));
        RegLogLable->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        RegPassLable->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        RegPassConf->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
