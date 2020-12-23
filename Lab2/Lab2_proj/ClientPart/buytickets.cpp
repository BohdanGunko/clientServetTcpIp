#include "buytickets.h"
#include "ui_buytickets.h"
#include <UiHelperBuyTickets.cpp>
#include <QStringListModel>

BuyTickets::BuyTickets(BackEnd* bckEnd, QWidget* parent) : QWidget(parent), ui(new Ui::BuyTickets)
{
    ui->setupUi(this);

    this->bckEnd = bckEnd;

    connect(bckEnd, SIGNAL(_cList(QStringList)), this, SLOT(aComplete(QStringList)));

    connect(bckEnd, SIGNAL(_trainsList(QStringList)), this, SLOT(showTrainsList(QStringList)));

    connect(bckEnd, SIGNAL(_availableSeats(QString, QStringList)), this, SLOT(showAvailableSeats(QString, QStringList)));

    // to be able to send data to bckEnd object
    connect(this, SIGNAL(_dataToSend(QByteArray)), bckEnd, SLOT(sendData(QByteArray)));

    ui->DateEdit->setMinimumDateTime(QDateTime::currentDateTime());

    // calling func to make shadows in BuyTickets menu
    setShadowEff();

    ui->stackedWidget->setCurrentIndex(0);
}

BuyTickets::~BuyTickets()
{
    delete ui;
}

void BuyTickets::on_SearchButton_clicked()
{
    depTxt = ui->DepartureLineEdit->text();
    destTxt = ui->DestinationLineEdit->text();

    if (!cityList->contains(depTxt, Qt::CaseInsensitive))
    {
        QWhatsThis::showText(ui->DepartureLineEdit->mapToGlobal(QPoint(ui->DepartureLineEdit->width() / 2, ui->DepartureLineEdit->height())),
                                                 "<html><font style "
                                                 "=\"font: 12px;\">"
                                                 "There is no \"" +
                                                         depTxt +
                                                         "\" city in the system"

                                                         "</font></html>");
    }
    else if (!cityList->contains(destTxt, Qt::CaseInsensitive))
    {
        QWhatsThis::showText(ui->DestinationLineEdit->mapToGlobal(QPoint(ui->DestinationLineEdit->width() / 2, ui->DestinationLineEdit->height())),
                                                 "<html><font style "
                                                 "=\"font: 12px;\">"
                                                 "There is no \"" +
                                                         destTxt +
                                                         "\" city in the system"

                                                         "</font></html>");
    }
    else
    {
        dateTxt = QString::number(ui->DateEdit->date().year()) + "-" + QString::number(ui->DateEdit->date().month()) + "-" +
                            QString::number(ui->DateEdit->date().day());
        QString timeTxt = ui->TimeEdit->time().toString();

        if (ui->DateEdit->date() == QDate::currentDate() && ui->TimeEdit->time() < QTime::currentTime())
        {
            QWhatsThis::showText(ui->TimeEdit->mapToGlobal(QPoint(ui->TimeEdit->width() / 2, ui->TimeEdit->height())), "<html><font style "
                                                                                                                                                                                                                                 "=\"font: 12px;\">"
                                                                                                                                                                                                                                 "This time already passed"
                                                                                                                                                                                                                                 "</font></html>");
        }
        else
        {
            QString txtToSend = QString("{\"operation\":\"getTrainsList\", \"dep\":\"%1\", \"dest\":\"%2\", \"arrDate\":\"%3\", \"arrTime\":\"%4\"}")
                                                            .arg(depTxt)
                                                            .arg(destTxt)
                                                            .arg(dateTxt)
                                                            .arg(timeTxt);
            emit _dataToSend(txtToSend.toUtf8());
        }
    }
}

void BuyTickets::on_ReverseDepDest_clicked()
{
    QString depTmp = ui->DepartureLineEdit->text();
    ui->DepartureLineEdit->setText(ui->DestinationLineEdit->text());
    ui->DestinationLineEdit->setText(depTmp);
}

void BuyTickets::aComplete(QStringList cList)
{
    cityList = new QStringList(cList);
    depCompleter = new QCompleter(cList, this);
    destCompleter = new QCompleter(cList, this);
    depCompleter->setCaseSensitivity(Qt::CaseInsensitive);
    destCompleter->setCaseSensitivity(Qt::CaseInsensitive);
    ui->DepartureLineEdit->setCompleter(depCompleter);
    ui->DestinationLineEdit->setCompleter(destCompleter);
    QAbstractItemView* popup = depCompleter->popup();

    // to do: style sheet
    popup->setStyleSheet(" QListView {background-color:#37474F ;  "
                                             "                             "
                                             "     border-style: solid;    "
                                             "     border-width: 2px;      "
                                             "     border-color: #455A64;  "
                                             "     color:#ECEFF1;          "
                                             "     font-family: \" Calibri \"; "
                                             "     font-size: 13px;        }"
                                             "    QScrollBar:vertical {                                                              \
                     border: 2px solid #90A4AE;                                                     \
                     background: #263238;                                                           \
                     width: 15px;                                                                   \
                     margin: 22px 0 22px 0;                                                         \
                 }                                                                                  \
                 QScrollBar::handle:vertical {                                                      \
                     background: white;                                                             \
                     min-height: 20px;                                                              \
                 }                                                                                  \
                 QScrollBar::add-line:vertical {                                                    \
                     border: 2px solid grey;                                                        \
                     background: #32CC99;                                                           \
                     height: 20px;                                                                  \
                     subcontrol-position: bottom;                                                   \
                     subcontrol-origin: margin;                                                     \
                 }                                                                                  \
                                                                                                    \
                 QScrollBar::sub-line:vertical {                                                    \
                     border: 2px solid grey;                                                        \
                     background: #32CC99;                                                           \
                     height: 20px;                                                                  \
                     subcontrol-position: top;                                                      \
                     subcontrol-origin: margin;                                                     \
                 }                                                                                  \
                 QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical {                   \
                     border: 2px solid grey;                                                        \
                     width: 3px;                                                                    \
                     height: 3px;                                                                   \
                     background: white;                                                             \
                 }                                                                                  \
                                                                                                    \
                 QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {                     \
                     background: none;\
                 }");
}

