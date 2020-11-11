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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
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
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_6;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_9;
    QSpacerItem *verticalSpacer_3;
    QPushButton *ExitButton;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *RegButton;
    QPushButton *LogButton;
    QGridLayout *gridLayout_7;
    QLineEdit *PassLineEdit;
    QSpacerItem *verticalSpacer_7;
    QCheckBox *RemMeCheckBox;
    QLineEdit *LoginLineEdit;
    QWidget *RegMenu;
    QVBoxLayout *verticalLayout_9;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *RegGoBackButton;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout_5;
    QPushButton *RegRegButton;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QGridLayout *gridLayout;
    QLineEdit *RegPassLineEdit;
    QLineEdit *RegLogLineEdit;
    QLineEdit *RegConfLineEdit;
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
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color:#121212 ;\n"
""));
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
        LoginMenu->setStyleSheet(QString::fromUtf8("/*--------------------------------Backdround color--------------------------------*/\n"
"#LoginMenu{\n"
"\n"
"\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(18, 18, 18, 255), stop:0.483146 rgba(7, 34, 19, 255), stop:1 rgba(18, 18, 18, 255));\n"
"}\n"
"/*--------------------------------Button--------------------------------*/\n"
"\n"
"QPushButton{\n"
"	\n"
"	background-color: #2C2C2C;\n"
"	\n"
"	border: 2px solid #1D1D1D;\n"
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
"}\n"
"\n"
"QPushButton:hover:pressed{\n"
"	background-color: #082E18;\n"
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
"    background: #198C49;\n"
"	border-radius:6px;\n"
""
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
"}\n"
"\n"
"/*--------------------------------Line edit"
                        "--------------------------------*/\n"
"\n"
"QCheckBox{\n"
"	background-color: none;\n"
"	shadow: 3px 3px white;\n"
"\n"
"\n"
"\n"
"}\n"
""));
        verticalLayout_4 = new QVBoxLayout(LoginMenu);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setHorizontalSpacing(5);
        gridLayout_6->setVerticalSpacing(0);
        gridLayout_6->setContentsMargins(5, 5, 5, 5);
        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer_8 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_8, 0, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_6, 2, 1, 1, 1);

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

        ExitButton = new QPushButton(LoginMenu);
        ExitButton->setObjectName(QString::fromUtf8("ExitButton"));
        ExitButton->setEnabled(true);
        sizePolicy.setHeightForWidth(ExitButton->sizePolicy().hasHeightForWidth());
        ExitButton->setSizePolicy(sizePolicy);
        ExitButton->setMinimumSize(QSize(100, 27));
        ExitButton->setMaximumSize(QSize(300, 55));
        ExitButton->setStyleSheet(QString::fromUtf8(""));

        gridLayout_9->addWidget(ExitButton, 2, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_8, 1, 0, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_9, 1, 2, 1, 1);

        RegButton = new QPushButton(LoginMenu);
        RegButton->setObjectName(QString::fromUtf8("RegButton"));
        sizePolicy.setHeightForWidth(RegButton->sizePolicy().hasHeightForWidth());
        RegButton->setSizePolicy(sizePolicy);
        RegButton->setMinimumSize(QSize(100, 27));
        RegButton->setMaximumSize(QSize(300, 55));
        RegButton->setBaseSize(QSize(0, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Open Sans Light"));
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        RegButton->setFont(font1);
        RegButton->setContextMenuPolicy(Qt::DefaultContextMenu);
        RegButton->setStyleSheet(QString::fromUtf8(""));

        gridLayout_9->addWidget(RegButton, 1, 1, 1, 1);

        LogButton = new QPushButton(LoginMenu);
        LogButton->setObjectName(QString::fromUtf8("LogButton"));
        sizePolicy.setHeightForWidth(LogButton->sizePolicy().hasHeightForWidth());
        LogButton->setSizePolicy(sizePolicy);
        LogButton->setMinimumSize(QSize(100, 27));
        LogButton->setMaximumSize(QSize(300, 55));
        LogButton->setStyleSheet(QString::fromUtf8(""));

        gridLayout_9->addWidget(LogButton, 0, 1, 1, 1);

        gridLayout_9->setRowStretch(0, 15);
        gridLayout_9->setRowStretch(1, 15);
        gridLayout_9->setRowStretch(2, 15);
        gridLayout_9->setRowStretch(3, 1);

        gridLayout_2->addLayout(gridLayout_9, 2, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setHorizontalSpacing(0);
        gridLayout_7->setVerticalSpacing(10);
        gridLayout_7->setContentsMargins(0, 0, -1, -1);
        PassLineEdit = new QLineEdit(LoginMenu);
        PassLineEdit->setObjectName(QString::fromUtf8("PassLineEdit"));
        sizePolicy.setHeightForWidth(PassLineEdit->sizePolicy().hasHeightForWidth());
        PassLineEdit->setSizePolicy(sizePolicy);
        PassLineEdit->setMinimumSize(QSize(200, 27));
        PassLineEdit->setMaximumSize(QSize(500, 55));
        PassLineEdit->setEchoMode(QLineEdit::Password);

        gridLayout_7->addWidget(PassLineEdit, 2, 0, 1, 1);

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

        LoginLineEdit = new QLineEdit(LoginMenu);
        LoginLineEdit->setObjectName(QString::fromUtf8("LoginLineEdit"));
        sizePolicy.setHeightForWidth(LoginLineEdit->sizePolicy().hasHeightForWidth());
        LoginLineEdit->setSizePolicy(sizePolicy);
        LoginLineEdit->setMinimumSize(QSize(200, 27));
        LoginLineEdit->setMaximumSize(QSize(500, 55));
        LoginLineEdit->setLayoutDirection(Qt::LeftToRight);
        LoginLineEdit->setInputMethodHints(Qt::ImhNone);
        LoginLineEdit->setFrame(true);
        LoginLineEdit->setDragEnabled(false);

        gridLayout_7->addWidget(LoginLineEdit, 1, 0, 1, 1);

        gridLayout_7->setRowStretch(0, 1);
        gridLayout_7->setRowStretch(1, 11);
        gridLayout_7->setRowStretch(2, 11);

        gridLayout_2->addLayout(gridLayout_7, 1, 0, 1, 1);

        gridLayout_2->setRowStretch(1, 9);
        gridLayout_2->setRowStretch(2, 10);

        gridLayout_6->addLayout(gridLayout_2, 1, 1, 1, 1);

        gridLayout_6->setRowStretch(0, 2);
        gridLayout_6->setRowStretch(1, 3);
        gridLayout_6->setRowStretch(2, 3);

        verticalLayout_4->addLayout(gridLayout_6);

        stackedWidget->addWidget(LoginMenu);
        RegMenu = new QWidget();
        RegMenu->setObjectName(QString::fromUtf8("RegMenu"));
        sizePolicy.setHeightForWidth(RegMenu->sizePolicy().hasHeightForWidth());
        RegMenu->setSizePolicy(sizePolicy);
        RegMenu->setStyleSheet(QString::fromUtf8("/*--------------------------------Backdround color--------------------------------*/\n"
"#RegMenu{\n"
"  background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(18, 18, 18, 255), stop:0.483146 rgba(7, 34, 19, 255), stop:1 rgba(18, 18, 18, 255));\n"
"}\n"
"/*--------------------------------Button--------------------------------*/\n"
"\n"
"QPushButton{\n"
"	\n"
"	background-color: #2C2C2C;\n"
"	\n"
"	border: 2px solid #1D1D1D;\n"
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
"}\n"
"\n"
"QPushButton:hover:pressed{\n"
"	background-color: #082E18;\n"
"}\n"
"\n"
"/*--------------------------------Line edit--------------------------------*/\n"
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
"	font-family: \"Open Sa"
                        "ns Light\";\n"
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
"}\n"
""));
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

        horizontalSpacer_7 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_7, 3, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        RegGoBackButton = new QPushButton(RegMenu);
        RegGoBackButton->setObjectName(QString::fromUtf8("RegGoBackButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(RegGoBackButton->sizePolicy().hasHeightForWidth());
        RegGoBackButton->setSizePolicy(sizePolicy2);
        RegGoBackButton->setMinimumSize(QSize(40, 40));
        RegGoBackButton->setMaximumSize(QSize(30, 30));

        horizontalLayout_2->addWidget(RegGoBackButton);

        horizontalSpacer_5 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        gridLayout_4->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(-1, 20, -1, -1);
        RegRegButton = new QPushButton(RegMenu);
        RegRegButton->setObjectName(QString::fromUtf8("RegRegButton"));
        sizePolicy.setHeightForWidth(RegRegButton->sizePolicy().hasHeightForWidth());
        RegRegButton->setSizePolicy(sizePolicy);
        RegRegButton->setMinimumSize(QSize(50, 25));
        RegRegButton->setMaximumSize(QSize(300, 55));

        gridLayout_5->addWidget(RegRegButton, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        verticalSpacer_5 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_5, 1, 1, 1, 1);

        gridLayout_5->setRowStretch(0, 5);
        gridLayout_5->setRowStretch(1, 6);

        gridLayout_4->addLayout(gridLayout_5, 4, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        RegPassLineEdit = new QLineEdit(RegMenu);
        RegPassLineEdit->setObjectName(QString::fromUtf8("RegPassLineEdit"));
        sizePolicy.setHeightForWidth(RegPassLineEdit->sizePolicy().hasHeightForWidth());
        RegPassLineEdit->setSizePolicy(sizePolicy);
        RegPassLineEdit->setMinimumSize(QSize(200, 27));
        RegPassLineEdit->setMaximumSize(QSize(500, 55));
        RegPassLineEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(RegPassLineEdit, 2, 0, 1, 1);

        RegLogLineEdit = new QLineEdit(RegMenu);
        RegLogLineEdit->setObjectName(QString::fromUtf8("RegLogLineEdit"));
        sizePolicy.setHeightForWidth(RegLogLineEdit->sizePolicy().hasHeightForWidth());
        RegLogLineEdit->setSizePolicy(sizePolicy);
        RegLogLineEdit->setMinimumSize(QSize(200, 27));
        RegLogLineEdit->setMaximumSize(QSize(500, 55));
        RegLogLineEdit->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(RegLogLineEdit, 1, 0, 1, 1);

        RegConfLineEdit = new QLineEdit(RegMenu);
        RegConfLineEdit->setObjectName(QString::fromUtf8("RegConfLineEdit"));
        sizePolicy.setHeightForWidth(RegConfLineEdit->sizePolicy().hasHeightForWidth());
        RegConfLineEdit->setSizePolicy(sizePolicy);
        RegConfLineEdit->setMinimumSize(QSize(200, 27));
        RegConfLineEdit->setMaximumSize(QSize(500, 55));
        RegConfLineEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(RegConfLineEdit, 3, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 0, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 10);
        gridLayout->setRowStretch(2, 10);
        gridLayout->setRowStretch(3, 10);

        gridLayout_4->addLayout(gridLayout, 3, 1, 1, 1);

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
        QWidget::setTabOrder(RegLogLineEdit, RegPassLineEdit);
        QWidget::setTabOrder(RegPassLineEdit, RegConfLineEdit);
        QWidget::setTabOrder(RegConfLineEdit, RegRegButton);
        QWidget::setTabOrder(RegRegButton, RegGoBackButton);
        QWidget::setTabOrder(RegGoBackButton, LoginLineEdit);
        QWidget::setTabOrder(LoginLineEdit, PassLineEdit);
        QWidget::setTabOrder(PassLineEdit, RemMeCheckBox);
        QWidget::setTabOrder(RemMeCheckBox, LogButton);
        QWidget::setTabOrder(LogButton, RegButton);
        QWidget::setTabOrder(RegButton, ExitButton);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        ExitButton->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        RegButton->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        LogButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        PassLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        RemMeCheckBox->setText(QCoreApplication::translate("MainWindow", "Remember me", nullptr));
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
        RegGoBackButton->setText(QCoreApplication::translate("MainWindow", "\342\206\220", nullptr));
        RegRegButton->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        RegPassLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        RegLogLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        RegConfLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Confirm password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
