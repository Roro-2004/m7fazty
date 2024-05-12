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
#include <QMainWindow>
using namespace std;

unordered_map<string, user_c*> sign_up::users_read;


sign_up::sign_up(QWidget *parent): QWidget(parent), ui(new Ui::sign_up)
{
    ui->setupUi(this);

    loginWidget = new Login();
    MainWindow::stackedWidget->addWidget(loginWidget);
}





bool sign_up::isStrongPassword(string &password) {
    regex uppercase("[A-Z]");
    regex lowercase("[a-z]");
    regex digit("[0-9]");
    regex special("[!@#$%^&*()_+{}|:<>?~-]");

    return (password.length() >= 8) &&
           regex_search(password, uppercase) &&
           regex_search(password, lowercase) &&
           regex_search(password, digit) &&
           regex_search(password, special);
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
    string pass_before_hashing = ui->password_textBox->text().toStdString();
    user->user_acc.password = user->user_acc.hashPassword(ui->password_textBox->text());
    user->user_acc.address = ui->city_textBox->text().toStdString();
    user->user_acc.email = ui->email_textBox->text().toStdString();
    user->user_acc.age = ui->age_textBox->text().toInt();
    user->balance = 0;
    user->dept=0;
    user->user_acc.status =true;


    if (user->user_acc.username.empty() || user->user_acc.password.empty() || user->user_acc.address.empty() || user->user_acc.age == NULL){
        QMessageBox::warning(this, "Empty Fields", " Empty fields Not Allowed");
        check = false;
    }
    else if(users_read[user->user_acc.username] != NULL){
        QMessageBox::warning(this, "Username", "Username already exists");
        check = false;
    }
    else if (user->user_acc.email.empty() || user->user_acc.email.find("@gmail.com") == std::string::npos) {
        QMessageBox::warning(this, "Email", "Invalid Email Address, Should have this format -----@gmail.com");
        check = false;
    }
    else if(user->user_acc.age < 16){
        QMessageBox::warning(this, "Age", "Invalid Age, You must be older than 16");
        check = false;
    }
     else if (!isStrongPassword(pass_before_hashing)) {
    QMessageBox::warning(this, "Password", "Password is not strong enough. Please use at least 8 characters including uppercase, lowercase, digits, and special characters.");
    check = false;
    }
    if (check){
        QMessageBox::information(this, "Sign up","Sign up successfully");
        users_read[user->user_acc.username] = user;
        MainWindow::stackedWidget->setCurrentIndex(1);
    }
}


sign_up::~sign_up()
{
    delete ui;
}
