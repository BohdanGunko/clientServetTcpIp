#include "myserver.h"

myServer::myServer()
{
    connectedClients = new QList<QTcpSocket*>();
};

myServer::~myServer()
{
}

void myServer::startServer()
{
    QHostAddress _adress("127.0.0.1");

    if (this->listen(_adress, 27000))
    {
        qDebug() << "Server listening to: " << _adress;

        QString serverName = "GF65\\SQLEXPRESS";
        QString dbName = "TrainsDb";
        db = new QSqlDatabase();
        *db = QSqlDatabase::addDatabase("QODBC");
        QString dsn = QString("Driver={SQL Server};Server=%1;Database=%2;Trusted_Connection=Yes;").arg(serverName).arg(dbName);
        db->setDatabaseName(dsn);

        if (db->open())
        {
            qDebug() << "Database opened";
            qry = new QSqlQuery(*db);
        }
        else
        {
            qDebug() << "Database not opened with ERROR: " << db->lastError().text();
        }
    }
    else
    {
        qDebug() << "Server NOT listening to:" << _adress;
    }
}

void myServer::sockDisc()
{
    QTcpSocket* socket;
    socket = new QTcpSocket();
    socket = qobject_cast<QTcpSocket*>(sender());
    socket->deleteLater();

    qDebug() << "Disconected";
}

void myServer::incomingConnection(qintptr socketDescriptor)
{
    QTcpSocket* socket;
    socket = new QTcpSocket();

    // set uniqe descriptor to client to be able to identify it later
    socket->setSocketDescriptor(socketDescriptor);

    // add client to list of connected clients
    connectedClients->append(socket);
    connect(socket, SIGNAL(readyRead()), this, SLOT(sockReady()));
    connect(socket, SIGNAL(disconnected()), this, SLOT(sockDisc()));

    qDebug() << "Client is connected    " << socketDescriptor;
}

void myServer::sockReady()
{
    QTcpSocket* socket;
    socket = new QTcpSocket();

    socket = qobject_cast<QTcpSocket*>(sender());

    if (socket->waitForConnected(1500))
    {
        recievedData = socket->readAll();

        qDebug() << recievedData;

        jsnDoc = new QJsonDocument();

        *jsnDoc = QJsonDocument::fromJson(recievedData, errJsn);

        if (errJsn->errorString().toInt() == QJsonParseError::NoError)
        {
            decAndExec(jsnDoc, socket);
            return;
        }
        else
        {
            socket->write("{\"operation\":\"fatalErr\", \"resp\":\"bad\", \"err\":\"Something went wrong when transfering data.  Please restart the "
                                        "app\"}");
            socket->waitForBytesWritten(1500);
            return;
        }
    }

    else
    {
        socket->write("{\"operation\":\"fatalErr\", \"resp\":\"bad\", \"err\":\"Something went wrong when transfering data.  Please restart the "
                                    "app\"}");
        socket->waitForBytesWritten(1500);

        qDebug() << "Can not read data from client: Connestion failed";
        return;
    }
}

void myServer::decAndExec(QJsonDocument* doc, QTcpSocket* socket)
{
    obj = new QJsonObject;
    *obj = doc->object();

    if (obj->value("operation") == "login")
    {
        logProc(socket);
    }
    else if (obj->value("operation") == "register")
    {
        regProc(socket);
    }
    else if (obj->value("operation") == "getCities")
    {
        getCities(socket);
    }
    else if (obj->value("operation") == "getTrainsList")
    {
        getTrainsList(socket);
    }
    else if (obj->value("operation") == "getAvailableSeats")
    {
        getAvailableSeats(socket);
    }
    else if (obj->value("operation") == "buyTicket")
    {
        buyTicket(socket);
    }
    else if (obj->value("operation") == "getUserTickets")
    {
        getUserTickets(socket);
    }

    else
    {
        socket->write("{\"operation\":\"fatalErr\", \"resp\":\"bad\", \"err\":\"Something went wrong when transfering data. Please restart the app\"}");
        socket->waitForBytesWritten(1500);
    }
}

