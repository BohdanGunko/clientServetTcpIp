#ifndef BUYTICKETS_H
#define BUYTICKETS_H

#include <QWidget>
#include <QCalendarWidget>
namespace Ui {
class BuyTickets;
}

class BuyTickets : public QWidget
{
    Q_OBJECT

public:
    explicit BuyTickets(QWidget *parent = nullptr);
    ~BuyTickets();

private slots:
    void on_SearchButton_clicked();

private:
    Ui::BuyTickets *ui;
};

#endif // BUYTICKETS_H
