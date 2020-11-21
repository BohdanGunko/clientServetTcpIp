#ifndef MAINWINDOW_H
#define MAINWINDOW_H

// secondary libreries
#include <QEvent>
#include <QDebug>
#include <QMainWindow>
#include <purchasesmenu.h>
// for communication with server
#include <backend.h>
// for multi threading
#include <QThread>
// for showing gifs
#include <QMovie>
// for loading screen
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui
{
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();
    QThread* secThread;
    BackEnd* bckEnd;
    QLabel* loadingGif;
    QLabel* loadingBckGround;
    QMovie* movie;
    QLabel* retConnLabel;
    QPushButton* retryLoadingYesBtn;
    QPushButton* retryLoadingNoBtn;

private slots:
    void on_RegRegButton_clicked();
    void on_ExitButton_clicked();
    void on_RegButton_clicked();
    void on_RegGoBackButton_clicked();
    void on_LogButton_clicked();
    void resizeEvent(QResizeEvent*);	// redefinition of QResize event
    void loadScrnShow();
    void loadScrnHide();
    void logSuccess();
    void regSuccess();
    void errSlot(QString titel, QString Info);

private:
    Ui::MainWindow* ui;
    void resizeLogMenu();	 // resizing elements in Log menu when window size changes
    void resizeRegMenu();	 // resizing elements in Reg menu when window size changes
    PurchasesMenu OvScreen;	 // main menu screen
    void setShadowEff();	// set shadows in Log and Reg menus
    void resizeLoadindScreen();

signals:
    void _dataToSend(QByteArray dataToSend);
    void _tryToReconn();
};
#endif	// MAINWINDOW_H
