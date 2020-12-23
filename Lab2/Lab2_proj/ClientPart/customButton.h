#ifndef WAGONBUTTON_H
#define WAGONBUTTON_H

#include <QPushButton>
#include <QObject>
#include <QString>

class customButton : public QPushButton
{
   Q_OBJECT
public:
    customButton(QWidget* parent);

signals:
    void cB_clicked(QString wagonName);

protected slots:
    void slotForClick();
};

#endif	// WAGONBUTTON_H
