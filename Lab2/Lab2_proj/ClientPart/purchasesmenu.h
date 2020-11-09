#ifndef PURCHASESMENU_H
#define PURCHASESMENU_H

#include <QWidget>

namespace Ui {
class PurchasesMenu;
}

class PurchasesMenu : public QWidget
{
    Q_OBJECT

public:
    explicit PurchasesMenu(QWidget *parent = nullptr);
    ~PurchasesMenu();
    bool eventFilter(QObject * watched, QEvent * event);


private:
    Ui::PurchasesMenu *ui;
    void setEnterIcon (QObject * watched);
    void setLeaveIcon (QObject * watched);
    void setFocusIcon (QObject * watched);
};

#endif // PURCHASESMENU_H
