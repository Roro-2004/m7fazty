#include "suspend_activate.h"
#include "ui_suspend_activate.h"
#include"admin_c.h"
#include<QMessageBox>
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
    current_admin.actviate(username);
    QMessageBox::information(this,"Add Account","Done Successfuly");
}


void suspend_activate::on_suspend_pushButton_clicked()
{
    string username=ui->username_lineEdit->text().toStdString();
    current_admin.suspend(username);
    QMessageBox::information(this,"Add Account","Done Successfuly");
}
