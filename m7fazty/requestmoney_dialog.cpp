#include "requestmoney_dialog.h"
#include "ui_requestmoney_dialog.h"

requestMoney_dialog::requestMoney_dialog(QWidget *parent): QDialog(parent)  , ui(new Ui::requestMoney_dialog)
{
    ui->setupUi(this);

    QPixmap dialog_bg("D:/Projects/2nd Year/DS/m7fazty/m7fazty/photos/dialog_bg.png");
    ui->label_bg->setPixmap(dialog_bg);

}


void requestMoney_dialog::on_send_Button_clicked()
{

}


requestMoney_dialog::~requestMoney_dialog()
{
    delete ui;
}
