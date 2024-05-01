#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
#include "user.h"
#include <iostream>
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
    user_widget=new user();
    MainWindow::stackedWidget->addWidget(user_widget);
    MainWindow::stackedWidget->setCurrentWidget(user_widget);
    current_user.user_acc.username = ui->userName_textBox->text().toStdString();
   cout <<current_user.user_acc.username<<endl;
}

Login::~Login()
{
    delete ui;
}
