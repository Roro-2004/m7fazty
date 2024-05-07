#include "viewbalance_dialog.h"
#include "ui_viewbalance_dialog.h"
#include<string>
#include <QString>
#include"login.h"
using namespace std;

viewBalance_dialog::viewBalance_dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::viewBalance_dialog)
{
    ui->setupUi(this);
    ui->viewCurrentBalance_label->hide();
}

viewBalance_dialog::~viewBalance_dialog()
{
    delete ui;
}


void viewBalance_dialog::on_viewCurrentBalance_pushButton_clicked()
{
    ui->viewCurrentBalance_label->setText(QString::number(Login::current_user.balance));
    ui->viewCurrentBalance_label->show();
}




