#include "reserveticketsmenu.h"
#include "ui_reserveticketsmenu.h"

reserveTicketsMenu::reserveTicketsMenu(BackEnd* bckEnd, QWidget* parent) : QWidget(parent), ui(new Ui::reserveTicketsMenu)
{
    ui->setupUi(this);
    this->bckEnd = bckEnd;

    connect(bckEnd, SIGNAL(_userTickets(QStringList, QStringList, QStringList)), this, SLOT(showUserTickets(QStringList, QStringList, QStringList)));

    ui->unActiveTicketsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->unActiveTicketsTable->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->unActiveTicketsTable->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
}

reserveTicketsMenu::~reserveTicketsMenu()
{
    delete ui;
}

void reserveTicketsMenu::showUserTickets(QStringList unActiveTickets, QStringList boughtTickets, QStringList reservedTickets)
{
    // to do check if list is empty (respond is bad)

    unsigned short colCount = 11;

    unActiveTicketsModel = new QStandardItemModel(unActiveTickets.length() / colCount, colCount, this);
    QModelIndex modelIndex;
    for (int row = 0; row < unActiveTickets.length() / colCount; ++row)
    {
        for (int col = 0; col < colCount; ++col)
        {
            modelIndex = unActiveTicketsModel->index(row, col);
            unActiveTicketsModel->setData(modelIndex, unActiveTickets[row * colCount + col], Qt::DisplayRole);
        }
    }

    ui->unActiveTicketsTable->setModel(unActiveTicketsModel);

    qDebug() << unActiveTickets << "\n\n\n";
    //	qDebug() << boughtTickets << "\n\n\n";
    //	qDebug() << reservedTickets << "\n\n\n";
}
