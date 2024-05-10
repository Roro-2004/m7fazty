#include "confirm_pass_dialog.h"
#include "ui_confirm_pass_dialog.h"
#include"editprofile_dialog.h"
#include"user_c.h"
#include"sign_up.h"
#include"mainwindow.h"
#include<QMessageBox>
#include<QString>
#include<string>
using namespace std;

string confirm_pass_dialog::newpassword;

confirm_pass_dialog::confirm_pass_dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::confirm_pass_dialog)
{

    ui->setupUi(this);
}

confirm_pass_dialog::~confirm_pass_dialog()
{
    delete ui;
}



void confirm_pass_dialog::on_pushButton_clicked()
{
    bool check = true;

    newpassword= account::hashPassword( ui->lineEdit_2->text());

    string pass_before_hashing = ui->lineEdit_2->text().toStdString();

    if(account::hashPassword(ui->lineEdit->text())!=Login::current_user.user_acc.password )
    {
        QMessageBox :: warning (this,"WARNING","Incorrect Password, Try Again");
    }

    if (!sign_up::isStrongPassword(pass_before_hashing)) {
        QMessageBox::warning(this, "Password", "Password is not strong enough. Please use at least 8 characters including uppercase, lowercase, digits, and special characters.");
        check = false;
    }

    if (check)
    {
        QMessageBox::information(this, "edit password"," Edited successfully");
        this->hide();
    }
}