void myServer::logProc(QTcpSocket* socket)
{
    qry->prepare("select * from uInfo where uLog like :log COLLATE SQL_Latin1_General_Cp1_CS_AS");
    qry->bindValue(":log", obj->value("log").toString());

    if (qry->exec())
    {
        if (qry->next())
        {
            if (qry->value(1).toString() == obj->value("pass").toString())
            {
                socket->write("{\"operation\":\"login\", \"resp\":\"ok\"}");
                socket->waitForBytesWritten(1500);
            }

            else
            {
                socket->write("{\"operation\":\"login\", \"resp\":\"bad\", \"err\":\"Invalid password\"}");
                socket->waitForBytesWritten(1500);
            }
        }

        else
        {
            socket->write("{\"operation\":\"login\", \"resp\":\"bad\", \"err\":\"Login doesn't exist\"}");
            socket->waitForBytesWritten(1500);
        }
    }
    else
    {
        socket->write("{\"operation\":\"fatalErr\", \"resp\":\"bad\", \"err\":\"Something went wrong when transfering data. Please restart the app\"}");
        socket->waitForBytesWritten(1500);
    }
}

void myServer::regProc(QTcpSocket* socket)
{
    qry->prepare("select * from uInfo where uLog like :log COLLATE SQL_Latin1_General_Cp1_CS_AS");
    qry->bindValue(":log", obj->value("log").toString());

    if (qry->exec())
    {
        if (qry->next())
        {
            socket->write("{\"operation\":\"register\", \"resp\":\"bad\", \"err\":\"User already exist\"}");
            socket->waitForBytesWritten(1500);
        }

        else
        {
            qry->prepare("insert into uInfo (uLog, uPass) values (:log, :pass)");
            qry->bindValue(":log", obj->value("log").toString());
            qry->bindValue(":pass", obj->value("pass").toString());

            if (qry->exec())
            {
                socket->write("{\"operation\":\"register\", \"resp\":\"ok\"}");
                socket->waitForBytesWritten(1500);
            }
            else
            {
                socket->write("{\"operation\":\"fatalErr\", \"resp\":\"bad\", \"err\":\"Something went wrong when transfering data. Please restart the "
                                            "app\"}");
                socket->waitForBytesWritten(1500);
            }
        }
    }
    else
    {
        socket->write("{\"operation\":\"fatalErr\", \"resp\":\"bad\", \"err\":\"Something went wrong when transfering data. Please restart the app\"}");
        socket->waitForBytesWritten(1500);
    }
}

void myServer::getCities(QTcpSocket* socket)
{
    if (qry->exec("select * from citiesList"))
    {
        QString cList = "{\"operation\":\"getCities\", \"resp\":\"ok\", \"data\":[";

        unsigned dataCounter = 0;
        while (qry->next())
        {
            ++dataCounter;

            cList.push_back("\"" + qry->value(0).toString() + "\",");
        }

        if (dataCounter)
            cList.remove(cList.length() - 1, 1);

        cList.push_back("]}");
        socket->write(cList.toUtf8());
        socket->waitForBytesWritten(1500);
    }
    else
    {
        socket->write("{\"operation\":\"fatalErr\", \"resp\":\"bad\", \"err\":\"Something went wrong when transfering data. Please restart the app\"}");
        socket->waitForBytesWritten(1500);
    }
}

void myServer::getTrainsList(QTcpSocket* socket)
{
    qry->prepare("select * from getNeededTrainsList(:dep, :dest, :date, :time)");
    qry->bindValue(":dep", obj->value("dep").toString());
    qry->bindValue(":dest", obj->value("dest").toString());
    qry->bindValue(":date", obj->value("arrDate").toString());
    qry->bindValue(":time", obj->value("arrTime").toString());

    if (qry->exec())
    {
        QString trainsList = "{\"operation\":\"getTrainsList\", \"resp\":\"ok\", \"data\":";

        QStringList jsonFields = { "trainId",		 "depArriveDate",	 "depArriveTime",	 "dapDepDate",
                                                             "dapDepTime", "destArriveDate", "destArriveTime", "freeSeats" };

        trainsList += createJsonStringFromQuery(jsonFields, qry);

        trainsList += "}";

        socket->write(trainsList.toUtf8());
        socket->waitForBytesWritten(1500);
    }
    else
    {
        socket->write("{\"operation\":\"fatalErr\", \"resp\":\"bad\", \"err\":\"Something went wrong when transfering data. Please restart the app\"}");
        socket->waitForBytesWritten(1500);
    }
}

