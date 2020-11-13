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

private slots:
    void on_SearchButton_clicked();

    void on_DateEdit_customContextMenuRequested(const QPoint &pos);

    void on_DateEdit_userDateChanged(const QDate &date);

private:
    Ui::BuyTickets *ui;
};

#endif // BUYTICKETS_H
