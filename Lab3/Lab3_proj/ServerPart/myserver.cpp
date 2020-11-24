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
    QHostAddress _adress("192.168.0.102");

    // check if server started
    if (this->listen(_adress, 27000))
    {
        qDebug() << "Server listening to: " << _adress;

        // connect to db
        QString serverName = "DESKTOP-UJSLV1O\\SQLEXPRESS";
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
            decEndExec(jsnDoc, socket);
            return;
        }
        // if data could not be converted to json
        else
        {
            // send client respond about bad data format
            socket->write("{\"operation\":\"fatalErr\", \"resp\":\"bad\", \"err\":\"Something went wrong when transfering data.  Please restart the app\"}");
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
void myServer::decEndExec(QJsonDocument* doc, QTcpSocket* socket)
{
    obj = new QJsonObject;
    *obj = doc->object();

    // when client try to login
    if (obj->value("operation") == "login")
    {
        // call login func
        logProc(socket);
    }
    // new user registration
    else if (obj->value("operation") == "register")
    {
        // call registration func
        regProc(socket);
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
                socket->write("{\"operation\":\"fatalErr\", \"resp\":\"bad\", \"err\":\"Something went wrong when transfering data. Please restart the app\"}");
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
