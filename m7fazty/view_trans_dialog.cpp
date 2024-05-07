#include "view_trans_dialog.h"
#include "ui_view_trans_dialog.h"
#include"requestmoney_dialog.h"

view_trans_dialog::view_trans_dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::view_trans_dialog)
{
    ui->setupUi(this);
    populateList();
}

view_trans_dialog::~view_trans_dialog()
{
    delete ui;
}
void view_trans_dialog::populateList()
{
    if(requestMoney_dialog::trans_read.empty()){
        ui->listWidget->addItem("no available transactions");
            return;
    }
    unordered_map<string,transiction*>::iterator it;
    for (it=requestMoney_dialog::trans_read.begin();it!=requestMoney_dialog::trans_read.end();it++){
        ui->listWidget->addItem(QString::fromStdString(it->first));
    }

}
void view_trans_dialog::updateTransInfo(QString transID){

    auto it = requestMoney_dialog::trans_read.find(transID.toStdString());
    if (it != requestMoney_dialog::trans_read.end()) {
        ui->label_id->setText(transID);
        ui->label_amount->setText(QString::number(requestMoney_dialog::trans_read[transID.toStdString()]->amount, 'f', 2));
        ui->label_sender->setText(QString::fromStdString(requestMoney_dialog::trans_read[transID.toStdString()]->sender));
        ui->label_receiver->setText(QString::fromStdString(requestMoney_dialog::trans_read[transID.toStdString()]->receiver));
        ui->label_date->setText(QString::fromStdString(requestMoney_dialog::trans_read[transID.toStdString()]->date));
        ui->label_time->setText(QString::fromStdString(requestMoney_dialog::trans_read[transID.toStdString()]->time));
        ui->label_status->setText(QString::fromStdString(requestMoney_dialog::trans_read[transID.toStdString()]->status));
    }

}
void view_trans_dialog::on_listWidget_currentTextChanged(const QString &currentText)
{
    updateTransInfo(currentText);
}

