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

void viewTransHistory_dialog::show_whole_history()
{

    ui->history_table->clearContents();
    ui->history_table->setRowCount(0);
    int row = 0;

    for (auto entry : transactions_map) {
        for (auto t : entry.second) {
            ui->history_table->insertRow(row); // Add a new row

            // Populate the table with transaction data
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

            // Set text alignment for each item in the row
            for (int column = 0; column < ui->history_table->columnCount(); ++column) {
                ui->history_table->item(row, column)->setTextAlignment(Qt::AlignCenter);
            }

            ++row; // Increment row index for the next transaction
        }
    }
}

void viewTransHistory_dialog::search_by_month(string s) {
    ui->history_table->clearContents();
    ui->history_table->setRowCount(0); // Reset row count
    int row = 0; // Initialize row index

    auto it = transactions_map.find(s);
    if (it != transactions_map.end()) {
        for (auto t : it->second) {
            ui->history_table->insertRow(row); // Add a new row

            // Populate the table with transaction data
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

            // Set text alignment for each item in the row
            for (int column = 0; column < ui->history_table->columnCount(); ++column) {
                ui->history_table->item(row, column)->setTextAlignment(Qt::AlignCenter);
            }

            ++row; // Increment row index for the next transaction
        }
    } else {
        cout << "No data for the specified month." << endl;
    }
}

void viewTransHistory_dialog::transiction_history() {
    string name = Login::current_user.user_acc.username;

    // Iterate over the transactions in requestMoney_dialog::trans_data
  /*  for (auto& tr : requestMoney_dialog::trans_read) {
        transiction* t = tr.second;
        if (t != nullptr && (t->receiver == name || t->sender == name)) {
            string key = encoding(t->date.substr(3, 2)); // Assuming month is two characters long
            transactions_map[key].push_back(t);
        }
    }*/

    // Iterate over the transactions in requestMoney_dialog::trans_read
    for (auto& tr : requestMoney_dialog::trans_read) {
        transiction* t = tr.second;
        if (t != nullptr && (t->receiver == name || t->sender == name)) {
            string key = encoding(t->date.substr(3, 2)); // Assuming month is two characters long
            transactions_map[key].push_back(t);
        }
    }

    cout << "Transactions for user " << name << ":" << endl;
    // Print out transactions for debugging
    for (auto& entry : transactions_map) {
        cout << "Month: " << entry.first << endl;
        for (auto t : entry.second) {
            cout << "Trans ID: " << t->id << ", Receiver: " << t->receiver << ", Sender: " << t->sender
                 << ", Amount: " << t->amount << ", Date: " << t->date << ", Time: " << t->time
                 << ", Status: " << t->status << endl;
        }
    }
}

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


viewTransHistory_dialog::~viewTransHistory_dialog()
{
    delete ui;
}

void viewTransHistory_dialog::on_month_cb_currentTextChanged(const QString &month)
{
    search_by_month(month.toStdString());

}
