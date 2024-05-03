#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
#include "user.h"
#include "admin.h"
#include <vector>
#include <QFile>
#include<QTextStream>
#include<QMessageBox>
#include<iostream>
#include"account.h"
#include "files.h"
#include"requestmoney_dialog.h"
using namespace std;


user_c Login::current_user;

Login::Login(QWidget *parent) :QWidget(parent),ui(new Ui::Login)
{
    ui->setupUi(this);
}

void Login::on_back_button_clicked()
{
    MainWindow::stackedWidget->setCurrentIndex(0);

}



void Login::on_Login_2_clicked()
{
   std::vector<account> users;
    bool check = false;
    current_user.user_acc.username = ui->userName_textBox->text().toStdString();
    string Enteredusername = ui->userName_textBox->text().toStdString();
    string Enteredpassword = ui->password_textBox->text().toStdString();

    files::read_from_file("D:/m7fazty/m7fazty/files/User.csv");
    for (unordered_map<string, user_c*>::value_type & u : sign_up::users_read) {
        user_c* user = u.second;
        if(u.first == Enteredusername && user->user_acc.password == Enteredpassword){
            current_user = *sign_up::users_read[u.first];
            check = true;
            break;
        }
    }

    if (check) {
        QMessageBox::information(this, "Login", "Login successful");
        user_widget=new user();
        MainWindow::stackedWidget->addWidget(user_widget);
        MainWindow::stackedWidget->setCurrentWidget(user_widget);
    } else if(!check && Enteredusername== "admin" && Enteredpassword == "admin") {
        QMessageBox::information(this, "Login", "Login successful");
        admin_widget=new admin();
        MainWindow::stackedWidget->addWidget(admin_widget);
        MainWindow::stackedWidget->setCurrentWidget(admin_widget);
    }else{
        QMessageBox::warning(this, "Login", "Login failed. Invalid username or password.");
    }
    ui->userName_textBox->clear();
    ui->password_textBox->clear();

}


Login::~Login()
{
    delete ui;
}
