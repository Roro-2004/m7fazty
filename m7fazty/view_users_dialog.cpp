#include "view_users_dialog.h"
#include "ui_view_users_dialog.h"
#include"requestmoney_dialog.h"
#include"transiction.h"
#include"sign_up.h"



view_users_dialog::view_users_dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::view_users_dialog)
{

    ui->setupUi(this);
    populateComboBox();

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

void view_users_dialog::on_comboBox_currentTextChanged(const QString &arg1)
{
    updateLabels(arg1);
    updateTransactionsList(arg1);


}
void view_users_dialog::updateLabels(QString username)
{
    auto it = sign_up::users_read.find(username.toStdString());
    if (it != sign_up::users_read.end()) {
        ui->label_4->setText(username);
        ui->label_5->setText(QString::number(sign_up::users_read[username.toStdString()]->balance, 'f', 2));
    }

}
void view_users_dialog::updateTransactionsList(QString username)
{
    ui->listWidget->clear();

    QString firstId;
    unordered_map<string,transiction*>::iterator it;
    for (it=requestMoney_dialog::trans_read.begin();it!=requestMoney_dialog::trans_read.end();it++){
        if(it->second->receiver == username.toStdString()||it->second->sender ==username.toStdString())
        {
            ui->listWidget->addItem(QString::fromStdString(it->first));
            firstId = (QString::fromStdString(it->first));
        }    
    }
    updateTransInfo(firstId);
    if(ui->listWidget->count()==0){
        clearLabels();
        ui->listWidget->addItem("This user has no transactions");
    }
}



void view_users_dialog::on_listWidget_currentTextChanged(const QString &currentText)
{
    updateTransInfo(currentText);
}
void view_users_dialog::updateTransInfo(QString transID){

    auto it = requestMoney_dialog::trans_read.find(transID.toStdString());
    if (it != requestMoney_dialog::trans_read.end()) {
        ui->label_9->setText(transID);
        ui->label_10->setText(QString::number(requestMoney_dialog::trans_read[transID.toStdString()]->amount, 'f', 2));
        ui->label_11->setText(QString::fromStdString(requestMoney_dialog::trans_read[transID.toStdString()]->sender));
        ui->label_13->setText(QString::fromStdString(requestMoney_dialog::trans_read[transID.toStdString()]->receiver));
        ui->label_15->setText(QString::fromStdString(requestMoney_dialog::trans_read[transID.toStdString()]->date));
        ui->label_17->setText(QString::fromStdString(requestMoney_dialog::trans_read[transID.toStdString()]->time));
        ui->label_19->setText(QString::fromStdString(requestMoney_dialog::trans_read[transID.toStdString()]->status));
    }
}
void view_users_dialog::clearLabels()
{
    ui->label_9->clear();
    ui->label_10->clear();
    ui->label_11->clear();
    ui->label_13->clear();
    ui->label_15->clear();
    ui->label_17->clear();
    ui->label_19->clear();
}

