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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PurchasesMenu
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pushButton_3;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QStackedWidget *stackedWidget;

    void setupUi(QWidget *PurchasesMenu)
    {
        if (PurchasesMenu->objectName().isEmpty())
            PurchasesMenu->setObjectName(QString::fromUtf8("PurchasesMenu"));
        PurchasesMenu->resize(532, 426);
        horizontalLayout = new QHBoxLayout(PurchasesMenu);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        widget_2 = new QWidget(PurchasesMenu);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 57, 60);"));
        verticalLayout_6 = new QVBoxLayout(widget_2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        pushButton_3 = new QPushButton(widget_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_6->addWidget(pushButton_3);


        gridLayout_2->addWidget(widget_2, 2, 0, 1, 1);

        widget_3 = new QWidget(PurchasesMenu);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 57, 60);"));
        verticalLayout_5 = new QVBoxLayout(widget_3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        pushButton_2 = new QPushButton(widget_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_5->addWidget(pushButton_2);


        gridLayout_2->addWidget(widget_3, 1, 0, 1, 1);

        widget = new QWidget(PurchasesMenu);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 57, 60);"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);


        gridLayout_2->addWidget(widget, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        stackedWidget = new QStackedWidget(PurchasesMenu);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(PurchasesMenu);

        QMetaObject::connectSlotsByName(PurchasesMenu);
    } // setupUi

    void retranslateUi(QWidget *PurchasesMenu)
    {
        PurchasesMenu->setWindowTitle(QCoreApplication::translate("PurchasesMenu", "Form", nullptr));
        pushButton_3->setText(QCoreApplication::translate("PurchasesMenu", "3", nullptr));
        pushButton_2->setText(QCoreApplication::translate("PurchasesMenu", "2", nullptr));
#if QT_CONFIG(tooltip)
        pushButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton->setText(QCoreApplication::translate("PurchasesMenu", "1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PurchasesMenu: public Ui_PurchasesMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PURCHASESMENU_H
