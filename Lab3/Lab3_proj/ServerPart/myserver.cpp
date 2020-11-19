#include "myserver.h"
#include <QDebug>

myServer::myServer()
{
    connectedClients = new QList <QTcpSocket*>();

};
myServer::~myServer() {}

//start server and make it listening local ip
void myServer::startServer()
{
    QHostAddress _adress("192.168.0.102");

    //check if server started
    if(this->listen(_adress, 27000))
    {
        qDebug()<<"listening"<<_adress;
    }
    else
    {
        qDebug()<<"not listening"<<_adress;
    }
}

//to handle disconnection from server
void myServer::sockDisc()
{
    socket = qobject_cast<QTcpSocket*>(sender());
    qDebug()<<"Disconected";
    socket->deleteLater();
}

//gets executed when new client connects to server
void myServer::incomingConnection(qintptr socketDescriptor)
{
    //detect connected client info
    socket =new QTcpSocket();

    //set uniqe descriptor to client to be able to identify it later
    socket->setSocketDescriptor(socketDescriptor);

    //add client to list of connected clients
    connectedClients->append(socket);
        connect(socket,SIGNAL(readyRead()),this, SLOT(sockReady()));
        connect(socket, SIGNAL(disconnected()),this, SLOT(sockDisc()));

    qDebug()<<"Client is connected"<<"   "<<socketDescriptor;
    //to do: send to client connection status as "Ok"
}

//this func gets exec when server recieve smt from client
void myServer::sockReady()
{
    //detect sender info
    socket = qobject_cast<QTcpSocket*>(sender());

    //wait for stable connection
    if(socket->waitForConnected(1500))
    {
        //read all data
        recievedData = socket->readAll();

        //create new JSON doc
        jsnDoc = new QJsonDocument();

        //convert recieved data to JSON format
        *jsnDoc = QJsonDocument::fromJson(recievedData, errJsn);

        //chack if convertion eas successful
        if(errJsn->errorString().toInt() == QJsonParseError::NoError)
        {
            //do smt accordin to command from client
            decEndExec(jsnDoc);
            return;
        }
        else
        {
            //to do:handle if data could not be converted to json
            //send client msg about bad data format
            qDebug()<<"Can not convert to JSON";
            return;
        }
    }
    //if connecting failed
    else
    {
        qDebug()<<"Can not read data from client";
        return;
    }
}



//find what command does client send and do needed things to execute it
void myServer::decEndExec(QJsonDocument *doc)
{
    obj = new QJsonObject;
    *obj = doc->object();

    if(obj->value("operation") == "login"){
        //do smt to login
        qDebug()<<"Someone tries to login";
    }
    //if we dont know command that client send
    else{
        //to do:send to cliend command error msg
    }
};

