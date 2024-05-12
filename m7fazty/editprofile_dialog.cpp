#include "editprofile_dialog.h"
#include "ui_editprofile_dialog.h"
#include"mainwindow.h"
#include"user.h"
#include"sign_up.h"
#include"login.h"
#include"user_c.h"
#include<QMessageBox>
#include <QLabel>
#include <QApplication>
#include"confirm_pass_dialog.h"
#include<string>
#include<iostream>
#include"requestmoney_dialog.h"
#include"viewtranshistory_dialog.h"
using namespace std;

account a;

editProfile_dialog::editProfile_dialog(QWidget *parent): QDialog(parent), ui(new Ui::editProfile_dialog)
{
    ui->setupUi(this);

    ui->lineEdit_username->setText(QString::fromStdString(Login::current_user.user_acc.username));
    ui->lineEdit_adress->setText(QString::fromStdString(Login::current_user.user_acc.address));
    ui->lineEdit_email->setText(QString::fromStdString(Login::current_user.user_acc.email));
    ui->lineEdit_age->setText(QString::number(Login::current_user.user_acc.age));
}


void editProfile_dialog::on_pushButton_clicked()
{
    bool edit_check=true;
    user2 = new user_c();

    string old_username = Login::current_user.user_acc.username;

    string new_username = ui->lineEdit_username->text().toStdString();

    if (Login::current_user.user_acc.username == new_username)
    {
        user2->user_acc.username = new_username;
        if (confirm_pass_dialog::newpassword.empty())
        {
            user2->user_acc.password = Login::current_user.user_acc.password;
        }
        else
        {
            user2->user_acc.password = confirm_pass_dialog::newpassword;
        }
        user2->user_acc.address = ui->lineEdit_adress->text().toStdString();
        user2->user_acc.email = ui->lineEdit_email->text().toStdString();
        user2->user_acc.age = ui->lineEdit_age->text().toInt();
        user2->user_acc.status=Login::current_user.user_acc.status;
        user2->balance=Login::current_user.balance;
        user2->dept=Login::current_user.dept;

        if(user2->user_acc.username.empty() || user2->user_acc.password.empty() || user2->user_acc.address.empty() || user2->user_acc.age == NULL){
            QMessageBox::warning(this, "Empty Fields", "Empty fields Not Allowed");
            edit_check = false;
        }

        else if (user2->user_acc.email.empty() || user2->user_acc.email.find("@gmail.com") == string::npos) {
            QMessageBox::warning(this, "Email", "Invalid Email Address, Should have this format -----@gmail.com");
            edit_check = false;
        }

        else if(user2->user_acc.age < 16){
            QMessageBox::warning(this, "Age", "Invalid Age, You must be older than 16");
            edit_check = false;
        }

        if(edit_check)
        {
            sign_up::users_read[new_username] = user2;
            QMessageBox::information(this, "Edit user data", "Edited Successfully");
            this->hide();
        }

    }
    else
    {
        if (sign_up::users_read.find(new_username) != sign_up::users_read.end())
        {
            QMessageBox::information(this, "Edit user data", "Username already exists");
        }
        else
        {
            user2->user_acc.username = new_username;
            if (confirm_pass_dialog::newpassword.empty())
            {
                user2->user_acc.password = Login::current_user.user_acc.password;
            }
            else
            {
                user2->user_acc.password = confirm_pass_dialog::newpassword;
            }
            user2->user_acc.address = ui->lineEdit_adress->text().toStdString();
            user2->user_acc.email = ui->lineEdit_email->text().toStdString();
            user2->user_acc.age = ui->lineEdit_age->text().toInt();
            user2->user_acc.status=Login::current_user.user_acc.status;
            user2->balance=Login::current_user.balance;
            user2->dept=Login::current_user.dept;

            sign_up::users_read.erase(Login::current_user.user_acc.username);

            if(user2->user_acc.username.empty() || user2->user_acc.password.empty() || user2->user_acc.address.empty() || user2->user_acc.age == NULL){
                QMessageBox::warning(this, "Empty Fields", "Empty fields Not Allowed");
                edit_check = false;
            }

            else if (user2->user_acc.email.empty() || user2->user_acc.email.find("@gmail.com") == std::string::npos) {
                QMessageBox::warning(this, "Email", "Invalid Email Address, Should have this format -----@gmail.com");
                edit_check = false;
            }

            else if(user2->user_acc.age < 16){
                QMessageBox::warning(this, "Age", "Invalid Age, You must be older than 16");
                edit_check = false;
            }

            if(edit_check)
            {
                sign_up::users_read[new_username] = user2;
                QMessageBox::information(this, "Edit user data", "Edited successfully");
                this->hide();
            }
        }
    }

    viewTransHistory_dialog d;
    d.onUsernameChanged(new_username,old_username);
}


void editProfile_dialog::on_pushButton_2_clicked()
{
    confirm_pass_dialog secwin;
    secwin.setModal(true);
    secwin.setWindowTitle("Change Password");
    secwin.exec();
}

editProfile_dialog::~editProfile_dialog()
{
    delete ui;
}

