#include "buttonhoverwatcher.h"
#include <QObject>
#include <QPushButton>
#include <QEvent>

class buttonhoverwatcher : public QObject
{
    Q_OBJECT
public:
    explicit ButtonHoverWatcher(QObject * parent = Q_NULLPTR);
    virtual bool eventFilter(QObject * watched, QEvent * event) Q_DECL_OVERRIDE;
};

ButtonHoverWatcher::ButtonHoverWatcher(QObject * parent) :
    QObject(parent)
{}

bool ButtonHoverWatcher::eventFilter(QObject * watched, QEvent * event)
{
    QPushButton * button = qobject_cast<QPushButton*>(watched);
    if (!button) {
        return false;
    }

    if (event->type() == QEvent::Enter) {
        // The push button is hovered by mouse
        button->setIcon(QIcon(":/images/start_hov.png"));
        return true;
    }

    if (event->type() == QEvent::Leave){
        // The push button is not hovered by mouse
        button->setIcon(QIcon(":/images/start.png"));
        return true;
    }

    return false;
}