void myServer::getAvailableSeats(QTcpSocket* socket)
{
    qry->prepare("select MAX(wagonNumber) from wagonsList where trainid = :trainId");
    qry->bindValue(":trainId", obj->value("trainId").toString());

    if (qry->exec())
    {
        qry->next();
        QString notAvailiableSeats = "{\"operation\":\"getAvailableSeats\", \"resp\":\"ok\", \"wagons\":\"" + qry->value(0).toString() + "\", \"data\":[";

        qry->prepare("select * from getAvailablePlaces(:trainDate, :trainId, :dep, :dest)");
        qry->bindValue(":trainDate", obj->value("trainDate").toString());
        qry->bindValue(":trainId", obj->value("trainId").toString());
        qry->bindValue(":dep", obj->value("dep").toString());
        qry->bindValue(":dest", obj->value("dest").toString());

        if (qry->exec())
        {
            unsigned dataCounter = 0;
            while (qry->next())
            {
                for (unsigned short iter = 0; iter < 2; ++iter)
                {
                    ++dataCounter;
                    notAvailiableSeats.push_back("\"" + qry->value(iter).toString() + "\",");
                }
            }
            if (dataCounter)
            {
                notAvailiableSeats.remove(notAvailiableSeats.length() - 1, 1);
            }
            notAvailiableSeats.push_back("]}");

            socket->write(notAvailiableSeats.toUtf8());
            socket->waitForBytesWritten(1500);
        }
        else
        {
            // handle bad query execution
            socket->write("{\"operation\":\"fatalErr\", \"resp\":\"bad\", \"err\":\"Something went wrong when transfering data. Please restart the app\"}");
            socket->waitForBytesWritten(1500);
        }
    }
    else
    {
        // handle bad query execution
        socket->write("{\"operation\":\"fatalErr\", \"resp\":\"bad\", \"err\":\"Something went wrong when transfering data. Please restart the app\"}");
        socket->waitForBytesWritten(1500);
    }
}

void myServer::buyTicket(QTcpSocket* socket)
{
    // check if ticket is still available
    qry->prepare("select * from getAvailablePlaces(:trainDate, :trainId, :dep, :dest)");
    qry->bindValue(":trainDate", obj->value("trainDate").toString());
    qry->bindValue(":trainId", obj->value("trainId").toString());
    qry->bindValue(":dep", obj->value("dep").toString());
    qry->bindValue(":dest", obj->value("dest").toString());

    QString wagonNumber = obj->value("wagonNumber").toString();
    QString placeNumber = obj->value("placeNumber").toString();
    if (qry->exec())
    {
        while (qry->next())
        {
            QString tmp1 = qry->value(0).toString();
            QString tmp2 = qry->value(1).toString();
            if (qry->value(0).toString() == wagonNumber && qry->value(1).toString() == placeNumber)
            {
                QString txtToSend = "{\"operation\":\"buyTicket\", \"resp\":\"alreadyTaken\"}";
                socket->write(txtToSend.toUtf8());
                socket->waitForBytesWritten(1500);
                return;
            }
        }
    }
    else
    {
        socket->write("{\"operation\":\"fatalErr\", \"resp\":\"bad\", \"err\":\"Something went wrong when transfering data. Please restart the "
                                    "app\"}");
        socket->waitForBytesWritten(1500);
    }

    // buy ticket if it is available
    qry->prepare("insert into takenSeats values(:trainDate, :trainId, :wagonNumber, :placeNumber, dbo.getStationNumber(:trainId, :dep) , "
                             "dbo.getStationNumber(:trainId, :dest), :buyOrReserve, :ownerInfo, :fName, :lName,   CONVERT(DATE,GETDATE()),  "
                             "CONVERT(TIME,GETDATE()))");
    qry->bindValue(":trainDate", obj->value("trainDate").toString());
    qry->bindValue(":trainId", obj->value("trainId").toString());
    qry->bindValue(":wagonNumber", obj->value("wagonNumber").toString());
    qry->bindValue(":placeNumber", obj->value("placeNumber").toString());
    qry->bindValue(":dep", obj->value("dep").toString());
    qry->bindValue(":dest", obj->value("dest").toString());
    qry->bindValue(":buyOrReserve", obj->value("buyOrReserve").toString());
    qry->bindValue(":ownerInfo", obj->value("ownerInfo").toString());
    qry->bindValue(":fName", obj->value("fName").toString());
    qry->bindValue(":lName", obj->value("lName").toString());

    if (qry->exec())
    {
        QString txtToSend = "{\"operation\":\"buyTicket\", \"resp\":\"ok\"}";
        socket->write(txtToSend.toUtf8());
        socket->waitForBytesWritten(1500);
    }
    else
    {
        // handle bad query execution
        socket->write("{\"operation\":\"fatalErr\", \"resp\":\"bad\", \"err\":\"Something went wrong when transfering data. Please restart the app\"}");
        socket->waitForBytesWritten(1500);
    }
}

