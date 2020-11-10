#ifndef BUYTICKETS_H
#define BUYTICKETS_H

#include <QWidget>

namespace Ui {
class BuyTickets;
}

class BuyTickets : public QWidget
{
    Q_OBJECT

public:
    explicit BuyTickets(QWidget *parent = nullptr);
    ~BuyTickets();

private:
    Ui::BuyTickets *ui;
};

#endif // BUYTICKETS_H
