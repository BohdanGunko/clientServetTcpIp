#ifndef PURCHASESMENU_H
#define PURCHASESMENU_H

#include <QWidget>
#include <buytickets.h>
#include <reserveticketsmenu.h>
#include <backend.h>

namespace Ui
{
class PurchasesMenu;
}

class PurchasesMenu : public QWidget
{
    Q_OBJECT

public:
    explicit PurchasesMenu(BackEnd* bckEnd, QWidget* parent = nullptr);
    ~PurchasesMenu();
    bool eventFilter(QObject* watched, QEvent* event);	// for handling on button click event

private:
    Ui::PurchasesMenu* ui;
    BuyTickets* BuyScreen;
    reserveTicketsMenu* reserveScreen;
    BackEnd* bckEnd;
    void setIcons();											// set icons on start of ui
    void setEnterIcon(QObject* watched);	// set new icon when mouse enter button
    void setLeaveIcon(QObject* watched);	// set new icon when mouse leave button
    void setFocusIcon(QObject* watched);	// set new icon when button was clicked
    void showTicketsForCurrentUser();
signals:
    void _dataToSend(QByteArray dataToSend);	// emit this signal when you need send data to server
};

#endif	// PURCHASESMENU_H
