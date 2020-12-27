#include "backend.h"

BackEnd::BackEnd(QObject* parent) : QObject(parent)
{
    errJsn = new QJsonParseError();
    obj = new QJsonObject();
    jsnDoc = new QJsonDocument();
    socket = nullptr;
}

BackEnd::~BackEnd()
{
    delete socket;
    delete obj;
    delete errJsn;
    delete jsnDoc;
}

void BackEnd::setCurUsername(QString userName)
{
    this->curUsername = userName;
}

QString BackEnd::getCurUserame()
{
    return this->curUsername;
}

void BackEnd::showErrorMsg(QWidget* widget, QString errMsg)
{
    QWhatsThis::showText(widget->mapToGlobal(QPoint(widget->width() / 2, widget->height())),
                                             "<html><font style =\"font: 12px;\">" + errMsg + "</font></html>");
}

void BackEnd::createSocket()
{
    delete socket;
    socket = new QTcpSocket();
    connect(socket, SIGNAL(readyRead()), this, SLOT(sockReady()));
    connect(socket, SIGNAL(disconnected()), this, SLOT(sockDisc()));

    tryToReccon();
}

void BackEnd::tryToReccon()
{
    //    // try to recconect to server
    //    socket->connectToHost("178.137.161.32", 27000);
    //
    //    // wait for connection to be established
    //    socket->waitForConnected(7000);

    socket->connectToHost("127.0.0.1", 27000);

    socket->waitForConnected(7000);

    if (socket->state() != QTcpSocket::ConnectedState)
    {
        emit _reconnFailed();
    }

    else
    {
        emit _reconnSuccess();
    }
}

void BackEnd::sendData(QByteArray dataToSend)
{
    if (socket->state() == QTcpSocket::ConnectedState)
    {
        socket->write(dataToSend);
        socket->waitForBytesWritten(1500);
    }
    else
    {
        tryToReccon();
    }
}

// when recieved data from server
void BackEnd::sockReady()
{
    if (socket->waitForConnected(1500))
    {
        recievedData = socket->readAll();

        *jsnDoc = QJsonDocument::fromJson(recievedData, errJsn);

        *obj = jsnDoc->object();

        if (errJsn->errorString().toInt() == QJsonParseError::NoError)
        {
            decAndExec();
            return;
        }

        else
        {
            // to do: show can not convert err msg box
            qDebug() << "Can not convert convetr data from server";
            return;
        }
    }

    else
    {
        // to do: show can not convert err msg box
        qDebug() << "Can not read data from server: Connestion failed";
        return;
    }
}

void BackEnd::decAndExec()
{
    qDebug()<<obj->value("operation").toString();
    if (obj->value("operation").toString() == "login")
    {
        logProc();
    }

    else if (obj->value("operation").toString() == "register")
    {
        regProc();
    }
    else if (obj->value("operation").toString() == "getCities")
    {
        cListProc();
    }
    else if (obj->value("operation").toString() == "getTrainsList")
    {
        trainsListProc();
    }
    else if (obj->value("operation").toString() == "getAvailableSeats")
    {
        getAvailableSeats();
    }
    else if (obj->value("operation").toString() == "buyTicket")
    {
        buyTicket();
    }
    else if (obj->value("operation").toString() == "getUserTickets")
    {
        getUserTickets();
    }
    else if (obj->value("operation").toString() == "buyReservedTicket")
    {
        buyReservedTicket();
    }
    else if (obj->value("operation").toString() == "returnTicket")
    {
        returnTicket();
    }
    else
    {
        // to do: show bad respond msg
        emit _errSignalMW(obj->value("err").toString());
    }
}

void BackEnd::sockDisc()
{
    emit _reconnFailed();
}

void BackEnd::logProc()
{
    if (obj->value("resp").toString() == "ok")
    {
        emit _logSuccess();
    }

    else
    {
        emit _errSignalMW(obj->value("err").toString());
    }
}

void BackEnd::regProc()
{
    if (obj->value("resp").toString() == "ok")
    {
        emit _regSuccess();
    }

    else
    {
        emit _errSignalMW(obj->value("err").toString());
    }
}

void BackEnd::cListProc()
{
    if (obj->value("resp").toString() == "ok")
    {
        emit _cList(obj->value("data").toVariant().toStringList());
    }

    else
    {
        emit _errSignalMW(obj->value("err").toString());
    }
}

void BackEnd::trainsListProc()
{
    if (obj->value("resp").toString() == "ok")
    {
        emit _trainsList(obj->value("data").toVariant().toJsonArray().toVariantList());
    }

    else
    {
        emit _errSignalMW(obj->value("err").toString());
    }
}

void BackEnd::getAvailableSeats()
{
    if (obj->value("resp").toString() == "ok")
    {
        emit _availableSeats(obj->value("wagons").toString(), obj->value("data").toVariant().toStringList());
    }
    else
    {
        emit _errSignalMW(obj->value("err").toString());
    }
}

void BackEnd::buyTicket()
{
    if (obj->value("resp").toString() == "ok")
    {
        emit _ticketPurchaseSuccess();
    }
    else if (obj->value("resp").toString() == "alreadyTaken")
    {
         emit _ticketAlreadyTaken();
    }
    else
    {
        emit _errSignalMW(obj->value("err").toString());
    }

}

void BackEnd::getUserTickets()
{
    if (obj->value("resp").toString() == "ok")
    {
        emit _userTickets(obj->value("unActiveTickets").toVariant().toJsonArray().toVariantList(),
                                            obj->value("boughtTickets").toVariant().toJsonArray().toVariantList(),
                                            obj->value("reservedTickets").toVariant().toJsonArray().toVariantList());
    }

    else
    {
        emit _errSignalMW(obj->value("err").toString());
    }
}

void BackEnd::buyReservedTicket()
{
    emit _reservedTicketBought();
}

void BackEnd::returnTicket()
{
    emit _returnTicket();
}
