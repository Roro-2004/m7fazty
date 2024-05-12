#include "adjust_balance_dialog.h"
#include "ui_adjust_balance_dialog.h"
#include"admin_c.h"
#include<QMessageBox>
#include"sign_up.h"

adjust_balance_dialog::adjust_balance_dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::adjust_balance_dialog)
{
    ui->setupUi(this);
}



void adjust_balance_dialog::on_editBalance_pushButton_clicked()
{
    admin_c current_admin;
    string username=ui->username_editBalance_lineEdit->text().toStdString();
    float new_balance=ui->newBalance_editBalance_lineEdit->text().toFloat();
    if(new_balance <0 ){
        QMessageBox::warning(this,"Editing Balance","Invalid Balance");
    }
    else{
        bool done=current_admin.edit_balance(username,new_balance);

    if(done)
    {
        QMessageBox::information(this,"Editing Balance","Edited Successfuly");
        adjust_balance_dialog::close();
    }
    else
    {
        QMessageBox::warning(this,"Editing Balance","User Not Found");
    }
    }


    if(sign_up::users_read[username]->balance > sign_up::users_read[username]->dept)
    {
        sign_up::users_read[username]->balance -=sign_up::users_read[username]->dept;
        sign_up::users_read[username]->dept=0;
    }
}


adjust_balance_dialog::~adjust_balance_dialog()
{
    delete ui;
}
