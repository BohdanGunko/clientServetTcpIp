#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <purchasesmenu.h>

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_RegButton_clicked();

    void on_RegGoBaxkButton_clicked();

    void on_LogButton_clicked();

private:
    Ui::MainWindow *ui;
    PurchasesMenu OvScreen;
};
#endif // MAINWINDOW_H