void BuyTickets::showTrainsList(QStringList trainsList)
{
    // to do check if list is empty (respond is bad)

    unsigned short colCount = 3;
    unsigned short skipCol = 7;

    trainModel = new QStandardItemModel(trainsList.length() / skipCol, colCount, this);

    QModelIndex modelIndex;
    for (int row = 0; row < trainsList.length(); row += skipCol)
    {
        // trainId
        modelIndex = trainModel->index(row / 7, 0);
        trainModel->setData(modelIndex, trainsList[row], Qt::DisplayRole);

        /*
04:39 2020-26-12
        -
04:55 2020-26-12
        */

        modelIndex = trainModel->index(row / 7, 1);
        QString depDateInfo = trainsList[row + 2] + " " + trainsList[row + 1] + " - " + trainsList[row + 4] + " " + trainsList[row + 3];
        trainModel->setData(modelIndex, depDateInfo, Qt::DisplayRole);

        // 04:55 2020-26-12
        modelIndex = trainModel->index(row / 7, 2);
        trainModel->setData(modelIndex, trainsList[row + 6] + " " + trainsList[row + 5], Qt::DisplayRole);
    }

    trainModel->setHeaderData(0, Qt::Horizontal, "Train number");
    trainModel->setHeaderData(1, Qt::Horizontal, "Departure info");
    trainModel->setHeaderData(2, Qt::Horizontal, "Destination arrival time");

    ui->TrainsTable->setModel(trainModel);
    ui->TrainsTable->setEditTriggers(QAbstractItemView::NoEditTriggers | QAbstractItemView::SelectedClicked);
    qDebug() << trainsList;
}

void BuyTickets::on_TrainsTable_pressed(const QModelIndex& index)
{
    QModelIndex tNameIndex = trainModel->index(index.row(), 0);

    // send to server train date and train id
    QString txtToSend = QString("{\"operation\":\"getAvailableSeats\", \"trainDate\":\"%1\", \"trainId\":\"%2\", \"dep\":\"%3\", \"dest\":\"%4\"}")
                                                    .arg(dateTxt)
                                                    .arg(trainModel->data(tNameIndex).toString())
                                                    .arg(depTxt)
                                                    .arg(destTxt);
    emit _dataToSend(txtToSend.toUtf8());
}

void BuyTickets::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    deleteSeatsAndWagons();
}

void BuyTickets::showAvailableSeats(QString wagonCount, QStringList takenSeats)
{
    takenSeatslist = new QStringList(takenSeats);
    seatsList = new QVector<customButton*>;
    wagonsList = new QVector<customButton*>;

    for (int i = 1; i <= wagonCount.toInt(); ++i)
    {
        customButton* wagon = new customButton(ui->stackedWidget->currentWidget());

        wagon->setMinimumSize(30, 30);
        wagon->setText(QString::number(i));
        wagon->show();
        wagon->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);

        connect(wagon, SIGNAL(cB_clicked(QString)), this, SLOT(changeWagon(QString)));

        ui->wagonLayout->addWidget(wagon, 0, i);
        wagonsList->push_back(wagon);
    }

    for (int i = 0; i < 56; ++i)
    {
        customButton* seat = new customButton(ui->stackedWidget->currentWidget());

        seat->setMinimumSize(30, 30);
        seat->setText(QString::number(i + 1));
        seat->show();
        seat->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);

        ui->seatsLayout->addWidget(seat, i % 4, i / 4);
        seatsList->push_back(seat);
    }

    ui->seatsLayout->setVerticalSpacing(20);
    ui->seatsLayout->setHorizontalSpacing(20);

    changeWagon("1");

    ui->stackedWidget->setCurrentIndex(1);

    qDebug() << wagonCount;
    qDebug() << takenSeats;
}

void BuyTickets::changeWagon(QString wagonNumber)
{
    for (auto& wagon : *wagonsList)
    {
        wagon->setStyleSheet("background-color: Gainsboro;");
        wagon->setEnabled(1);
    }
    (*wagonsList)[wagonNumber.toInt() - 1]->setStyleSheet("background-color:  SlateGrey;");
    (*wagonsList)[wagonNumber.toInt() - 1]->setEnabled(0);

    showSeatsForWagon(wagonNumber);
    qDebug() << "clicked";
}

void BuyTickets::deleteSeatsAndWagons()
{
    for (auto wagon : *wagonsList)
    {
        ui->seatsLayout->removeWidget(wagon);
        delete wagon;
    }
    for (auto seat : *seatsList)
    {
        ui->seatsLayout->removeWidget(seat);
        delete seat;
    }
    delete seatsList;
    delete wagonsList;
}

void BuyTickets::showSeatsForWagon(QString wagonNumber)
{
    for (auto& seat : *seatsList)
    {
        seat->setEnabled(1);
        seat->setStyleSheet("background-color: green;");
    }

    for (int i = 0; i < takenSeatslist->length() / 2; ++i)
    {
        if ((*takenSeatslist)[i * 2] == wagonNumber)
        {
            (*seatsList)[(*takenSeatslist)[i * 2 + 1].toInt() - 1]->setEnabled(0);
            (*seatsList)[(*takenSeatslist)[i * 2 + 1].toInt() - 1]->setStyleSheet("background-color: red;");
        }
    }
}
