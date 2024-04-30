#include "sign_up.h"
#include "ui_sign_up.h"

sign_up::sign_up(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::sign_up)
{
    ui->setupUi(this);

    QPixmap background("D:/Projects/2nd Year/DS/m7fazty/m7fazty/photos/bg.png");
    ui->label_bg->setPixmap(background);

}

sign_up::~sign_up()
{
    delete ui;
}
