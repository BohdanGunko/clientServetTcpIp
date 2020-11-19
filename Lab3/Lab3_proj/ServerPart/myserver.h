#ifndef MYSERVER_H
#define MYSERVER_H

//secondary libraries
#include <QObject>
#include <QList>
#include <QDebug>
//server stuff
#include <QTcpServer>
#include <QTcpSocket>
//JSON
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>
//SQL
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlError>

class myServer : public QTcpServer
{
    Q_OBJECT
public:
    myServer();
    ~myServer();
    QByteArray recievedData;
    QList <QTcpSocket*> *connectedClients;
    QJsonDocument* jsnDoc;
    QJsonParseError* errJsn = new QJsonParseError();
    QJsonObject* obj;
    QSqlDatabase* db;
    QSqlQuery* qry;

    void decEndExec(QJsonDocument* doc, QTcpSocket* socket);

public slots:
    void startServer();
    void incomingConnection(qintptr socketDescriptor);
    void sockReady();
    void sockDisc();


};

#endif // MYSERVER_H
