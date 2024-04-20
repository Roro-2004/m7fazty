#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    QPixmap plain_background("D:/Projects/2nd Year/DS/m7fazty/m7fazty/photos/plain_bg.png");
    ui->label_plain_bg->setPixmap(plain_background);

    QPixmap logo("D:/Projects/2nd Year/DS/m7fazty/m7fazty/photos/logo.png");
    ui->logo_label->setPixmap(logo);

    QPixmap person_logo("D:/Projects/2nd Year/DS/m7fazty/m7fazty/photos/person logo.png");
    ui->personlogo_label->setPixmap(person_logo);

    QPixmap back ("D:/Projects/2nd Year/DS/m7fazty/m7fazty/photos/white back button.png");
    ui->back_label->setPixmap(back);

}

Login::~Login()
{
    delete ui;
}

void Login::on_back_button_clicked()
{
    emit switchToMain();
}


