#include "buytickets.h"
#include "ui_buytickets.h"
#include <UiHelperBuyTickets.cpp>
#include <QStringListModel>

BuyTickets::BuyTickets(BackEnd* bckEnd, QWidget* parent) : QWidget(parent), ui(new Ui::BuyTickets)
{
    ui->setupUi(this);

    this->bckEnd = bckEnd;

    connect(bckEnd, SIGNAL(_cList(QStringList)), this, SLOT(aComplete(QStringList)));
    // calling func to make shadows in BuyTickets menu
    setShadowEff();
}

BuyTickets::~BuyTickets()
{
    delete ui;
}

void BuyTickets::on_SearchButton_clicked()
{
}

void BuyTickets::on_ReverseDepDest_clicked()
{
    QString depTmp = ui->DepartureLineEdit->text();
    ui->DepartureLineEdit->setText(ui->DestinationLineEdit->text());
    ui->DestinationLineEdit->setText(depTmp);
}

void BuyTickets::aComplete(QStringList cList)
{
    depCompleter = new QCompleter(cList, this);
    destCompleter = new QCompleter(cList, this);
    depCompleter->setCaseSensitivity(Qt::CaseInsensitive);
    destCompleter->setCaseSensitivity(Qt::CaseInsensitive);
    ui->DepartureLineEdit->setCompleter(depCompleter);
    ui->DestinationLineEdit->setCompleter(destCompleter);
    QAbstractItemView* popup = depCompleter->popup();


    //to do: style sheet
    popup->setStyleSheet(
            " QListView {background-color:#37474F ;  "
            "                             "
            "     border-style: solid;    "
            "     border-width: 2px;      "
            "     border-color: #455A64;  "
            "     color:#ECEFF1;          "
            "     font-family: \" Calibri \"; "
            "     font-size: 13px;        }"
            "    QScrollBar:vertical {                                                              \
                     border: 2px solid #90A4AE;                                                        \
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
                 }"
                );
}
