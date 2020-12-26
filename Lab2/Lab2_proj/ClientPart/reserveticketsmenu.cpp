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
    delete boughtTicketsModel;

    if (boughtTicketsList.length() == 0)
    {
        boughtTicketsModel = new QStandardItemModel(1, 1, this);
        QModelIndex modelIndex;

        modelIndex = boughtTicketsModel->index(0, 0);
        boughtTicketsModel->setData(modelIndex, "You dont have any bought tickets that are active", Qt::DisplayRole);

        ui->boughtTicketsTable->setModel(boughtTicketsModel);
        return;
    }

    QModelIndex modelIndex;

    QStringList jsonFields = { "trainId",		 "trainDate",	 "dep",					 "dest",				 "wagonNumber", "placeNumber",
                                                         "ownerFname", "ownerLname", "purchaseDate", "purchaseTime", "buyOrRes" };

    boughtTicketsModel = new QStandardItemModel(boughtTicketsList.length(), jsonFields.length(), this);

    int row = 0;
    int col = 0;
    for (auto& _ticket : boughtTicketsList)
    {
        col = 0;
        QJsonObject ticket = _ticket.toJsonObject();

        for (QString& field : jsonFields)
        {
            modelIndex = boughtTicketsModel->index(row, col);
            boughtTicketsModel->setData(modelIndex, ticket.value(field).toString(), Qt::DisplayRole);
            ++col;
        }

        ui->boughtTicketsTable->setModel(boughtTicketsModel);

        ++row;
    }
}

void reserveTicketsMenu::showReservedTickets(QVariantList reservedTicketsList)
{
    delete reservedTicketsModel;

    if (reservedTicketsList.length() == 0)
    {
        reservedTicketsModel = new QStandardItemModel(1, 1, this);
        QModelIndex modelIndex;

        modelIndex = reservedTicketsModel->index(0, 0);
        reservedTicketsModel->setData(modelIndex, "You dont have any reserved tickets that are active", Qt::DisplayRole);

        ui->reservedTicketsTable->setModel(reservedTicketsModel);
        return;
    }

    QStringList jsonFields = { "trainId",		 "trainDate",	 "dep",					 "dest",				 "wagonNumber", "placeNumber",
                                                         "ownerFname", "ownerLname", "purchaseDate", "purchaseTime", "buyOrRes" };

    reservedTicketsModel = new QStandardItemModel(reservedTicketsList.length(), jsonFields.length(), this);

    QModelIndex modelIndex;

    int row = 0;
    int col = 0;
    for (auto& _ticket : reservedTicketsList)
    {
        col = 0;
        QJsonObject ticket = _ticket.toJsonObject();

        for (QString& field : jsonFields)
        {
            modelIndex = reservedTicketsModel->index(row, col);
            reservedTicketsModel->setData(modelIndex, ticket.value(field).toString(), Qt::DisplayRole);
            ++col;
        }

        ui->reservedTicketsTable->setModel(reservedTicketsModel);

        ++row;
    }
}

void reserveTicketsMenu::showUnActiveTickets(QVariantList unActiveTicketsList)
{
    delete unActiveTicketsModel;

    if (unActiveTicketsList.length() == 0)
    {
        unActiveTicketsModel = new QStandardItemModel(1, 1, this);
        QModelIndex modelIndex;

        modelIndex = unActiveTicketsModel->index(0, 0);
        unActiveTicketsModel->setData(modelIndex, "You dont have any unactive tickets that are active", Qt::DisplayRole);

        ui->unActiveTicketsTable->setModel(unActiveTicketsModel);
        return;
    }

    QStringList jsonFields = { "trainId",		 "trainDate",	 "dep",					 "dest",				 "wagonNumber", "placeNumber",
                                                         "ownerFname", "ownerLname", "purchaseDate", "purchaseTime", "buyOrRes" };

    unActiveTicketsModel = new QStandardItemModel(unActiveTicketsList.length(), jsonFields.length(), this);

    QModelIndex modelIndex;

    int row = 0;
    int col = 0;
    for (auto& _ticket : unActiveTicketsList)
    {
        col = 0;
        QJsonObject ticket = _ticket.toJsonObject();

        for (QString& field : jsonFields)
        {
            modelIndex = unActiveTicketsModel->index(row, col);
            unActiveTicketsModel->setData(modelIndex, ticket.value(field).toString(), Qt::DisplayRole);
            ++col;
        }

        ui->unActiveTicketsTable->setModel(unActiveTicketsModel);

        ++row;
    }
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
