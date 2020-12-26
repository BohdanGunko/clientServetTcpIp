#ifndef BACKEND_H
#define BACKEND_H

#include <QMessageBox>
#include <QObject>

#include <QTcpSocket>

#include <QJsonObject>
#include <QJsonParseError>
#include <QJsonDocument>
#include <QPushButton>

class BackEnd : public QObject
{
    Q_OBJECT
public:
    explicit BackEnd(QObject* parent = nullptr);
    ~BackEnd();
    QTcpSocket* socket;
    QByteArray recievedData;
    QJsonDocument* jsnDoc;
    QJsonParseError* errJsn;
    QJsonObject* obj;
    QString curUsername;
    void decAndExec();
    void logProc();
    void regProc();
    void cListProc();
    void trainsListProc();
    void getAvailableSeats();
    void buyTicket();
    void getUserTickets();

public slots:
    void createSocket();	// create and init socket with IP and port number
    void sendData(QByteArray dataToSend);
    void sockReady();	 // reading from socket
    void tryToReccon();
    void sockDisc();

signals:
    void _reconnFailed();
    void _reconnSuccess();
    void _logSuccess();
    void _regSuccess();
    void _errSignalMW(QString info);
    void _cList(QStringList cList);
    void _trainsList(QStringList trainsList);
    void _availableSeats(QString wagonsCounr, QStringList trainsList);
    void _ticketPurchaseSuccess();
    void _userTickets(QStringList unActiveTickets, QStringList boughtTickets, QStringList reservedTickets);
};

#endif	// BACKEND_H
