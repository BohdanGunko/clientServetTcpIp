#include "backend.h"

BackEnd::BackEnd(QObject* parent) : QObject(parent)
{
}
// create socket and try connecting to sever
void BackEnd::createSocket()
{
    // create socket and connect signals
    socket = new QTcpSocket();
    connect(socket, SIGNAL(readyRead()), this, SLOT(sockReady()));
    connect(socket, SIGNAL(disconnected()), this, SLOT(sockDisc()));

    // try connecting to server
    tryToReccon();
}

// trying to reconnect to server
void BackEnd::tryToReccon()
{
    // try to recconect to server
    socket->connectToHost("178.137.161.32", 27000);

    // wait for connection to be established
    socket->waitForConnected(7000);

    // if connection was not established
    if (socket->state() != QTcpSocket::ConnectedState)
    {
        emit _reconnFailed();
    }
    // if we connected
    else
    {
        emit _reconnSuccess();
    }
}

// send data to server
void BackEnd::sendData(QByteArray dataToSend)
{
    socket->write(dataToSend);
    socket->waitForBytesWritten(1500);
}

void BackEnd::sockDisk()
{
    socket->waitForConnected(5000);
}

// when recieved data from server
void BackEnd::sockReady()
{
    // wait for stable connection
    if (socket->waitForConnected(1500))
    {
        // read all data
        recievedData = socket->readAll();

        // create new JSON doc
        jsnDoc = new QJsonDocument();

        // convert recieved data to JSON format
        *jsnDoc = QJsonDocument::fromJson(recievedData, errJsn);

        // get JSON object from JSON document
        *obj = jsnDoc->object();

        // chack if convertion is successful
        if (errJsn->errorString().toInt() == QJsonParseError::NoError)
        {
            // do smt accordin to command from server
            decEndExec();
            return;
        }
        // if data could not be converted to json
        else
        {
            // to do: show can not convert err msg box

            return;
        }
    }
    // if connecting failed
    else
    {
        // show bad connection error
        qDebug() << "Can not read data from client: Connestion failed";
        return;
    }
}

// decode server respond and do needed things
void BackEnd::decEndExec()
{
    // if it is respond to login process
    if (obj->value("operation").toString() == "login")
    {
        // call login funct
        logProc();
    }
    // if it is respond to registration process
    else if (obj->value("operation").toString() == "register")
    {
        regProc();
    }
    // if server send unknown operation
    else
    {
        // to do: show bad respond msg
    }
}
//// disconnect from server event
void BackEnd::sockDisc()
{
    emit _reconnFailed();
}

// reacting to login reslond
void BackEnd::logProc()
{
    // if log and pass are good
    if (obj->value("resp").toString() == "ok")
    {
        emit _logSuccess();
    }
    // if smt went wrong
    else
    {
        emit _errSignal("Ligon error", obj->value("err").toString());
    }
}

// reacting to registration reslond
void BackEnd::regProc()
{
    // if registration is successful
    if (obj->value("resp").toString() == "ok")
    {
        emit _regSuccess();
    }
    // if smt went wrong
    else
    {
        emit _errSignal("Registration error", obj->value("err").toString());
    }
}
