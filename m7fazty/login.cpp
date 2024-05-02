#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
#include "user.h"
#include"nadminn.h"
Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    QPixmap plain_background("D:/level 2 projects/m7fazty/m7fazty/photos/plain_bg.png");
    ui->label_plain_bg->setPixmap(plain_background);

    QPixmap logo("D:/level 2 projects/m7fazty/m7fazty/photos/logo.png");
    ui->logo_label->setPixmap(logo);

    QPixmap person_logo("D:/level 2 projects/m7fazty/m7fazty/photos/person logo.png");
    ui->personlogo_label->setPixmap(person_logo);

    QPixmap back("D:/level 2 projects/m7fazty/m7fazty/photos/white back button.png");
    ui->back_label->setPixmap(back);

   // NadminNWidget=new NadminN();                              //
    //MainWindow::stackedWidget->addWidget(NadminNWidget);     //

    admin_edits_widget=new admin_edits();
    MainWindow::stackedWidget->addWidget(admin_edits_widget);
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
    MainWindow::stackedWidget->setCurrentWidget(admin_edits_widget);
   /* user_widget=new user();
    MainWindow::stackedWidget->addWidget(user_widget);
    MainWindow::stackedWidget->setCurrentWidget(user_widget);*/
}

