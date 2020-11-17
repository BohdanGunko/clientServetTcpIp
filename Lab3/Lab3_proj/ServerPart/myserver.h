#ifndef MYSERVER_H
#define MYSERVER_H


#include <QTcpServer>
#include <QTcpSocket>

class myServer : public QTcpServer
{
public:
    myServer();
    ~myServer();
    QTcpSocket* socket;

public slots:
    void startServer();
    void incomingConnection(qintptr socketDescriptor);
    void sockReady();
    void sockDisc();
};

#endif // MYSERVER_H
