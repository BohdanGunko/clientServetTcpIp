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
    QSpacerItem *horizontalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *LoginMenu;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *LogLabel;
    QLabel *PassLable;
    QVBoxLayout *verticalLayout;
    QTextEdit *LogTextEdit;
    QTextEdit *PassTextEdit;
    QCheckBox *RemMECheckBox;
    QVBoxLayout *verticalLayout_3;
    QPushButton *RegButton;
    QPushButton *LogButton;
    QPushButton *pushButton_5;
    QSpacerItem *verticalSpacer_3;
    QWidget *RegMenu;
    QVBoxLayout *verticalLayout_9;
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
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(446, 563);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        LoginMenu = new QWidget();
        LoginMenu->setObjectName(QString::fromUtf8("LoginMenu"));
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
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(9);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        LogLabel = new QLabel(LoginMenu);
        LogLabel->setObjectName(QString::fromUtf8("LogLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LogLabel->sizePolicy().hasHeightForWidth());
        LogLabel->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(LogLabel);

        PassLable = new QLabel(LoginMenu);
        PassLable->setObjectName(QString::fromUtf8("PassLable"));
        sizePolicy.setHeightForWidth(PassLable->sizePolicy().hasHeightForWidth());
        PassLable->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(PassLable);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(9);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, -1, -1);
        LogTextEdit = new QTextEdit(LoginMenu);
        LogTextEdit->setObjectName(QString::fromUtf8("LogTextEdit"));
        sizePolicy.setHeightForWidth(LogTextEdit->sizePolicy().hasHeightForWidth());
        LogTextEdit->setSizePolicy(sizePolicy);
        LogTextEdit->setMinimumSize(QSize(250, 35));
        LogTextEdit->setMaximumSize(QSize(300, 40));

        verticalLayout->addWidget(LogTextEdit);

        PassTextEdit = new QTextEdit(LoginMenu);
        PassTextEdit->setObjectName(QString::fromUtf8("PassTextEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(PassTextEdit->sizePolicy().hasHeightForWidth());
        PassTextEdit->setSizePolicy(sizePolicy1);
        PassTextEdit->setMinimumSize(QSize(250, 35));
        PassTextEdit->setMaximumSize(QSize(300, 40));

        verticalLayout->addWidget(PassTextEdit);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout);

        RemMECheckBox = new QCheckBox(LoginMenu);
        RemMECheckBox->setObjectName(QString::fromUtf8("RemMECheckBox"));

        verticalLayout_4->addWidget(RemMECheckBox);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(9);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_3->setContentsMargins(125, 25, 125, -1);
        RegButton = new QPushButton(LoginMenu);
        RegButton->setObjectName(QString::fromUtf8("RegButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(RegButton->sizePolicy().hasHeightForWidth());
        RegButton->setSizePolicy(sizePolicy2);
        RegButton->setMinimumSize(QSize(50, 25));
        RegButton->setMaximumSize(QSize(200, 35));
        RegButton->setBaseSize(QSize(0, 0));

        verticalLayout_3->addWidget(RegButton);

        LogButton = new QPushButton(LoginMenu);
        LogButton->setObjectName(QString::fromUtf8("LogButton"));
        sizePolicy2.setHeightForWidth(LogButton->sizePolicy().hasHeightForWidth());
        LogButton->setSizePolicy(sizePolicy2);
        LogButton->setMinimumSize(QSize(50, 25));
        LogButton->setMaximumSize(QSize(200, 35));

        verticalLayout_3->addWidget(LogButton);

        pushButton_5 = new QPushButton(LoginMenu);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setEnabled(true);
        sizePolicy2.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy2);
        pushButton_5->setMinimumSize(QSize(50, 25));
        pushButton_5->setMaximumSize(QSize(200, 35));

        verticalLayout_3->addWidget(pushButton_5);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

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
        verticalSpacer_2 = new QSpacerItem(0, 35, QSizePolicy::Minimum, QSizePolicy::Expanding);

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
        sizePolicy.setHeightForWidth(RegLogLable->sizePolicy().hasHeightForWidth());
        RegLogLable->setSizePolicy(sizePolicy);

        verticalLayout_8->addWidget(RegLogLable);

        RegPassLable = new QLabel(RegMenu);
        RegPassLable->setObjectName(QString::fromUtf8("RegPassLable"));
        sizePolicy.setHeightForWidth(RegPassLable->sizePolicy().hasHeightForWidth());
        RegPassLable->setSizePolicy(sizePolicy);

        verticalLayout_8->addWidget(RegPassLable);

        RegPassConf = new QLabel(RegMenu);
        RegPassConf->setObjectName(QString::fromUtf8("RegPassConf"));
        sizePolicy.setHeightForWidth(RegPassConf->sizePolicy().hasHeightForWidth());
        RegPassConf->setSizePolicy(sizePolicy);

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
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy3);
        textEdit->setMinimumSize(QSize(250, 35));
        textEdit->setMaximumSize(QSize(300, 40));

        verticalLayout_7->addWidget(textEdit);

        textEdit_2 = new QTextEdit(RegMenu);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        sizePolicy3.setHeightForWidth(textEdit_2->sizePolicy().hasHeightForWidth());
        textEdit_2->setSizePolicy(sizePolicy3);
        textEdit_2->setMinimumSize(QSize(250, 35));
        textEdit_2->setMaximumSize(QSize(300, 40));

        verticalLayout_7->addWidget(textEdit_2);

        textEdit_3 = new QTextEdit(RegMenu);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        sizePolicy3.setHeightForWidth(textEdit_3->sizePolicy().hasHeightForWidth());
        textEdit_3->setSizePolicy(sizePolicy3);
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
        sizePolicy3.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy3);
        pushButton->setMinimumSize(QSize(50, 25));
        pushButton->setMaximumSize(QSize(200, 35));

        horizontalLayout_4->addWidget(pushButton);


        verticalLayout_9->addLayout(horizontalLayout_4);

        verticalSpacer_4 = new QSpacerItem(0, 35, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_4);

        stackedWidget->addWidget(RegMenu);

        horizontalLayout_3->addWidget(stackedWidget);

        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        LogLabel->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        PassLable->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        RemMECheckBox->setText(QCoreApplication::translate("MainWindow", "Remember me", nullptr));
        RegButton->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        LogButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
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
