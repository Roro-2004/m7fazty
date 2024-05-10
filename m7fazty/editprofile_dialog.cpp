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
//come
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
    bool edit_check=true;
    // Create a new user object to hold the edited data
    user_c* user2 = new user_c();

    // Retrieve the username entered by the user
    std::string new_username = ui->lineEdit_username->text().toStdString();

    // Check if the new username is the same as the current username
    if (Login::current_user.user_acc.username == new_username)
    {
        // Update user data with the edited values
        user2->user_acc.username = new_username;
        user2->user_acc.password = secondwindow::newpassword.empty() ?
                                       ui->lineEdit_password->text().toStdString() :
                                       secondwindow::newpassword;
        user2->user_acc.address = ui->lineEdit_adress->text().toStdString();
        user2->user_acc.email = ui->lineEdit_email->text().toStdString();
        user2->user_acc.age = ui->lineEdit_age->text().toInt();
        //edit check
        if(user2->user_acc.username.empty() || user2->user_acc.password.empty() || user2->user_acc.address.empty() || user2->user_acc.age == NULL){
            QMessageBox::warning(this, "Empty Fields", "Please fill in all fields.");
            edit_check = false;
        }

        else if (user2->user_acc.email.empty() || user2->user_acc.email.find("@gmail.com") == std::string::npos) {
            QMessageBox::warning(this, "Email", "Invalid email address. Please enter a valid Gmail address.");
            edit_check = false;
        }

        else if(user2->user_acc.age < 16){
            QMessageBox::warning(this, "Age", "Invalid age.The age must be older than 16");
            edit_check = false;
        }

        // Update the user data in the map
        if(edit_check){
        sign_up::users_read[new_username] = user2;

        QMessageBox::information(this, "Edit user data", "Editing successfully");
        this->hide();}

    }
    else
    {
        // Check if the new username already exists in the map
        if (sign_up::users_read.find(new_username) != sign_up::users_read.end())
        {
            QMessageBox::information(this, "Edit user data", "This username already exists");
        }
        else
        {
            // Update user data with the edited values

            user2->user_acc.username = new_username;
            user2->user_acc.password = secondwindow::newpassword.empty() ?
                                           ui->lineEdit_password->text().toStdString() :
                                           secondwindow::newpassword;
            user2->user_acc.address = ui->lineEdit_adress->text().toStdString();
            user2->user_acc.email = ui->lineEdit_email->text().toStdString();
            user2->user_acc.age = ui->lineEdit_age->text().toInt();


            // Remove the old user data from the map
            sign_up::users_read.erase(Login::current_user.user_acc.username);

            //edit check
            if(user2->user_acc.username.empty() || user2->user_acc.password.empty() || user2->user_acc.address.empty() || user2->user_acc.age == NULL){
                QMessageBox::warning(this, "Empty Fields", "Please fill in all fields.");
                edit_check = false;
            }

            else if (user2->user_acc.email.empty() || user2->user_acc.email.find("@gmail.com") == std::string::npos) {
                QMessageBox::warning(this, "Email", "Invalid email address. Please enter a valid Gmail address.");
                edit_check = false;
            }

            else if(user2->user_acc.age < 16){
                QMessageBox::warning(this, "Age", "Invalid age.The age must be older than 16");
                edit_check = false;
            }

            // Update the user data in the map
            if(edit_check){
            sign_up::users_read[new_username] = user2;

            QMessageBox::information(this, "Edit user data", "Editing successfully");
            this->hide();}
        }
    }
    // say somthing
}






void editProfile_dialog::on_lineEdit_password_textEdited(const QString &arg1)
{
    secondwindow secwin;
    secwin.setModal(true);
    secwin.exec();
}