void myServer::getUserTickets(QTcpSocket* socket)
{
    qry->prepare("select * from getUnActiveTickets(:userName)");
    qry->bindValue(":userName", obj->value("userName").toString());

    if (qry->exec())
    {
        QString userTickets = "{\"operation\":\"getUserTickets\", \"resp\":\"ok\", \"unActiveTickets\":";

        QStringList jsonFields = { "trainId",		 "trainDate",	 "dep",					 "dest",				 "wagonNumber", "placeNumber",
                                                             "ownerFname", "ownerLname", "purchaseDate", "purchaseTime", "buyOrRes" };

        userTickets += createJsonStringFromQuery(jsonFields, qry);

        userTickets += ", \"boughtTickets\":";

        qry->prepare("select * from getBoughtTickets(:userName)");
        qry->bindValue(":userName", obj->value("userName").toString());

        if (qry->exec())
        {
            userTickets += createJsonStringFromQuery(jsonFields, qry);

            userTickets += ", \"reservedTickets\":";

            qry->prepare("select * from getReservedTickets(:userName)");
            qry->bindValue(":userName", obj->value("userName").toString());

            if (qry->exec())
            {
                userTickets += createJsonStringFromQuery(jsonFields, qry);

                userTickets.push_back("}");
                qDebug() << userTickets;
                socket->write(userTickets.toUtf8());
                socket->waitForBytesWritten(1500);
            }
            else
            {
                // handle bad query execution
                socket->write("{\"operation\":\"fatalErr\", \"resp\":\"bad\", \"err\":\"Something went wrong when transfering data. Please restart the "
                                            "app\"}");
                socket->waitForBytesWritten(1500);
            }
        }
        else
        {
            // handle bad query execution
            socket->write("{\"operation\":\"fatalErr\", \"resp\":\"bad\", \"err\":\"Something went wrong when transfering data. Please restart the app\"}");
            socket->waitForBytesWritten(1500);
        }
    }
    else
    {
        // handle bad query execution
        socket->write("{\"operation\":\"fatalErr\", \"resp\":\"bad\", \"err\":\"Something went wrong when transfering data. Please restart the app\"}");
        socket->waitForBytesWritten(1500);
    }
}

QString myServer::createJsonStringFromQuery(QStringList& jsonFields, QSqlQuery* qry)
{
    QString resStr = "[";

    unsigned dataCounter = 0;
    while (qry->next())
    {
        resStr.push_back("{");
        for (unsigned short iter = 0; iter < jsonFields.length(); ++iter)
        {
            ++dataCounter;
            resStr.push_back("\"" + jsonFields[iter] + "\":\"" + qry->value(iter).toString() + "\",");
        }

        resStr.remove(resStr.length() - 1, 1);
        resStr.push_back("},");
    }

    if (dataCounter)
    {
        resStr.remove(resStr.length() - 1, 1);
    }
    resStr.push_back("]");

    return resStr;
}
