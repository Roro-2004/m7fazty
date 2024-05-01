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
using namespace std;

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    QPixmap plain_background("D:/new ds/m7fazty/m7fazty/photos/plain_bg.png");
    ui->label_plain_bg->setPixmap(plain_background);

    QPixmap logo("D:/new ds/m7fazty/m7fazty/photos/logo.png");
    ui->logo_label->setPixmap(logo);

    QPixmap person_logo("D:/new ds/m7fazty/m7fazty/photos/person logo.png");
    ui->personlogo_label->setPixmap(person_logo);

    QPixmap back ("D:/new ds/m7fazty/m7fazty/photos/white back button.png");
    ui->back_label->setPixmap(back);


    userwidget = new user();
    MainWindow::stackedWidget->addWidget( userwidget);

    adminwidget = new admin();
    MainWindow::stackedWidget->addWidget(adminwidget);

}

Login::~Login()
{
    delete ui;
}

void Login::on_back_button_clicked()
{
    MainWindow::stackedWidget->setCurrentIndex(0);

}



void Login::on_Login_2_clicked()
{
   std::vector<account> users;
    bool check = false;
    string Enteredusername = ui->userName_textBox->text().toStdString();
    string Enteredpassword = ui->password_textBox->text().toStdString();

    QFile file("User.txt");
    if (!file.open(QFile::ReadOnly | QFile::Text | QFile:: Append)){
        QMessageBox::warning(this,"File", "File not open");
    }
    QTextStream in(&file);
   // user user_info;
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split(" ");
        if (parts.size() >= 2) {
             account user_info;
            user_info.username = parts[0].toStdString();
            user_info.password = parts[1].toStdString();
            users.push_back(user_info);
            // users.emplace_back(parts[0], parts[1]);
        }
    }
     file.close();

    for (auto it = users.begin(); it != users.end(); ++it) {
        const account& user = *it;
        cout<<user.username<<" "<<user.password;
        if (user.username == Enteredusername && user.password == Enteredpassword) {
            check = true;
            break;
        }
    }

    if (check) {
        QMessageBox::information(this, "Login", "Login successful");
        MainWindow::stackedWidget->setCurrentWidget(userwidget);
    } else if(!check && Enteredusername== "admin" && Enteredpassword == "admin") {
        QMessageBox::information(this, "Login", "Login successful");
        MainWindow::stackedWidget->setCurrentWidget(adminwidget);
    }else{
        QMessageBox::warning(this, "Login", "Login failed. Invalid username or password.");
    }

}

