#include "view_users_dialog.h"
#include "ui_view_users_dialog.h"
#include"admin_c.h"
#include"requestmoney_dialog.h"
#include"transiction.h"



view_users_dialog::view_users_dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::view_users_dialog)
{

    ui->setupUi(this);
    transiction* t = new transiction();
    t->sender="maria";
    t->id="8888D";
    transiction* t1 = new transiction();
    t1->receiver="maria";
    t1->id="kkkkkD";
    requestMoney_dialog::trans_read.insert(std::make_pair(t->id,t));
    requestMoney_dialog::trans_read.insert(std::make_pair(t1->id,t1));
    //qDebug()<< requestMoney_dialog::trans_read["8888D"]->sender;

    transiction* t3 = new transiction();
    t3->sender="lala";
    t3->id="EEEE";
    t3->amount=33.3;
    t3->receiver="marina";
    t3->date = "5/3";
    t3->status="success";
    t3->time="10:00";



requestMoney_dialog::trans_read.insert(std::make_pair(t3->id,t3));
    user_c u;
    u.user_acc.username="maria";
    u.balance=444;
    user_c u1;
    u1.user_acc.username="lala";
    u1.balance=555;
    admin_c::users.insert_or_assign("maria",u);
    admin_c::users.insert_or_assign("lala",u1);
    populateComboBox();

}

view_users_dialog::~view_users_dialog()
{
    delete ui;
}
void view_users_dialog::populateComboBox() {
    if(admin_c::users.empty()) return;
    unordered_map<string,user_c>::iterator it;
    for(it= admin_c::users.begin();it!=admin_c::users.end();it++){
        ui->comboBox->addItem(QString::fromStdString(it->first));
    }

}

void view_users_dialog::on_comboBox_currentTextChanged(const QString &arg1)
{
    updateLabels(arg1);
    updateTransactionsList(arg1);


}
void view_users_dialog::updateLabels(QString username)
{
    auto it = admin_c::users.find(username.toStdString());
    if (it != admin_c::users.end()) {
    ui->label_4->setText(username);
    ui->label_5->setText(QString::number(admin_c::users[username.toStdString()].balance, 'f', 2));
    }}
void view_users_dialog::updateTransactionsList(QString username)
{
    ui->listWidget->clear();

    QString firstId;
    unordered_map<string,transiction*>::iterator it;
    for (it=requestMoney_dialog::trans_read.begin();it!=requestMoney_dialog::trans_read.end();it++){
        if(it->second->receiver == admin_c::users[username.toStdString()].user_acc.username||it->second->sender == admin_c::users[username.toStdString()].user_acc.username)
        {
            ui->listWidget->addItem(QString::fromStdString(it->second->id));
            firstId = (QString::fromStdString(it->second->id));
        }
    }

    updateTransInfo(firstId);
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

