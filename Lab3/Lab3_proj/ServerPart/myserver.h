#ifndef MYSERVER_H
#define MYSERVER_H

// secondary libraries
#include <QDebug>
#include <QList>
#include <QObject>
// server stuff
#include <QTcpServer>
#include <QTcpSocket>
// JSON
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>
// SQL
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

class myServer : public QTcpServer
{
    Q_OBJECT
public:
    myServer();
    ~myServer();
    QByteArray recievedData;
    QList<QTcpSocket*>* connectedClients;
    QJsonDocument* jsnDoc;
    QJsonParseError* errJsn = new QJsonParseError();
    QJsonObject* obj;
    QSqlDatabase* db;
    QSqlQuery* qry;
    void decAndExec(QJsonDocument* doc, QTcpSocket* socket);
    void startServer();
    void logProc(QTcpSocket* socket);
    void regProc(QTcpSocket* socket);
    void getCities(QTcpSocket* socket);
    void getTrainsList(QTcpSocket* socket);
    void getAvailableSeats(QTcpSocket* socket);
    void buyTicket(QTcpSocket* socket);
    void getUserTickets(QTcpSocket* socket);
public slots:
    void incomingConnection(qintptr socketDescriptor);
    void sockReady();
    void sockDisc();
};

#endif	// MYSERVER_H
