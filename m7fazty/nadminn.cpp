#include "nadminn.h"
#include "ui_nadminn.h"
#include "admin_c.h"
#include"account.h"
#include<QString>
#include<QMessageBox>
#include<iostream>
using namespace std;
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




void NadminN::on_editBalance_pushButton_clicked()
{
    cout<<"edit balance\n";
    admin_c current_admin;
    string username=ui->username_editBalance_lineEdit->text().toStdString();
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
    cout<<"Activate\n";
    admin_c current_admin;
    string username=ui->username_Activate_lineEdit->text().toStdString();
    current_admin.actviate(username);
}


void NadminN::on_suspend_pushButton_clicked()
{
    cout<<"suspend\n";
    admin_c current_admin;
    string username=ui->username_suspend_lineEdit->text().toStdString();
    current_admin.suspend(username);
}



