#include "sendmoney_dialog.h"
#include "ui_sendmoney_dialog.h"

sendMoney_dialog::sendMoney_dialog(QWidget *parent): QDialog(parent), ui(new Ui::sendMoney_dialog)
{
    ui->setupUi(this);


    QPixmap dialog_bg("D:/Projects/2nd Year/DS/m7fazty/m7fazty/photos/dialog_bg.png");
    ui->label_bg->setPixmap(dialog_bg);

}


void sendMoney_dialog::on_request_Button_clicked()
{

}


sendMoney_dialog::~sendMoney_dialog()
{
    delete ui;
}
