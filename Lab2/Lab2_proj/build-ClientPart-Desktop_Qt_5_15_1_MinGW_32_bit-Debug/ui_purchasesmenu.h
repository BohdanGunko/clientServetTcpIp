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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PurchasesMenu
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *PurchasesMenu)
    {
        if (PurchasesMenu->objectName().isEmpty())
            PurchasesMenu->setObjectName(QString::fromUtf8("PurchasesMenu"));
        PurchasesMenu->resize(571, 341);
        pushButton = new QPushButton(PurchasesMenu);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(80, 150, 80, 21));
        pushButton_2 = new QPushButton(PurchasesMenu);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 150, 80, 21));

        retranslateUi(PurchasesMenu);

        QMetaObject::connectSlotsByName(PurchasesMenu);
    } // setupUi

    void retranslateUi(QWidget *PurchasesMenu)
    {
        PurchasesMenu->setWindowTitle(QCoreApplication::translate("PurchasesMenu", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("PurchasesMenu", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("PurchasesMenu", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PurchasesMenu: public Ui_PurchasesMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PURCHASESMENU_H
