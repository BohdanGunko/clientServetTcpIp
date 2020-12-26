#include "reserveticketsmenu.h"
#include "ui_reserveticketsmenu.h"

reserveTicketsMenu::reserveTicketsMenu(BackEnd* bckEnd, QWidget* parent) : QWidget(parent), ui(new Ui::reserveTicketsMenu)
{
    ui->setupUi(this);
    this->bckEnd = bckEnd;

    connect(bckEnd, SIGNAL(_userTickets(QVariantList, QVariantList, QVariantList)), this,
                    SLOT(showUserTickets(QVariantList, QVariantList, QVariantList)));

    ui->unActiveTicketsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->unActiveTicketsTable->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->unActiveTicketsTable->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

    this->boughtTicketsModel = nullptr;
    this->reservedTicketsModel = nullptr;
    this->unActiveTicketsModel = nullptr;
}

reserveTicketsMenu::~reserveTicketsMenu()
{
    delete ui;
}

void reserveTicketsMenu::showBoughtTickets(QVariantList boughtTicketsList)
{
    //    if (trainsList.length() == 0)
    //    {
    //        ui->TrainsTable->hide();
    //        bckEnd->showErrorMsg(ui->SearchButton, "Sorry but we can't find any trains from " + this->depTxt + " to " + this->destTxt);
    //        return;
    //    }

    delete boughtTicketsModel;

    unsigned short columnCount = 11;
    boughtTicketsModel = new QStandardItemModel(boughtTicketsList.length(), columnCount, this);

    QModelIndex modelIndex;

    QStringList jsonFields = { "trainId",		 "trainDate",	 "dep",					 "dest",				 "wagonNumber", "placeNumber",
                                                         "ownerFname", "ownerLname", "purchaseDate", "purchaseTime", "buyOrRes" };

    int row = 0;
    int col = 0;
    for (auto& _ticket : boughtTicketsList)
    {
        col = 0;
        QJsonObject ticket = _ticket.toJsonObject();

        for (QString&  field : jsonFields)
        {
            modelIndex = boughtTicketsModel->index(row, col);
            boughtTicketsModel->setData(modelIndex, ticket.value(field).toString(), Qt::DisplayRole);
            ++col;
        }

        //	trainModel->setHeaderData(0, Qt::Horizontal, "Train number");
        //	trainModel->setHeaderData(1, Qt::Horizontal, "Departure info");
        //	trainModel->setHeaderData(2, Qt::Horizontal, "Destination arrival time");
        //	trainModel->setHeaderData(3, Qt::Horizontal, "Tickets available");

        ui->boughtTicketsTable->setModel(boughtTicketsModel);

        //	ui->TrainsTable->show();
        ++row;
    }
}

void reserveTicketsMenu::showReservedTickets(QVariantList reservedTicketsList)
{
}

void reserveTicketsMenu::showUnActiveTickets(QVariantList unActiveTicketsList)
{
}

void reserveTicketsMenu::showUserTickets(QVariantList unActiveTickets, QVariantList boughtTickets, QVariantList reservedTickets)
{
    showBoughtTickets(boughtTickets);
    showReservedTickets(reservedTickets);
    showUnActiveTickets(unActiveTickets);

    //    qDebug() << unActiveTickets << "\n\n\n";
    //	qDebug() << boughtTickets << "\n\n\n";
    //	qDebug() << reservedTickets << "\n\n\n";
}

void reserveTicketsMenu::on_tabWidget_currentChanged(int index)
{
}
