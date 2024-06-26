#include "viewtranshistory_dialog.h"
#include "ui_viewtranshistory_dialog.h"
#include "requestmoney_dialog.h"
#include "transiction.h"
#include "login.h"
#include <QTableWidgetItem>
#include <iostream>
#include <vector>
using namespace std;


viewTransHistory_dialog::viewTransHistory_dialog(QWidget *parent) : QDialog(parent), ui(new Ui::viewTransHistory_dialog) {

    ui->setupUi(this);

    ui->history_table->setHorizontalHeaderLabels({"Trans ID", "Receiver", "Sender", "Amount", "Date", "Time", "Status"});

    transiction_history();
    show_whole_history();

    ui->history_table->show();
}



//---------------------------------------------- Changing Username handeling ------------------------------------------------
void viewTransHistory_dialog::updateTransactionsMap( string oldUsername,  string newUsername)
{
    //using & here allows us to directly modify the elements in the map
    //value_type -> stores pairs <string, *transiction> , trans -> holds a reference to one pair in the map.
    for (unordered_map<string, transiction*>::value_type & trans : requestMoney_dialog::trans_read)
    {
        transiction* t = trans.second;
        if (t->sender == oldUsername)
        {
            t->sender = newUsername;
        }
        if (t->receiver == oldUsername)
        {
            t->receiver = newUsername;
        }
    }
}

void viewTransHistory_dialog::onUsernameChanged( string newUsername,string oldUsername) {
    if (oldUsername != newUsername)
    {
        updateTransactionsMap(oldUsername, newUsername);
        Login::current_user.user_acc.username=newUsername;
        show_whole_history();
    }
}
//---------------------------------------------------------------------------------------------------------------------------


//---------------------------------------------- History Table GUI ----------------------------------------------------------
void viewTransHistory_dialog::show_whole_history()
{
    ui->history_table->clearContents();
    ui->history_table->setRowCount(0);
    int row = 0;

    string name = Login::current_user.user_acc.username;
    for (auto& tr : requestMoney_dialog::trans_read) {
        transiction* t = tr.second;
        if (t != nullptr && (t->receiver == name || t->sender == name)) {

            ui->history_table->insertRow(row);

            QTableWidgetItem *transIDItem = new QTableWidgetItem(QString::fromStdString(t->id));
            ui->history_table->setItem(row, 0, transIDItem);

            QTableWidgetItem *receiverItem = new QTableWidgetItem(QString::fromStdString(t->receiver));
            ui->history_table->setItem(row, 1, receiverItem);

            QTableWidgetItem *senderItem = new QTableWidgetItem(QString::fromStdString(t->sender));
            ui->history_table->setItem(row, 2, senderItem);

            QTableWidgetItem *amountItem = new QTableWidgetItem(QString::number(t->amount));
            ui->history_table->setItem(row, 3, amountItem);

            QTableWidgetItem *dateItem = new QTableWidgetItem(QString::fromStdString(t->date));
            ui->history_table->setItem(row, 4, dateItem);

            QTableWidgetItem *timeItem = new QTableWidgetItem(QString::fromStdString(t->time));
            ui->history_table->setItem(row, 5, timeItem);

            QTableWidgetItem *statusItem = new QTableWidgetItem(QString::fromStdString(t->status));
            ui->history_table->setItem(row, 6, statusItem);

            for (int column = 0; column < ui->history_table->columnCount(); ++column) {
                ui->history_table->item(row, column)->setTextAlignment(Qt::AlignCenter);
            }
            ++row;
        }
    }
}

void viewTransHistory_dialog::search_by_month(string s)
{
    ui->history_table->clearContents();
    ui->history_table->setRowCount(0);
    int row = 0;

    auto it = transactions_map.find(s);
    if (it != transactions_map.end()) {
        for (auto t : it->second) {
            ui->history_table->insertRow(row);

            QTableWidgetItem *transIDItem = new QTableWidgetItem(QString::fromStdString(t->id));
            ui->history_table->setItem(row, 0, transIDItem);

            QTableWidgetItem *receiverItem = new QTableWidgetItem(QString::fromStdString(t->receiver));
            ui->history_table->setItem(row, 1, receiverItem);

            QTableWidgetItem *senderItem = new QTableWidgetItem(QString::fromStdString(t->sender));
            ui->history_table->setItem(row, 2, senderItem);

            QTableWidgetItem *amountItem = new QTableWidgetItem(QString::number(t->amount));
            ui->history_table->setItem(row, 3, amountItem);

            QTableWidgetItem *dateItem = new QTableWidgetItem(QString::fromStdString(t->date));
            ui->history_table->setItem(row, 4, dateItem);

            QTableWidgetItem *timeItem = new QTableWidgetItem(QString::fromStdString(t->time));
            ui->history_table->setItem(row, 5, timeItem);

            QTableWidgetItem *statusItem = new QTableWidgetItem(QString::fromStdString(t->status));
            ui->history_table->setItem(row, 6, statusItem);

            for (int column = 0; column < ui->history_table->columnCount(); ++column) {
                ui->history_table->item(row, column)->setTextAlignment(Qt::AlignCenter);
            }

            ++row;
        }
    }
    else {
        cout << "No data for the specified month." << endl;
    }
}
//---------------------------------------------------------------------------------------------------------------------------


//---------------------------------------------- Searching By Month ----------------------------------------------------------
string viewTransHistory_dialog::encoding(string s)
{
    if (s == "01")
        return "January";
    else if (s == "02")
        return "February";
    else if (s == "03")
        return "March";
    else if (s == "04")
        return "April";
    else if (s == "05")
        return "May";
    else if (s == "06")
        return "June";
    else if (s == "07")
        return "July";
    else if (s == "08")
        return "August";
    else if (s == "09")
        return "September";
    else if (s == "10")
        return "October";
    else if (s == "11")
        return "November";
    else if (s == "12")
        return "December";
    else
        return "Invalid month";
}

void viewTransHistory_dialog::transiction_history()
{
    string name = Login::current_user.user_acc.username;

    for (auto& tr : requestMoney_dialog::trans_read) {
        transiction* t = tr.second;
        if (t != nullptr && (t->receiver == name || t->sender == name)) {
            //takes the month as substr from the date and make it a key of a map (map<month , vector of transictions>)
            string key = encoding(t->date.substr(3, 2));
            transactions_map[key].push_back(t); //pushes each transiction happend in that month in the vector
        }
    }
}

void viewTransHistory_dialog::on_month_cb_currentTextChanged(const QString &month)
{
    search_by_month(month.toStdString());
}
//----------------------------------------------------------------------------------------------------------------------------



viewTransHistory_dialog::~viewTransHistory_dialog()
{
    delete ui;
}
