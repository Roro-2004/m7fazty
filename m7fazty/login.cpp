#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
#include "user.h"
#include <iostream>
using namespace std;

string Login::current_user;

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    QPixmap plain_background("D:/m7fazty/m7fazty/photos/plain_bg.png");
    ui->label_plain_bg->setPixmap(plain_background);

    QPixmap logo("D:/m7fazty/m7fazty/photos/logo.png");
    ui->logo_label->setPixmap(logo);

    QPixmap person_logo("D:/m7fazty/m7fazty/photos/person logo.png");
    ui->personlogo_label->setPixmap(person_logo);

    QPixmap back("D:/m7fazty/m7fazty/photos/white back button.png");
    ui->back_label->setPixmap(back);
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
    user_widget=new user();
    MainWindow::stackedWidget->addWidget(user_widget);
    MainWindow::stackedWidget->setCurrentWidget(user_widget);
    current_user = ui->userName_textBox->text().toStdString();
    cout <<current_user<<endl;

}

