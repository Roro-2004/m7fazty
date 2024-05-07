#include "view_users_dialog.h"
#include "ui_view_users_dialog.h"
#include"requestmoney_dialog.h"
#include"transiction.h"
#include"sign_up.h"
#include"QTableWidgetItem"


view_users_dialog::view_users_dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::view_users_dialog)
{

    ui->setupUi(this);
    populateComboBox();
    ui->transTable->setHorizontalHeaderLabels({"Trans ID", "Receiver", "Sender", "Amount", "Date", "Time", "Status"});
}

view_users_dialog::~view_users_dialog()
{
    delete ui;
}
void view_users_dialog::populateComboBox() {
    if(sign_up::users_read.empty())return;
    unordered_map<string,user_c*>::iterator it;
    for(it = sign_up::users_read.begin();it!=sign_up::users_read.end();it++)
    ui->comboBox->addItem(QString::fromStdString(it->first));

}

void view_users_dialog::populateTable(QString username){
    ui->transTable->clearContents();
    ui->transTable->setRowCount(0);
    int row = 0;
    unordered_map<string,transiction*>::iterator it;
    for (it=requestMoney_dialog::trans_read.begin();it!=requestMoney_dialog::trans_read.end();it++){
        if(it->second->receiver == username.toStdString()||it->second->sender ==username.toStdString())
        {
            ui->transTable->insertRow(row); // Add a new row

            // Populate the table with transaction data
            QTableWidgetItem *transIDItem = new QTableWidgetItem(QString::fromStdString(it->first));
            ui->transTable->setItem(row, 0, transIDItem);

            QTableWidgetItem *receiverItem = new QTableWidgetItem(QString::fromStdString(it->second->receiver));
            ui->transTable->setItem(row, 1, receiverItem);

            QTableWidgetItem *senderItem = new QTableWidgetItem(QString::fromStdString(it->second->sender));
            ui->transTable->setItem(row, 2, senderItem);

            QTableWidgetItem *amountItem = new QTableWidgetItem(QString::number(it->second->amount));
            ui->transTable->setItem(row, 3, amountItem);

            QTableWidgetItem *dateItem = new QTableWidgetItem(QString::fromStdString(it->second->date));
            ui->transTable->setItem(row, 4, dateItem);

            QTableWidgetItem *timeItem = new QTableWidgetItem(QString::fromStdString(it->second->time));
            ui->transTable->setItem(row, 5, timeItem);

            QTableWidgetItem *statusItem = new QTableWidgetItem(QString::fromStdString(it->second->status));
            ui->transTable->setItem(row, 6, statusItem);

            for (int column = 0; column < ui->transTable->columnCount(); ++column) {
                ui->transTable->item(row, column)->setTextAlignment(Qt::AlignCenter);
            }

            ++row;
        }


    }
}





void view_users_dialog::on_comboBox_currentTextChanged(const QString &arg1)
{
    updateLabels(arg1);
    populateTable(arg1);


}
void view_users_dialog::updateLabels(QString username)
{
    auto it = sign_up::users_read.find(username.toStdString());
    if (it != sign_up::users_read.end()) {
        ui->label_4->setText(username);
        ui->label_5->setText(QString::number(sign_up::users_read[username.toStdString()]->balance, 'f', 2));
    }

}
