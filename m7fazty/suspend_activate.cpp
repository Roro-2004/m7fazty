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
     if(username.empty())
         QMessageBox::warning(this,"Activate Account","Fill the empty field");
     else
     {
         if(sign_up::users_read[username]==NULL)
             QMessageBox::warning(this,"Activate Account","Username NOT EXIST");
         else
         {
             if(sign_up::users_read[username]->user_acc.status==1)
             {
                 QMessageBox::warning(this,"Activate Account","Account Already Activated");
             }
             else
             {
                 current_admin.actviate(username);
                 QMessageBox::information(this,"Activate Account","Activated Successfuly");
                 suspend_activate::close();
             }
         }
     }
}


void suspend_activate::on_suspend_pushButton_clicked()
{
    string username=ui->username_lineEdit->text().toStdString();
    if(username.empty())
        QMessageBox::warning(this,"Suspend Account","Fill the empty field");
    else
    {
        if(sign_up::users_read[username]==NULL)
            QMessageBox::warning(this,"Suspend Account","Username NOT EXIST");
        else
        {
            if(sign_up::users_read[username]->user_acc.status==0)
            {
                QMessageBox::warning(this,"Suspend Account","Account Already Suspended");
            }
            else
            {
                current_admin.suspend(username);
                QMessageBox::information(this,"Suspend Account","Suspended Successfuly");
                suspend_activate::close();
            }
        }
    }
}

