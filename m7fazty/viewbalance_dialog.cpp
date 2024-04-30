#include "viewbalance_dialog.h"
#include "ui_viewbalance_dialog.h"
#include"context.h"
viewBalance_dialog::viewBalance_dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::viewBalance_dialog)
{
    ui->setupUi(this);


    QPixmap dialog_bg("D:/m7fazty/m7fazty/photos/dialog_bg.png");
    ui->label_bg->setPixmap(dialog_bg);
}

viewBalance_dialog::~viewBalance_dialog()
{
    delete ui;
}


void viewBalance_dialog::on_viewCurrentBalance_pushButton_clicked()
{
    QString current_balance = context::user.View_current_balance();
    ui->viewCurrentBalance_label->setText(current_balance);
}

