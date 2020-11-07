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

private:
    Ui::PurchasesMenu *ui;
};

#endif // PURCHASESMENU_H
