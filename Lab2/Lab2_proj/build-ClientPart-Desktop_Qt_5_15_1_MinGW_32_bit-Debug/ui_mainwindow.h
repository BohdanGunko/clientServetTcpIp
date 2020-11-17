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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *LoginMenu;
    QPushButton *ExitButton;
    QPushButton *LogButton;
    QPushButton *RegButton;
    QLineEdit *PassLineEdit;
    QLineEdit *LoginLineEdit;
    QCheckBox *RemMeCheckBox;
    QWidget *RegMenu;
    QLineEdit *RegLogLineEdit;
    QLineEdit *RegPassLineEdit;
    QLineEdit *RegConfLineEdit;
    QPushButton *RegRegButton;
    QPushButton *RegGoBackButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1366, 768);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1040, 585));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color:#1e282d;"));
        LoginMenu = new QWidget();
        LoginMenu->setObjectName(QString::fromUtf8("LoginMenu"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(LoginMenu->sizePolicy().hasHeightForWidth());
        LoginMenu->setSizePolicy(sizePolicy1);
        LoginMenu->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setBold(true);
        font.setWeight(75);
        LoginMenu->setFont(font);
        LoginMenu->setStyleSheet(QString::fromUtf8("/*--------------------------------Backdround color--------------------------------*/\n"
"#LoginMenu{\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(23, 30, 34, 255), stop:0.5 rgba(30, 40, 45, 255), stop:1 rgba(23, 30, 34, 255));\n"
"}\n"
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
"\n"
"/*--------------------------------Check box--------------------------------*/\n"
"QCheckBox {\n"
"	color:#999999;\n"
"	font: italic 9pt \"Open Sans Light\";\n"
"	border-radius:6px;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    background: #198C"
                        "49;\n"
"	border-radius:6px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"    background:#990329;\n"
"	border-radius:6px;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:hover {\n"
"  	border: 2px solid #198C49;\n"
"    background: #15733C;\n"
"	border-radius:6px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:hover {\n"
"	border: 2px solid #990329;\n"
"	background:#800322;\n"
"	border-radius:6px;\n"
"}\n"
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
"/*--------------------------------Line edit--------------------------------*/\n"
"\n"
"QC"
                        "heckBox{\n"
"	color:#78909C;\n"
"	font-family: \"Calibri\";\n"
"	font-size: 15px;\n"
"	background-color: none;\n"
"\n"
"}\n"
""));
        ExitButton = new QPushButton(LoginMenu);
        ExitButton->setObjectName(QString::fromUtf8("ExitButton"));
        ExitButton->setEnabled(true);
        ExitButton->setGeometry(QRect(440, 310, 100, 27));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ExitButton->sizePolicy().hasHeightForWidth());
        ExitButton->setSizePolicy(sizePolicy2);
        ExitButton->setMinimumSize(QSize(0, 0));
        ExitButton->setMaximumSize(QSize(16777215, 16777215));
        ExitButton->setStyleSheet(QString::fromUtf8(""));
        LogButton = new QPushButton(LoginMenu);
        LogButton->setObjectName(QString::fromUtf8("LogButton"));
        LogButton->setGeometry(QRect(440, 250, 100, 27));
        sizePolicy2.setHeightForWidth(LogButton->sizePolicy().hasHeightForWidth());
        LogButton->setSizePolicy(sizePolicy2);
        LogButton->setMinimumSize(QSize(0, 0));
        LogButton->setMaximumSize(QSize(16777215, 16777215));
        LogButton->setTabletTracking(false);
        LogButton->setStyleSheet(QString::fromUtf8(""));
        RegButton = new QPushButton(LoginMenu);
        RegButton->setObjectName(QString::fromUtf8("RegButton"));
        RegButton->setGeometry(QRect(440, 280, 100, 27));
        sizePolicy2.setHeightForWidth(RegButton->sizePolicy().hasHeightForWidth());
        RegButton->setSizePolicy(sizePolicy2);
        RegButton->setMinimumSize(QSize(0, 0));
        RegButton->setMaximumSize(QSize(16777215, 16777215));
        RegButton->setBaseSize(QSize(0, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri Bold"));
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        RegButton->setFont(font1);
        RegButton->setContextMenuPolicy(Qt::DefaultContextMenu);
        RegButton->setStyleSheet(QString::fromUtf8(""));
        PassLineEdit = new QLineEdit(LoginMenu);
        PassLineEdit->setObjectName(QString::fromUtf8("PassLineEdit"));
        PassLineEdit->setGeometry(QRect(400, 180, 200, 30));
        sizePolicy2.setHeightForWidth(PassLineEdit->sizePolicy().hasHeightForWidth());
        PassLineEdit->setSizePolicy(sizePolicy2);
        PassLineEdit->setMinimumSize(QSize(0, 0));
        PassLineEdit->setMaximumSize(QSize(16777215, 16777215));
        PassLineEdit->setEchoMode(QLineEdit::Password);
        LoginLineEdit = new QLineEdit(LoginMenu);
        LoginLineEdit->setObjectName(QString::fromUtf8("LoginLineEdit"));
        LoginLineEdit->setGeometry(QRect(400, 140, 200, 30));
        sizePolicy2.setHeightForWidth(LoginLineEdit->sizePolicy().hasHeightForWidth());
        LoginLineEdit->setSizePolicy(sizePolicy2);
        LoginLineEdit->setMinimumSize(QSize(0, 0));
        LoginLineEdit->setMaximumSize(QSize(16777215, 16777215));
        LoginLineEdit->setLayoutDirection(Qt::LeftToRight);
        LoginLineEdit->setInputMethodHints(Qt::ImhNone);
        LoginLineEdit->setFrame(true);
        LoginLineEdit->setDragEnabled(false);
        RemMeCheckBox = new QCheckBox(LoginMenu);
        RemMeCheckBox->setObjectName(QString::fromUtf8("RemMeCheckBox"));
        RemMeCheckBox->setGeometry(QRect(400, 220, 110, 20));
        sizePolicy2.setHeightForWidth(RemMeCheckBox->sizePolicy().hasHeightForWidth());
        RemMeCheckBox->setSizePolicy(sizePolicy2);
        stackedWidget->addWidget(LoginMenu);
        RegMenu = new QWidget();
        RegMenu->setObjectName(QString::fromUtf8("RegMenu"));
        sizePolicy1.setHeightForWidth(RegMenu->sizePolicy().hasHeightForWidth());
        RegMenu->setSizePolicy(sizePolicy1);
        RegMenu->setStyleSheet(QString::fromUtf8("/*--------------------------------Backdround color--------------------------------*/\n"
"#RegMenu{\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(23, 30, 34, 255), stop:0.5 rgba(30, 40, 45, 255), stop:1 rgba(23, 30, 34, 255))\n"
"}\n"
"/*--------------------------------Button--------------------------------*/\n"
"\n"
"QPushButton{\n"
"	\n"
"	background-color: rgba(242, 150, 47, 220);\n"
"	\n"
"\n"
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
"QPushButton#RegGoBackButton{\n"
"\n"
"	border-radius:18px;\n"
"}\n"
"/*--------------------------------Check box--------------------------------*/\n"
"QCheckBox {\n"
"	color:#999999;\n"
"	font: italic 9pt \"Open Sans Light\";\n"
"	border-radius:6px;\n"
"}\n"
"\n"
"QCheckBo"
                        "x::indicator:checked {\n"
"    background: #198C49;\n"
"	border-radius:6px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"    background:#990329;\n"
"	border-radius:6px;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:hover {\n"
"  	border: 2px solid #198C49;\n"
"    background: #15733C;\n"
"	border-radius:6px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:hover {\n"
"	border: 2px solid #990329;\n"
"	background:#800322;\n"
"	border-radius:6px;\n"
"}\n"
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
""));
        RegLogLineEdit = new QLineEdit(RegMenu);
        RegLogLineEdit->setObjectName(QString::fromUtf8("RegLogLineEdit"));
        RegLogLineEdit->setGeometry(QRect(433, 302, 200, 27));
        sizePolicy1.setHeightForWidth(RegLogLineEdit->sizePolicy().hasHeightForWidth());
        RegLogLineEdit->setSizePolicy(sizePolicy1);
        RegLogLineEdit->setMinimumSize(QSize(200, 27));
        RegLogLineEdit->setMaximumSize(QSize(500, 55));
        RegLogLineEdit->setEchoMode(QLineEdit::Normal);
        RegPassLineEdit = new QLineEdit(RegMenu);
        RegPassLineEdit->setObjectName(QString::fromUtf8("RegPassLineEdit"));
        RegPassLineEdit->setGeometry(QRect(433, 356, 200, 27));
        sizePolicy1.setHeightForWidth(RegPassLineEdit->sizePolicy().hasHeightForWidth());
        RegPassLineEdit->setSizePolicy(sizePolicy1);
        RegPassLineEdit->setMinimumSize(QSize(200, 27));
        RegPassLineEdit->setMaximumSize(QSize(500, 55));
        RegPassLineEdit->setEchoMode(QLineEdit::Password);
        RegConfLineEdit = new QLineEdit(RegMenu);
        RegConfLineEdit->setObjectName(QString::fromUtf8("RegConfLineEdit"));
        RegConfLineEdit->setGeometry(QRect(433, 410, 200, 27));
        sizePolicy1.setHeightForWidth(RegConfLineEdit->sizePolicy().hasHeightForWidth());
        RegConfLineEdit->setSizePolicy(sizePolicy1);
        RegConfLineEdit->setMinimumSize(QSize(200, 27));
        RegConfLineEdit->setMaximumSize(QSize(500, 55));
        RegConfLineEdit->setEchoMode(QLineEdit::Password);
        RegRegButton = new QPushButton(RegMenu);
        RegRegButton->setObjectName(QString::fromUtf8("RegRegButton"));
        RegRegButton->setGeometry(QRect(433, 464, 59, 25));
        sizePolicy1.setHeightForWidth(RegRegButton->sizePolicy().hasHeightForWidth());
        RegRegButton->setSizePolicy(sizePolicy1);
        RegRegButton->setMinimumSize(QSize(50, 25));
        RegRegButton->setMaximumSize(QSize(300, 55));
        RegGoBackButton = new QPushButton(RegMenu);
        RegGoBackButton->setObjectName(QString::fromUtf8("RegGoBackButton"));
        RegGoBackButton->setGeometry(QRect(40, 40, 36, 36));
        sizePolicy2.setHeightForWidth(RegGoBackButton->sizePolicy().hasHeightForWidth());
        RegGoBackButton->setSizePolicy(sizePolicy2);
        RegGoBackButton->setMinimumSize(QSize(0, 0));
        RegGoBackButton->setMaximumSize(QSize(16777215, 16777215));
        stackedWidget->addWidget(RegMenu);

        gridLayout_2->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        QWidget::setTabOrder(LoginLineEdit, PassLineEdit);
        QWidget::setTabOrder(PassLineEdit, RemMeCheckBox);
        QWidget::setTabOrder(RemMeCheckBox, LogButton);
        QWidget::setTabOrder(LogButton, RegButton);
        QWidget::setTabOrder(RegButton, ExitButton);
        QWidget::setTabOrder(ExitButton, RegLogLineEdit);
        QWidget::setTabOrder(RegLogLineEdit, RegPassLineEdit);
        QWidget::setTabOrder(RegPassLineEdit, RegConfLineEdit);
        QWidget::setTabOrder(RegConfLineEdit, RegRegButton);
        QWidget::setTabOrder(RegRegButton, RegGoBackButton);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        ExitButton->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        LogButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        RegButton->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        PassLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
#if QT_CONFIG(tooltip)
        LoginLineEdit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        LoginLineEdit->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        LoginLineEdit->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        LoginLineEdit->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        LoginLineEdit->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        LoginLineEdit->setInputMask(QString());
        LoginLineEdit->setText(QString());
        LoginLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        RemMeCheckBox->setText(QCoreApplication::translate("MainWindow", "Remember me", nullptr));
        RegLogLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        RegPassLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        RegConfLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Confirm password", nullptr));
        RegRegButton->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        RegGoBackButton->setText(QCoreApplication::translate("MainWindow", "\342\206\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
