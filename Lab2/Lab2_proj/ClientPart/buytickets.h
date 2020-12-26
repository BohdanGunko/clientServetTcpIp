#ifndef BUYTICKETS_H
#define BUYTICKETS_H

// secondary libraries
#include <QWidget>
#include <QDebug>
#include <backend.h>
// auto complition
#include <QCompleter>
#include <QWhatsThis>
#include <customButton.h>

#include <QStandardItemModel>
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
    void showTrainsList(QStringList trainsList);
    void on_TrainsTable_pressed(const QModelIndex& index);
    void on_goToTrainSelect_clicked();
    void showAvailableSeats(QString wagonCount, QStringList takenSeats);
    void changeWagon(int wagonNumber);
    void showTicketPurchaseMenu(int seatNumber);
    void on_buyTicketButton_clicked();
    void on_reserveTicketButton_clicked();
    void ticketPurchaseDone();

private:
    Ui::BuyTickets* ui;
    QStandardItemModel* trainModel;
    BackEnd* bckEnd;
    QCompleter* depCompleter;
    QCompleter* destCompleter;
    QVector<customButton*>* seatsList;
    QVector<customButton*>* wagonsList;
    QString depTxt;
    QString destTxt;
    QString dateTxt;
    QString timeTxt;
    QString trainId;
    QStringList* cityList;
    QStringList* takenSeatslist;
    QModelIndex trainTableIndex;
    int currentWagon;
    int currentSeat;

    void setShadowEff();	// set shadows in BuyTickets menu
    void deleteSeatsAndWagons();
    void showSeatsForWagon(int wagonNumber);
    int countFreeSpaces(QString wagonNumber);
    void buyOrReserveTicket(QString buyOrReserve);
signals:
    void _dataToSend(QByteArray dataToSend);
};

#endif	// BUYTICKETS_H
