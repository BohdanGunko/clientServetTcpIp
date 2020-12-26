#include "myserver.h"

myServer::myServer()
{
    // sreate connected clients list
    connectedClients = new QList<QTcpSocket*>();
};

myServer::~myServer()
{
}

// start server and make it listening local ip
void myServer::startServer()
{
    // QHostAddress _adress("192.168.0.102");
    QHostAddress _adress("127.0.0.1");
    // check if server started
    if (this->listen(_adress, 27000))
    {
        qDebug() << "Server listening to: " << _adress;

        // connect to db
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

// to handle disconnection from server
void myServer::sockDisc()
{
    // create new socket (just to make code more readeble)
    QTcpSocket* socket;
    socket = new QTcpSocket();
    socket = qobject_cast<QTcpSocket*>(sender());
    qDebug() << "Disconected";
    socket->deleteLater();
}

// gets executed when new client connects to server
void myServer::incomingConnection(qintptr socketDescriptor)
{
    // create new socket (just to make code more readeble)
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

// this func gets exec when server recieve smt from client
void myServer::sockReady()
{
    // create new socket (just to make code more readeble)
    QTcpSocket* socket;
    socket = new QTcpSocket();

    // detect sender info
    socket = qobject_cast<QTcpSocket*>(sender());

    // wait for stable connection
    if (socket->waitForConnected(1500))
    {
        // read all data
        recievedData = socket->readAll();
        // to delete
        qDebug() << recievedData;
        // create new JSON doc
        jsnDoc = new QJsonDocument();

        // convert recieved data to JSON format
        *jsnDoc = QJsonDocument::fromJson(recievedData, errJsn);

        // chack if convertion eas successful
        if (errJsn->errorString().toInt() == QJsonParseError::NoError)
        {
            // do smt accordin to command from client
            decAndExec(jsnDoc, socket);
            return;
        }
        // if data could not be converted to json
        else
        {
            // send client respond about bad data format
            socket->write("{\"operation\":\"fatalErr\", \"resp\":\"bad\", \"err\":\"Something went wrong when transfering data.  Please restart the "
                                        "app\"}");
            socket->waitForBytesWritten(1500);
            return;
        }
    }
    // if connecting failed
    else
    {
        qDebug() << "Can not read data from client: Connestion failed";
        return;
    }
}

// find what command does client send and do needed things to execute it
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
    // if we dont know command that client send
    else
    {
        // send to cliend command error msg
        socket->write("{\"operation\":\"fatalErr\", \"resp\":\"bad\", \"err\":\"Something went wrong when transfering data. Please restart the app\"}");
        socket->waitForBytesWritten(1500);
    }
};

// when user try to login
void myServer::logProc(QTcpSocket* socket)
{
    // find log in database
    qry->prepare("select * from uInfo where uLog like :log COLLATE SQL_Latin1_General_Cp1_CS_AS");
    qry->bindValue(":log", obj->value("log").toString());

    // if qry is not empty (if log exist)
    if (qry->exec())
    {
        if (qry->next())
        {
            // if password is correct
            if (qry->value(1).toString() == obj->value("pass").toString())
            {
                // return validation is ok respond to client
                socket->write("{\"operation\":\"login\", \"resp\":\"ok\"}");
                socket->waitForBytesWritten(1500);
            }
            // if password is not correct
            else
            {
                // send invalid password respond to client
                socket->write("{\"operation\":\"login\", \"resp\":\"bad\", \"err\":\"Invalid password\"}");
                socket->waitForBytesWritten(1500);
            }
        }
        // qry is empty so login does not exist
        else
        {
            // send no such login respond to client
            socket->write("{\"operation\":\"login\", \"resp\":\"bad\", \"err\":\"Login doesn't exist\"}");
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

// whan user try to register new account
void myServer::regProc(QTcpSocket* socket)
{
    // find log in database
    qry->prepare("select * from uInfo where uLog like :log COLLATE SQL_Latin1_General_Cp1_CS_AS");
    qry->bindValue(":log", obj->value("log").toString());

    if (qry->exec())
    {
        // if qry is not empty (if log exist)
        if (qry->next())
        {
            // send user already exist password respond to client
            socket->write("{\"operation\":\"register\", \"resp\":\"bad\", \"err\":\"User already exist\"}");
            socket->waitForBytesWritten(1500);
        }
        // qry is empty so login does not exist
        else
        {
            // insert login and password to database
            qry->prepare("insert into uInfo (uLog, uPass) values (:log, :pass)");
            qry->bindValue(":log", obj->value("log").toString());
            qry->bindValue(":pass", obj->value("pass").toString());

            // if registration successful
            if (qry->exec())
            {
                // send good respond
                socket->write("{\"operation\":\"register\", \"resp\":\"ok\"}");
                socket->waitForBytesWritten(1500);
            }
            else
            {
                // if query executed with error
                socket->write("{\"operation\":\"fatalErr\", \"resp\":\"bad\", \"err\":\"Something went wrong when transfering data. Please restart the "
                                            "app\"}");
                socket->waitForBytesWritten(1500);
            }
        }
    }
    else
    {
        // handle bad query execution
        socket->write("{\"operation\":\"fatalErr\", \"resp\":\"bad\", \"err\":\"Something went wrong when transfering data. Please restart the app\"}");
        socket->waitForBytesWritten(1500);
    }
}

void myServer::getCities(QTcpSocket* socket)
{
    // fget cities list from db
    if (qry->exec("select * from citiesList"))
    {
        QString cList = "{\"operation\":\"getCities\", \"resp\":\"ok\", \"data\":[";
        while (qry->next())
        {
            cList.push_back("\"" + qry->value(0).toString() + "\",");
        }
        cList.remove(cList.length() - 1, 1);
        cList.push_back("]}");
        socket->write(cList.toUtf8());
        socket->waitForBytesWritten(1500);
    }
    else
    {
        // handle bad query execution
        socket->write("{\"operation\":\"fatalErr\", \"resp\":\"bad\", \"err\":\"Something went wrong when transfering data. Please restart the app\"}");
        socket->waitForBytesWritten(1500);
    }
}

void myServer::getTrainsList(QTcpSocket* socket)
{
    // find log in database
    qry->prepare("select * from getNeededTrainsList(:dep, :dest, :date, :time)");
    qry->bindValue(":dep", obj->value("dep").toString());
    qry->bindValue(":dest", obj->value("dest").toString());
    qry->bindValue(":date", obj->value("arrDate").toString());
    qry->bindValue(":time", obj->value("arrTime").toString());

    if (qry->exec())
    {
        QString trainsList = "{\"operation\":\"getTrainsList\", \"resp\":\"ok\", \"data\":[";
        unsigned dataCounter = 0;
        while (qry->next())
        {
            for (unsigned short iter = 0; iter < 8; ++iter)
            {
                ++dataCounter;
                trainsList.push_back("\"" + qry->value(iter).toString() + "\",");
            }
        }
        if (dataCounter)
        {
            trainsList.remove(trainsList.length() - 1, 1);
        }
        trainsList.push_back("]}");
        socket->write(trainsList.toUtf8());
        socket->waitForBytesWritten(1500);
    }
    else
    {
        // handle bad query execution
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
    // to do: check ifticket is not taken

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
    QString userTickets = "{\"operation\":\"getUserTickets\", \"resp\":\"ok\", \"unActiveTickets\":[";

    qry->prepare("select * from getUnActiveTickets(:userName)");
    qry->bindValue(":userName", obj->value("userName").toString());

    if (qry->exec())
    {
        unsigned dataCounter = 0;
        while (qry->next())
        {
            for (unsigned short iter = 0; iter < 11; ++iter)
            {
                ++dataCounter;
                userTickets.push_back("\"" + qry->value(iter).toString() + "\",");
            }
        }
        if (dataCounter)
        {
            userTickets.remove(userTickets.length() - 1, 1);
        }
        userTickets.push_back("], \"boughtTickets\":[ ");

        qry->prepare("select * from getBoughtTickets(:userName)");
        qry->bindValue(":userName", obj->value("userName").toString());

        if (qry->exec())
        {
            dataCounter = 0;
            while (qry->next())
            {
                for (unsigned short iter = 0; iter < 11; ++iter)
                {
                    ++dataCounter;
                    userTickets.push_back("\"" + qry->value(iter).toString() + "\",");
                }
            }
            if (dataCounter)
            {
                userTickets.remove(userTickets.length() - 1, 1);
            }
            userTickets.push_back("], \"reservedTickets\":[ ");

            qry->prepare("select * from getReservedTickets(:userName)");
            qry->bindValue(":userName", obj->value("userName").toString());

            if (qry->exec())
            {
                dataCounter = 0;
                while (qry->next())
                {
                    for (unsigned short iter = 0; iter < 11; ++iter)
                    {
                        ++dataCounter;
                        userTickets.push_back("\"" + qry->value(iter).toString() + "\",");
                    }
                }
                if (dataCounter)
                {
                    userTickets.remove(userTickets.length() - 1, 1);
                }
                userTickets.push_back("]}");
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
