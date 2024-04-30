#include "user.h"
#include "ui_user.h"
#include"user_c.h"
#include"context.h"
#include<QString>
user::user(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::user)
{
    ui->setupUi(this);
}

user::~user()
{
    delete ui;
}

void user::on_viewCurrentBalanceButton_clicked()
{
    QString current_balance = context::user.View_current_balance();
    ui->currentBalnceLabel->setText(current_balance);
}

