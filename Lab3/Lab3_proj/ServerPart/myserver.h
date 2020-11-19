#ifndef MYSERVER_H
#define MYSERVER_H


#include <QTcpServer>
#include <QTcpSocket>
#include <QObject>
#include <QList>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>

class myServer : public QTcpServer
{
    Q_OBJECT
public:
    myServer();
    ~myServer();
    QTcpSocket* socket;
    QByteArray recievedData;
    QList <QTcpSocket*> *connectedClients;
    QJsonDocument* jsnDoc;
    QJsonParseError* errJsn;
    QJsonObject* obj;
    void decEndExec(QJsonDocument* doc);

public slots:
    void startServer();
    void incomingConnection(qintptr socketDescriptor);
    void sockReady();
    void sockDisc();


};

#endif // MYSERVER_H
