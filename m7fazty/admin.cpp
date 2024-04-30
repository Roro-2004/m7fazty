#include "admin.h"
#include "ui_admin.h"
#include "admin_c.h"
#include"account.h"
#include<QString>
#include<QMessageBox>
admin::admin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::admin)
{
    ui->setupUi(this);
}

admin::~admin()
{
    delete ui;
}

void admin::on_editBalnce_pushButton_clicked()
{
    admin_c current_admin;
    QString username=ui->username_editBalance_lineEdit->text();
    float new_balance=ui->newBalance_lineEdit->text().toFloat();
    bool done=current_admin.edit_balance(username,new_balance);
    if(done)
    {
        QMessageBox::information(this,"Editing Balance","Done Successfuly");
    }
    else
    {
         QMessageBox::warning(this,"Editing Balance","That Username is not exist");
    }
}


void admin::on_addAccount_pushButton_clicked()
{
    account new_account;
    new_account.username=ui->username_addAccount_lineEdit->text();
    new_account.password=ui->password_addAccount_lineEdit->text();
    new_account.address=ui->address_addAccount_lineEdit->text();
    new_account.age=ui->age_addAccount_lineEdit->text().toInt();
    if(ui->Activate_addAccount_checkBox_2->isChecked() && ui->suspended_addAccount_checkBox->isChecked())
    {
        QMessageBox::warning(this,"Account Status","CHOSE ONLY ONE..Status is set true by deafult");
        new_account.status=true;
    }
    else if(ui->Activate_addAccount_checkBox_2->isChecked())
    {
         new_account.status=true;
    }
    else if(ui->suspended_addAccount_checkBox->isChecked())
    {
        new_account.status=true;
    }
    else
    {
        QMessageBox::warning(this,"Account Status","Status is set true by deafult");
        new_account.status=true;
    }
    admin_c current_admin;
   bool is_exist= current_admin.add_acc(new_account);
    if(is_exist)
    {
       QMessageBox::warning(this,"Add Account","That Username is allready exist, Enter another one");
    }
    else
    {
       QMessageBox::information(this,"Add Account","Done Successfuly");
    }
}


void admin::on_suspend_pushButton_clicked()
{
   admin_c current_admin;
    current_admin.suspend(ui->suspend_lineEdit->text());
}


void admin::on_Activate_pushButton_clicked()
{
    admin_c current_admin;
    current_admin.suspend(ui->Activate_lineEdit->text());
}


/*    admin_c current_admin;
    bool is_exist=current_admin.delete_acc(ui->deletion_lineEdit->text());
    if(is_exist)
    {
        QMessageBox::information(this,"Delete Account","Done Successfuly");
    }
    else
    {
        QMessageBox::information(this,"Delete Account","That Account is not exist allready, Enter another one");
    }*/


