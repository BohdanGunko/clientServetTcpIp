#include "myserver.h"
#include <QDebug>


myServer::myServer() {};
myServer::~myServer() {};

void myServer::startServer()
{
    QHostAddress _adres;
    _adres.setAddress(QHostAddress::LocalHost);
    if(this->listen(_adres, 80))
    {
        qDebug()<<"listening"<<_adres.toIPv4Address();

    }
    else
    {
        qDebug()<<"not listening"<<_adres.toIPv4Address();
    }
}

void myServer::incomingConnection(qintptr socketDescriptor)
{
    socket = new QTcpSocket(this);
    socket->setSocketDescriptor(socketDescriptor);
        connect(socket, SIGNAL(readyRead()), this, SLOT(sockReady()));
        connect (socket, SIGNAL(disconnected()),this, SLOT(sockDisc()));
    qDebug()<<"Client is connected"<<"   "<<socketDescriptor;
    socket->write("U r connected test msg");
    socket->waitForBytesWritten(3000);

}

void myServer::sockReady()
{

}

void myServer::sockDisc()
{
    qDebug()<<"Disconected";
    socket->deleteLater();
}


