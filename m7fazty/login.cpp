#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
#include "user.h"
#include <iostream>
#include"requestmoney_dialog.h"
using namespace std;

string Login::current_user;

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    ui->label_plain_bg->setPixmap(plain_background);

    ui->logo_label->setPixmap(logo);

    ui->personlogo_label->setPixmap(person_logo);

    ui->back_label->setPixmap(back);
    cout<<requestMoney_dialog::trans_data.size()<<endl;
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

