#ifndef RESERVETICKETSMENU_H
#define RESERVETICKETSMENU_H

#include <QWidget>
#include <backend.h>
#include <QStandardItemModel>

namespace Ui
{
class reserveTicketsMenu;
}

class reserveTicketsMenu : public QWidget
{
    Q_OBJECT

public:
    explicit reserveTicketsMenu( BackEnd* bckEnd, QWidget* parent = nullptr);
    ~reserveTicketsMenu();

private:
    Ui::reserveTicketsMenu* ui;
    BackEnd* bckEnd;
    QStandardItemModel* unActiveTicketsModel;
    QStandardItemModel* reservedTicketsModel;
    QStandardItemModel* boughtTicketsModel;

private slots:
    void showUserTickets(QStringList unActiveTickets, QStringList boughtTickets, QStringList reservedTickets);
};

#endif	// RESERVETICKETSMENU_H
