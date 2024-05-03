#include "add_edit_delete.h"
#include "ui_add_edit_delete.h"
#include<string>
#include<QString>
#include"admin_c.h"
#include<QMessageBox>
#include"sign_up.h"
#include"user_c.h"
using namespace std;


add_edit_delete::add_edit_delete(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::add_edit_delete)
{
    ui->setupUi(this);
}

add_edit_delete::~add_edit_delete()
{
    delete ui;
}


//--------------------------------------EDIT-------------------------------------------
void add_edit_delete::on_viewCurrentAccData_pushButton_clicked()
{
    if(sign_up::users_read[ui->viewCurrentAccData_lineEdit->text().toStdString()] != NULL)
    {
    user_c *u = sign_up::users_read[ui->viewCurrentAccData_lineEdit->text().toStdString()];
    ui->viewAndEditusername_lineEdit->setText(QString::fromStdString(u->user_acc.username));
    ui->viewAndEditPassword_lineEdit->setText(QString::fromStdString(u->user_acc.password));
    ui->viewAndEditAddress_lineEdit->setText(QString::fromStdString(u->user_acc.address));
    ui->viewAndEditEmail_lineEdit->setText(QString::fromStdString(u->user_acc.email));
    ui->viewAndEditAge_lineEdit->setText(QString::fromStdString(to_string(u->user_acc.age)));
 }
    else
        QMessageBox::warning(this,"view info","user not found!");
}

void add_edit_delete::on_editAcc_pushButton_clicked()
{

    user_c *edited_user= new user_c();

    edited_user->user_acc.username=ui->viewAndEditusername_lineEdit->text().toStdString();
    edited_user->user_acc.password=ui->viewAndEditPassword_lineEdit->text().toStdString();
    edited_user->user_acc.address=ui->viewAndEditAddress_lineEdit->text().toStdString();
    edited_user->user_acc.email=ui->viewAndEditEmail_lineEdit->text().toStdString();
    edited_user->user_acc.age = ui->viewAndEditAge_lineEdit->text().toInt();

    admin_c currentAdmin;
    string previousUsername=ui->viewCurrentAccData_lineEdit->text().toStdString();


    if(edited_user->user_acc.username=="\0" || edited_user->user_acc.password=="\0"|| edited_user->user_acc.address=="\0"||edited_user->user_acc.email=="\0"||edited_user->user_acc.age ==       0)
    {
        QMessageBox::warning(this,"Edit Account","Empty fields not allowed!");
    }
    else
    {
        bool is_exist= currentAdmin.edit_acc(previousUsername,edited_user);
        if(is_exist)
        {
            QMessageBox::warning(this,"Edit Account","That Username is allready exist, Enter another one");
        }
        else
        {
            QMessageBox::information(this,"Edit Account","Done Successfuly");
        }
    }
}
//-------------------------------------------------------------------------------------


//--------------------------------------ADD--------------------------------------------
void add_edit_delete::on_add_acc_pushButton_clicked()
{

    user_c *added_user= new user_c();

    added_user->user_acc.username=ui->username_add_lineEdit ->text().toStdString();
    added_user->user_acc.password=ui->password_add_lineEdit ->text().toStdString();
    added_user->user_acc.address=ui->address_add_lineEdit ->text().toStdString();
    added_user->user_acc.email=ui->email_add_lineEdit ->text().toStdString();
    added_user->user_acc.age = ui->age_add_lineEdit ->text().toInt();


    if(added_user->user_acc.username=="\0" || added_user->user_acc.password=="\0"|| added_user->user_acc.address=="\0"||added_user->user_acc.email=="\0"||added_user->user_acc.age ==0)
    {
        QMessageBox::warning(this,"Add Account","Empty fields not allowed!");
    }
    else if(!sign_up::isStrongPassword(added_user->user_acc.password))
    {
        QMessageBox::warning(this, "Add Account", "Password is not strong enough. Please use at least 8 characters including uppercase, lowercase, digits, and special characters.");
    }
    else
    {

    admin_c current_admin;
    bool is_exist= current_admin.add_acc(added_user);
    if(is_exist)
    {
        QMessageBox::warning(this,"Add Account","That Username is allready exist, Enter another one");
    }
    else
    {
        QMessageBox::information(this,"Add Account","Done Successfuly");
    }
    }
}
//-------------------------------------------------------------------------------------


//--------------------------------------DELETE-----------------------------------------
void add_edit_delete::on_deleteacc_pushButton_clicked()
{
    admin_c current_admin;
    string username=ui->username_deleteacc_lineEdit->text().toStdString();
    bool flag=current_admin.delete_acc(username);
    if(flag)
    {
        QMessageBox::information(this,"Delete Account","Done Successfuly");
    }
    else
    {
        QMessageBox::information(this,"Delete Account","That Account is not exist allready, Enter another one");
    }
}
//-------------------------------------------------------------------------------------


