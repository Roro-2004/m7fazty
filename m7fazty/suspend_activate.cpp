#include "suspend_activate.h"
#include "ui_suspend_activate.h"
#include"admin_c.h"
#include<QMessageBox>
#include"sign_up.h"
admin_c current_admin;

suspend_activate::suspend_activate(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::suspend_activate)
{
    ui->setupUi(this);
}

suspend_activate::~suspend_activate()
{
    delete ui;
}


void suspend_activate::on_Activate_pushButton_clicked()
{

    string username=ui->username_lineEdit->text().toStdString();
    if(sign_up::users_read[username]->user_acc.status==1)
    {
        QMessageBox::warning(this,"Add Account","Account Already Activated");
    }
    else
    {
    current_admin.actviate(username);
    QMessageBox::information(this,"Add Account","Activated Successfuly");
    suspend_activate::close();
    }
}


void suspend_activate::on_suspend_pushButton_clicked()
{
    string username=ui->username_lineEdit->text().toStdString();
    if(sign_up::users_read[username]->user_acc.status==0)
    {
        QMessageBox::warning(this,"Add Account","Account Already Suspended");
    }
    else
    {
    current_admin.suspend(username);
    QMessageBox::information(this,"Add Account","Suspended Successfuly");
    suspend_activate::close();
    }
}

