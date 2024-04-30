#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    QPixmap plain_background("D:/4th semster projets/m7fazty/m7fazty/photos/plain_bg.png");
    ui->label_plain_bg->setPixmap(plain_background);

    QPixmap logo("D:/4th semster projets/m7fazty/m7fazty/photos/logo.png");
    ui->logo_label->setPixmap(logo);

    QPixmap person_logo("D:/4th semster projets/m7fazty/m7fazty/photos/person logo.png");
    ui->personlogo_label->setPixmap(person_logo);

    QPixmap back ("D:/4th semster projets/m7fazty/m7fazty/photos/white back button.png");
    ui->back_label->setPixmap(back);

    // Create the user widget and add it to the stacked widget
    userWidget = new user();
    MainWindow::stackedWidget->addWidget(userWidget);

   // Create the admin widget and add it to the stacked widget
    adminWidget=new admin();
    MainWindow::stackedWidget->addWidget(adminWidget);


}

Login::~Login()
{
    delete ui;
}

void Login::on_back_button_clicked()
{
    MainWindow::stackedWidget->setCurrentIndex(0);
}





void Login::on_Login_2_clicked()     /////////////////////
{
    if(ui->userName_textBox->text()=="a" && ui->password_textBox->text()=="a")
    {
        MainWindow::stackedWidget->setCurrentWidget(adminWidget);
    }
}

