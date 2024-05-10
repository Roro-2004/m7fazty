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
#include "secondwindow.h"

editProfile_dialog::editProfile_dialog(QWidget *parent): QDialog(parent), ui(new Ui::editProfile_dialog)
{
    ui->setupUi(this);

            ui->lineEdit_username->setText(QString::fromStdString(Login::current_user.user_acc.username));
            ui->lineEdit_password->setText(QString::fromStdString(Login::current_user.user_acc.password));
            ui->lineEdit_adress->setText(QString::fromStdString(Login::current_user.user_acc.address));
            ui->lineEdit_email->setText(QString::fromStdString(Login::current_user.user_acc.email));
            ui->lineEdit_age->setText(QString::number(Login::current_user.user_acc.age));

}

editProfile_dialog::~editProfile_dialog()
{
    delete ui;
}

void editProfile_dialog::on_pushButton_clicked()
{

    user2 = new user_c();
    if(Login::current_user.user_acc.username==ui->lineEdit_username->text().toStdString()){

        user2->user_acc.username = ui->lineEdit_username->text().toStdString();
        if(secondwindow::newpassword.empty()){
            user2->user_acc.password =ui->lineEdit_password->text().toStdString();
        }
        else{ user2->user_acc.password = secondwindow::newpassword;}
        user2->user_acc.address = ui->lineEdit_adress->text().toStdString();
        user2->user_acc.email = ui->lineEdit_email->text().toStdString();
        user2->user_acc.age = ui->lineEdit_age->text().toInt();

        sign_up::users_read[Login::current_user.user_acc.username] = user2;
        QMessageBox::information(this, "edit user data"," Editing successfully");
        this->hide();
    }

    else  if(sign_up::users_read.find(ui->lineEdit_username->text().toStdString())!= sign_up::users_read.end()){
          QMessageBox::information(this, "edit user data"," THIS USERNAME IS ");
    }
    user2->user_acc.username = ui->lineEdit_username->text().toStdString();
    if(secondwindow::newpassword.empty()){
        user2->user_acc.password =ui->lineEdit_password->text().toStdString();
    }
    else{ user2->user_acc.password = secondwindow::newpassword;}
    user2->user_acc.address = ui->lineEdit_adress->text().toStdString();
    user2->user_acc.email = ui->lineEdit_email->text().toStdString();
    user2->user_acc.age = ui->lineEdit_age->text().toInt();

    sign_up::users_read[Login::current_user.user_acc.username] = user2;
     QMessageBox::information(this, "edit user data"," Editing successfully");
    this->hide();

    // say somthing
}






void editProfile_dialog::on_lineEdit_password_textEdited(const QString &arg1)
{
    secondwindow secwin;
    secwin.setModal(true);
    secwin.exec();
}

