#ifndef BACKEND_H
#define BACKEND_H

// secondary libraries
#include <QMessageBox>
#include <QObject>
// communication with server related
#include <QTcpSocket>
// JSON
#include <QJsonObject>
#include <QJsonParseError>
#include <QJsonDocument>
// for ukrainian language
#include <QTextCodec>

class BackEnd : public QObject
{
    Q_OBJECT
public:
    explicit BackEnd(QObject* parent = nullptr);
    QTcpSocket* socket;
    QByteArray recievedData;
    QJsonDocument* jsnDoc;
    QJsonParseError* errJsn = new QJsonParseError();
    QJsonObject* obj = new QJsonObject();
    QTextCodec* codec = QTextCodec::codecForName("KOI8-U");
    void decEndExec();
    void logProc();
    void regProc();
    void cListProc();

public slots:
    void createSocket();	// create and init socket with IP and port number
    void sendData(QByteArray dataToSend);
    void sockReady();	 // reading from socket
    void tryToReccon();
    void sockDisc();
signals:
    void _reconnFailed();
    void _reconnSuccess();
    void _logSuccess();
    void _regSuccess();
    void _errSignalMW(QString info);
    void _cList(QStringList cList);
};

#endif	// BACKEND_H
