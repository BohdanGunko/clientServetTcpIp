#ifndef PURCHASESMENU_H
#define PURCHASESMENU_H

#include <QWidget>
#include<buytickets.h>

namespace Ui {
class PurchasesMenu;
}

class PurchasesMenu : public QWidget
{
    Q_OBJECT

public:
    explicit PurchasesMenu(QWidget *parent = nullptr);
    ~PurchasesMenu();
    bool eventFilter(QObject * watched, QEvent * event);    //for handling on button click event

private:
    Ui::PurchasesMenu *ui;
    void setIcons();    //set icons on start of ui
    void setEnterIcon (QObject * watched);  //set new icon when mouse enter button
    void setLeaveIcon (QObject * watched);  //set new icon when mouse leave button
    void setFocusIcon (QObject * watched);  //set new icon when button was clicked
    BuyTickets BuyScreen;
};

#endif // PURCHASESMENU_H
