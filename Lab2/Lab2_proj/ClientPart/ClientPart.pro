QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    UiHelperBuyTickets.cpp \
    UiHelperMainWindow.cpp \
    UiHelperPurchasesMenu.cpp \
    buytickets.cpp \
    main.cpp \
    mainwindow.cpp \
    purchasesmenu.cpp

HEADERS += \
    buytickets.h \
    mainwindow.h \
    purchasesmenu.h

FORMS += \
    buytickets.ui \
    mainwindow.ui \
    purchasesmenu.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    recources.qrc \
    recources.qrc

DISTFILES += \
    img/Arrow.png \
    img/BookedTicketsIcon.png \
    img/BookedTicketsIconFocus.png \
    img/BookedTicketsIconHover.png \
    img/ExitIcon.png \
    img/ExitIconFocus.png \
    img/ExitIconHover.png \
    img/TrainIcon.png \
    img/TrainIconFocus.png \
    img/TrainIconHover.png
