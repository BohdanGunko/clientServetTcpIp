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
#include <QtWidgets/QLineEdit>
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
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_9;
    QSpacerItem *verticalSpacer_3;
    QPushButton *RegButton;
    QPushButton *LogButton;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *ExitButton;
    QGridLayout *gridLayout_7;
    QLineEdit *lineEdit_2;
    QSpacerItem *verticalSpacer_7;
    QCheckBox *RemMeCheckBox;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_8;
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
        MainWindow->resize(1980, 1080);
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
        LoginMenu->setStyleSheet(QString::fromUtf8("#LoginMenu{\n"
"  background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(18, 18, 18, 255), stop:0.47191 rgba(0, 25, 26, 255), stop:1 rgba(18, 18, 18, 255));\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:checked {\n"
"  border-radius:6px;\n"
"    background: #1C9950;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"  border-radius:6px;\n"
"    background:#990329;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:hover {\n"
"  border: 2px solid #1C9950;\n"
"  border-radius:6px;\n"
"    background: #178043;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:hover {\n"
"  border: 2px solid #990329;\n"
"  border-radius:6px;\n"
"    background:#800322;\n"
"}\n"
"\n"
"\n"
"\n"
"QCheckBox {\n"
"    color:#999999;\n"
"  font: italic 9pt \"Open Sans Light\";\n"
"\n"
"}\n"
"\n"
"QLineEdit{\n"
"  background-color:#3D3D3D ;\n"
"\n"
"   border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: #3D3D3D;\n"
"   border-radius: 10px;\n"
"\n"
"  color:#CCCCCC;\n"
"  font-family: \"Open Sans Light\";\n"
""
                        "  font-size: 15px;\n"
"\n"
"  padding-left:10px;\n"
"  padding-right:10px;\n"
"}\n"
"\n"
"\n"
"QLineEdit:hover{\n"
"  \n"
"  background-color: #262626;\n"
"\n"
"  \n"
"  \n"
"   border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: #017374;\n"
"   border-radius: 10px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"QLineEdit:focus{\n"
"  \n"
"  background-color: #1D1D1D;\n"
"\n"
"  \n"
"  \n"
"   border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: #019592;\n"
"   border-radius: 10px;\n"
"\n"
"\n"
"\n"
"}"));
        verticalLayout_4 = new QVBoxLayout(LoginMenu);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setHorizontalSpacing(5);
        gridLayout_6->setVerticalSpacing(0);
        gridLayout_6->setContentsMargins(5, 5, 5, 5);
        verticalSpacer_6 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_6, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setHorizontalSpacing(2);
        gridLayout_9->setVerticalSpacing(5);
        gridLayout_9->setContentsMargins(0, 20, 0, 0);
        verticalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_3, 3, 1, 1, 1);

        RegButton = new QPushButton(LoginMenu);
        RegButton->setObjectName(QString::fromUtf8("RegButton"));
        sizePolicy.setHeightForWidth(RegButton->sizePolicy().hasHeightForWidth());
        RegButton->setSizePolicy(sizePolicy);
        RegButton->setMinimumSize(QSize(100, 27));
        RegButton->setMaximumSize(QSize(300, 55));
        RegButton->setBaseSize(QSize(0, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        RegButton->setFont(font1);
        RegButton->setContextMenuPolicy(Qt::DefaultContextMenu);
        RegButton->setStyleSheet(QString::fromUtf8(""));

        gridLayout_9->addWidget(RegButton, 0, 1, 1, 1);

        LogButton = new QPushButton(LoginMenu);
        LogButton->setObjectName(QString::fromUtf8("LogButton"));
        sizePolicy.setHeightForWidth(LogButton->sizePolicy().hasHeightForWidth());
        LogButton->setSizePolicy(sizePolicy);
        LogButton->setMinimumSize(QSize(100, 27));
        LogButton->setMaximumSize(QSize(300, 55));
        LogButton->setStyleSheet(QString::fromUtf8(""));

        gridLayout_9->addWidget(LogButton, 1, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_9, 1, 2, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_8, 1, 0, 1, 1);

        ExitButton = new QPushButton(LoginMenu);
        ExitButton->setObjectName(QString::fromUtf8("ExitButton"));
        ExitButton->setEnabled(true);
        sizePolicy.setHeightForWidth(ExitButton->sizePolicy().hasHeightForWidth());
        ExitButton->setSizePolicy(sizePolicy);
        ExitButton->setMinimumSize(QSize(100, 27));
        ExitButton->setMaximumSize(QSize(300, 55));
        ExitButton->setStyleSheet(QString::fromUtf8(""));

        gridLayout_9->addWidget(ExitButton, 2, 1, 1, 1);

        gridLayout_9->setRowStretch(0, 10);
        gridLayout_9->setRowStretch(1, 10);
        gridLayout_9->setRowStretch(2, 10);
        gridLayout_9->setRowStretch(3, 1);

        gridLayout_2->addLayout(gridLayout_9, 2, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setHorizontalSpacing(0);
        gridLayout_7->setVerticalSpacing(5);
        gridLayout_7->setContentsMargins(0, 0, -1, -1);
        lineEdit_2 = new QLineEdit(LoginMenu);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        sizePolicy.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy);
        lineEdit_2->setMinimumSize(QSize(200, 27));
        lineEdit_2->setMaximumSize(QSize(500, 55));

        gridLayout_7->addWidget(lineEdit_2, 2, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_7, 0, 0, 1, 1);

        RemMeCheckBox = new QCheckBox(LoginMenu);
        RemMeCheckBox->setObjectName(QString::fromUtf8("RemMeCheckBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(RemMeCheckBox->sizePolicy().hasHeightForWidth());
        RemMeCheckBox->setSizePolicy(sizePolicy1);
        RemMeCheckBox->setChecked(false);

        gridLayout_7->addWidget(RemMeCheckBox, 3, 0, 1, 1);

        lineEdit = new QLineEdit(LoginMenu);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(200, 27));
        lineEdit->setMaximumSize(QSize(500, 55));
        lineEdit->setLayoutDirection(Qt::LeftToRight);
        lineEdit->setInputMethodHints(Qt::ImhNone);
        lineEdit->setDragEnabled(false);

        gridLayout_7->addWidget(lineEdit, 1, 0, 1, 1);

        gridLayout_7->setRowStretch(0, 1);
        gridLayout_7->setRowStretch(1, 11);
        gridLayout_7->setRowStretch(2, 11);

        gridLayout_2->addLayout(gridLayout_7, 1, 0, 1, 1);

        gridLayout_2->setRowStretch(1, 6);
        gridLayout_2->setRowStretch(2, 8);

        gridLayout_6->addLayout(gridLayout_2, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer_8 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_8, 0, 1, 1, 1);

        gridLayout_6->setRowStretch(0, 1);
        gridLayout_6->setRowStretch(1, 1);
        gridLayout_6->setRowStretch(2, 1);

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
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(RegPassLable->sizePolicy().hasHeightForWidth());
        RegPassLable->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(RegPassLable, 2, 0, 1, 1);

        RegPassConf = new QLabel(RegMenu);
        RegPassConf->setObjectName(QString::fromUtf8("RegPassConf"));
        sizePolicy3.setHeightForWidth(RegPassConf->sizePolicy().hasHeightForWidth());
        RegPassConf->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(RegPassConf, 3, 0, 1, 1);

        RegLogLable = new QLabel(RegMenu);
        RegLogLable->setObjectName(QString::fromUtf8("RegLogLable"));
        sizePolicy3.setHeightForWidth(RegLogLable->sizePolicy().hasHeightForWidth());
        RegLogLable->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(RegLogLable, 1, 0, 1, 1);

        RegConfTextEdit = new QTextEdit(RegMenu);
        RegConfTextEdit->setObjectName(QString::fromUtf8("RegConfTextEdit"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(RegConfTextEdit->sizePolicy().hasHeightForWidth());
        RegConfTextEdit->setSizePolicy(sizePolicy4);
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
        LogButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        ExitButton->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        RemMeCheckBox->setText(QCoreApplication::translate("MainWindow", "Remember me", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        lineEdit->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        lineEdit->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        lineEdit->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        lineEdit->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Login", nullptr));
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
