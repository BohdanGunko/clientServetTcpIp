#ifndef BUYTICKETS_H
#define BUYTICKETS_H

#include <QWidget>
#include <QCalendarWidget>
#include <backend.h>
namespace Ui
{
class BuyTickets;
}

class BuyTickets : public QWidget
{
    Q_OBJECT

public:
    explicit BuyTickets(BackEnd* bckEnd, QWidget* parent = nullptr);
    ~BuyTickets();

private slots:
    void on_SearchButton_clicked();
    void on_ReverseDepDest_clicked();
    void aComplete(QStringList cList);

private:
    Ui::BuyTickets* ui;
    BackEnd* bckEnd;
    void setShadowEff();	// set shadows in BuyTickets menu
};

#endif	// BUYTICKETS_H
