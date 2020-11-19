#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//secondary libreries
#include <QEvent>
#include <QDebug>
#include <QMainWindow>
#include <purchasesmenu.h>
#include <QMessageBox>
//communication with server related
#include <QTcpSocket>
//JSON
#include <QJsonObject>
#include <QJsonParseError>
#include <QJsonDocument>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QTcpSocket* socket;
    QByteArray recievedData;
    QJsonDocument* jsnDoc;
    QJsonParseError* errJsn;
    QJsonObject* obj= new QJsonObject();
    void decEndExec();
    
    
    
private slots:
    void on_ExitButton_clicked();
    void on_RegButton_clicked();
    void on_RegGoBackButton_clicked();
    void on_LogButton_clicked();
    void resizeEvent(QResizeEvent*);    //redefinition of QResize event
    void resizeLogMenu();   //resizing elements in Log menu when window size changes
    void resizeRegMenu();   //resizing elements in Reg menu when window size changes
    void sockReady();   //reading from socket
    void sockDisk();    //disconnect from server event
    
private:
    Ui::MainWindow *ui;
    PurchasesMenu OvScreen; //main menu screen
    void setShadowEff();    //set shadows in Log and Reg menus
    void createSocket();    //create and init socket with IP and port number
    
};
#endif // MAINWINDOW_H
