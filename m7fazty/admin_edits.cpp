#include "admin_edits.h"
#include "ui_admin_edits.h"
#include"account.h"
#include "admin_c.h"
#include<iostream>
#include<QMessageBox>
using namespace std;
admin_edits::admin_edits(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::admin_edits)
{
    ui->setupUi(this);
}

admin_edits::~admin_edits()
{
    delete ui;
}

void admin_edits::on_viewCurrentAccData_pushButton_clicked()
{

    QString current_username=ui->viewCurrentAccData_lineEdit->text();
    admin_c current_admin;
    account viewAcc=current_admin.View_current_account_data(current_username);
    ui->viewAndEditusername_lineEdit->setText(viewAcc.username);
    ui->viewAndEditPassword_lineEdit->setText(viewAcc.password);
    ui->viewAndEditAddress_lineEdit->setText(viewAcc.address);
    QString userAge=QString::number(viewAcc.age);
    ui->viewAndEditAge_lineEdit->setText(userAge);
}


void admin_edits::on_editAcc_pushButton_clicked()
{
    account editedAccount;
    editedAccount.username=ui->viewAndEditusername_lineEdit->text();
    editedAccount.password=ui->viewAndEditPassword_lineEdit->text();
    editedAccount.address=ui->viewAndEditAddress_lineEdit->text();
    int editedAge=ui->viewAndEditAge_lineEdit->text().toInt();
    admin_c currentAdmin;
    QString previousUsername=ui->viewCurrentAccData_lineEdit->text();
   bool is_exist= currentAdmin.edit_acc(previousUsername,editedAccount);
    if(is_exist)
   {
        QMessageBox::warning(this,"Add Account","That Username is allready exist, Enter another one");
   }
    else
    {
         QMessageBox::information(this,"Add Account","Done Successfuly");
    }
}

