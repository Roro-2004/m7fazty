#include "viewtranshistory_dialog.h"
#include "ui_viewtranshistory_dialog.h"
#include"requestmoney_dialog.h"
#include"transiction.h"
#include"requestmoney_dialog.h"
#include<QTableWidgetItem>
#include<iostream>
using namespace  std;
viewTransHistory_dialog::viewTransHistory_dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::viewTransHistory_dialog)
{
    ui->setupUi(this);


    QPixmap dialog_bg("D:/Projects/2nd Year/DS/m7fazty/m7fazty/photos/dialog_bg.png");
    ui->label_bg->setPixmap(dialog_bg);

    ui->history_table->setHorizontalHeaderLabels({"Trans ID", "Receiver", "Sender", "Amount", "Date", "Time", "Status"});

    ui->history_table->resizeColumnsToContents();

   for (unordered_map<string, transiction*>::value_type & trans : requestMoney_dialog::trans_data) {
        cout<<"mmmmmmmmmmmmmmmmm";
   /*for (unordered_map<string, transiction*>::value_type & trans : requestMoney_dialog::trans_data) {
        int row = ui->history_table->rowCount(); // Get the current row index

        QTableWidgetItem *transIDItem = new QTableWidgetItem(QString::fromStdString(trans.first));
        ui->history_table->setItem(row, 0, transIDItem);

        QTableWidgetItem *receiverItem = new QTableWidgetItem(QString::fromStdString(trans.second->receiver));
        ui->history_table->setItem(row, 1, receiverItem);

        QTableWidgetItem *senderItem = new QTableWidgetItem(QString::fromStdString(trans.second->sender));
        ui->history_table->setItem(row, 2, senderItem);

        QTableWidgetItem *amountItem = new QTableWidgetItem(QString::number(trans.second->amount));
        ui->history_table->setItem(row, 3, amountItem);

        QTableWidgetItem *dateItem = new QTableWidgetItem(QString::fromStdString(trans.second->date));
        ui->history_table->setItem(row, 4, dateItem);

        QTableWidgetItem *timeItem = new QTableWidgetItem(QString::fromStdString(trans.second->time));
        ui->history_table->setItem(row, 5, timeItem);

        QTableWidgetItem *statusItem = new QTableWidgetItem(QString::fromStdString(trans.second->status));
        ui->history_table->setItem(row, 6, statusItem);
    }

    }*/

    ui->history_table->show();
}

viewTransHistory_dialog::~viewTransHistory_dialog()
{
    delete ui;
}


