#include "nadminn.h"
#include "ui_nadminn.h"
#include "admin_c.h"
#include"account.h"
#include<QString>
#include<QMessageBox>
NadminN::NadminN(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::NadminN)
{
    ui->setupUi(this);
}

NadminN::~NadminN()
{
    delete ui;
}

void NadminN::on_add_acc_pushButton_clicked()
{
    account new_account;
    new_account.username=ui->username_add_lineEdit->text();
    new_account.password=ui->password_add_lineEdit->text();
    new_account.address=ui->address_add_lineEdit->text();
    new_account.age=ui->age_add_lineEdit->text().toInt();
    if(ui->Activate_add_checkBox->isChecked() && ui->suspend_add_checkBox->isChecked())
    {
        QMessageBox::warning(this,"Account Status","CHOSE ONLY ONE..Status is set true by deafult");
        new_account.status=true;
    }
    else if(ui->Activate_add_checkBox->isChecked())
    {
        new_account.status=true;
    }
    else if(ui->suspend_add_checkBox->isChecked())
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


void NadminN::on_editBalance_pushButton_clicked()
{
    admin_c current_admin;
    QString username=ui->username_editBalance_lineEdit->text();
    float new_balance=ui->newBalance_editBalance_lineEdit->text().toFloat();
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



void NadminN::on_Activate_pushButton_clicked()
{
    admin_c current_admin;
    current_admin.actviate(ui->username_Activate_lineEdit->text());
}


void NadminN::on_suspend_pushButton_clicked()
{
    admin_c current_admin;
    current_admin.suspend(ui->username_suspend_lineEdit->text());
}


void NadminN::on_deleteacc_pushButton_clicked()
{
    admin_c current_admin;
    bool is_exist=current_admin.delete_acc(ui->username_deleteacc_lineEdit->text());
    if(is_exist)
    {
        QMessageBox::information(this,"Delete Account","Done Successfuly");
    }
    else
    {
        QMessageBox::information(this,"Delete Account","That Account is not exist allready, Enter another one");
    }
}

