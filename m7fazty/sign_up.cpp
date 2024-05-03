#include "sign_up.h"
#include "ui_sign_up.h"
#include"QString"
#include <QFile>
#include "files.h"
#include<QTextStream>
#include<QMessageBox>
#include <QRegularExpression>
#include "mainwindow.h"
#include <string>
#include <regex>
using namespace std;
//unordered_map<string, user_c*> sign_up::users_data;
unordered_map<string, user_c*> sign_up::users_read;

sign_up::sign_up(QWidget *parent): QWidget(parent), ui(new Ui::sign_up)
{
    ui->setupUi(this);

    loginWidget = new Login();
    MainWindow::stackedWidget->addWidget(loginWidget);
}

sign_up::~sign_up()
{
    delete ui;
}


bool sign_up::isStrongPassword(std::string &password) {
    std::regex uppercase("[A-Z]");
    std::regex lowercase("[a-z]");
    std::regex digit("[0-9]");
    std::regex special("[!@#$%^&*()_+{}|:<>?~-]");

    // Check if the password meets the criteria
    return (password.length() >= 8) &&
           std::regex_search(password, uppercase) &&
           std::regex_search(password, lowercase) &&
           std::regex_search(password, digit) &&
           std::regex_search(password, special);
}


void sign_up::on_back_button_clicked()
{
    MainWindow::stackedWidget->setCurrentIndex(0);

}


void sign_up::on_sign_up2_button_clicked()
{
    bool check = true;

    user = new user_c();
    user->user_acc.username = ui->userName_textBox->text().toStdString();
    user->user_acc.password = ui->password_textBox->text().toStdString();
    user->user_acc.address = ui->city_textBox->text().toStdString();
    user->user_acc.email = ui->email_textBox->text().toStdString();
    user->user_acc.age = ui->age_textBox->text().toInt();
    user->balance = 0;
    user->user_acc.status =true;
    users_read[user->user_acc.username] = user;

    if (!isStrongPassword(user->user_acc.password)) {
        QMessageBox::warning(this, "Password", "Password is not strong enough. Please use at least 8 characters including uppercase, lowercase, digits, and special characters.");
        check = false;
    }
    if (check){
        QMessageBox::information(this, "Sign up","Sign up successfully");
        MainWindow::stackedWidget->setCurrentIndex(1);
    }

}

