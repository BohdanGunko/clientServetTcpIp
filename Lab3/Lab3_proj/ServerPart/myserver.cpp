#include "myserver.h"
#include <QDebug>
#include <QNetworkInterface>
#include <QLocalServer>
#include <QHostInfo>
#include <QDnsLookup>

myServer::myServer() {};
myServer::~myServer() {}

void myServer::writeToClient(QByteArray text)
{
    socket->write(text);
    socket->waitForBytesWritten(1500);
};

void myServer::startServer()
{


    QHostAddress _adress("192.168.0.102");

    if(this->listen(_adress, 27000))
    {
        qDebug()<<"listening"<<_adress;

    }
    else
    {
        qDebug()<<"not listening"<<_adress;
    }
}

void myServer::incomingConnection(qintptr socketDescriptor)
{
    socket = new QTcpSocket(this);
    socket->setSocketDescriptor(socketDescriptor);
        connect(socket,SIGNAL(readyRead()),this, SLOT(sockReady()));
        connect(socket, SIGNAL(disconnected()),this, SLOT(sockDisc()));
    qDebug()<<"Client is connected"<<"   "<<socketDescriptor;
    socket->write("U r connected test msg");
    socket->waitForBytesWritten(3000);

}

void myServer::sockReady()
{
    //wait for stable connection
    if(socket->waitForConnected(1500))
    {
        //read all data
        recievedData = socket->readAll();
        qDebug()<<"Recieved data from client: "<<recievedData;
    }
    //if connecting failed
    else
    {
        qDebug()<<"Can not read data from client";
    }
}

void myServer::sockDisc()
{
    qDebug()<<"Disconected";
    socket->deleteLater();
}


