#include "add_edit_delete.h"
#include "ui_add_edit_delete.h"
#include<string>
#include<QString>
#include"admin_c.h"
#include<QMessageBox>
#include"sign_up.h"
#include"user_c.h"
using namespace std;

admin_c currentAdmin;


add_edit_delete::add_edit_delete(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::add_edit_delete)
{
    ui->setupUi(this);

    ui->address_add_lineEdit->hide();
    ui->add_acc_pushButton->hide();
    ui->age_add_lineEdit->hide();
    ui->age_label->hide();
    ui->age_label_2->hide();
    ui->city_label->hide();
    ui->city_label_2->hide();
    ui->deleteacc_pushButton->hide();
    ui->editAcc_pushButton->hide();
    ui->email_add_lineEdit->hide();
    ui->email_label->hide();
    ui->email_label_2->hide();
    ui->password_add_lineEdit->hide();
    ui->password_label->hide();
    ui->password_label_2->hide();
    ui->username_add_lineEdit->hide();
    ui->username_deleteacc_lineEdit->hide();
    ui->username_label->hide();
    ui->username_label_2->hide();
    ui->username_label_3->hide();
    ui->viewAndEditAddress_lineEdit->hide();
    ui->viewAndEditAge_lineEdit->hide();
    ui->viewAndEditEmail_lineEdit->hide();
    ui->viewAndEditPassword_lineEdit->hide();
    ui->viewAndEditusername_lineEdit->hide();
    ui->viewCurrentAccData_CB->hide();
}

add_edit_delete::~add_edit_delete()
{
    delete ui;
}


//--------------------------------------EDIT-------------------------------------------
void add_edit_delete::on_editAcc_pushButton_clicked()
{
    bool check = true;

    user_c *edited_user= new user_c();
    string previousUsername=ui->viewCurrentAccData_CB->currentText().toStdString();

    string pass_before_hashing=ui->viewAndEditPassword_lineEdit->text().toStdString();
    edited_user->user_acc.username=ui->viewAndEditusername_lineEdit->text().toStdString();
    edited_user->user_acc.password = account::hashPassword(ui->viewAndEditPassword_lineEdit->text());
    edited_user->user_acc.address=ui->viewAndEditAddress_lineEdit->text().toStdString();
    edited_user->user_acc.email=ui->viewAndEditEmail_lineEdit->text().toStdString();
    edited_user->user_acc.age = ui->viewAndEditAge_lineEdit->text().toInt();



    if(edited_user->user_acc.username=="\0" || edited_user->user_acc.password=="\0"|| edited_user->user_acc.address=="\0"||edited_user->user_acc.email=="\0"||edited_user->user_acc.age ==0)
    {
        QMessageBox::warning(this,"Edit Account","Empty fields Not Allowed");
    }
    else if (edited_user->user_acc.email.empty() || edited_user->user_acc.email.find("@gmail.com") ==string::npos) {
        QMessageBox::warning(this, "Email", "Invalid Email Address, Should have this format -----@gmail.com");
    }
    else if(edited_user->user_acc.age < 16){
        QMessageBox::warning(this, "Age", "Invalid Age, You must be older than 16");
    }
    else if (!sign_up::isStrongPassword(pass_before_hashing)) {
        QMessageBox::warning(this, "Password", "Password is not strong enough. Please use at least 8 characters including uppercase, lowercase, digits, and special characters.");
    }
    else
    {
        bool is_exist= currentAdmin.edit_acc(previousUsername,edited_user);
        if(is_exist)
        {
            QMessageBox::warning(this,"Edit Account","Username already exists");
        }
        else
        {
            QMessageBox::information(this,"Edit Account","Edited Successfuly");
        }
    }
}
//-------------------------------------------------------------------------------------


//--------------------------------------ADD--------------------------------------------
void add_edit_delete::on_add_acc_pushButton_clicked()
{

    user_c *added_user= new user_c();
    string pass_before_hashing=ui->password_add_lineEdit ->text().toStdString();

    added_user->user_acc.username=ui->username_add_lineEdit ->text().toStdString();
    added_user->user_acc.password=account::hashPassword(ui->password_add_lineEdit ->text());
    added_user->user_acc.address=ui->address_add_lineEdit ->text().toStdString();
    added_user->user_acc.email=ui->email_add_lineEdit ->text().toStdString();
    added_user->user_acc.age = ui->age_add_lineEdit ->text().toInt();


    if(added_user->user_acc.username=="\0" || added_user->user_acc.password=="\0"|| added_user->user_acc.address=="\0"||added_user->user_acc.email=="\0"||added_user->user_acc.age ==0)
    {
        QMessageBox::warning(this,"Add Account","Empty fields Not Allowed");
    }
    else if(!sign_up::isStrongPassword(pass_before_hashing))
    {
        QMessageBox::warning(this, "Add Account", "Password is not strong enough. Please use at least 8 characters including uppercase, lowercase, digits, and special characters.");
    }
    else if (added_user->user_acc.email.empty() || added_user->user_acc.email.find("@gmail.com") ==string::npos) {
        QMessageBox::warning(this, "Email", "Invalid Email Address, Should have this format -----@gmail.com");
    }
    else if(added_user->user_acc.age < 16){
        QMessageBox::warning(this, "Age", "Invalid Age, You must be older than 16");
    }
    else
    {

    bool is_exist= currentAdmin.add_acc(added_user);
    if(is_exist)
    {
        QMessageBox::warning(this,"Add Account","Username already exists");
    }
    else
    {
        QMessageBox::information(this,"Add Account","Added Successfuly");
    }
    }
}
//-------------------------------------------------------------------------------------


//--------------------------------------DELETE-----------------------------------------
void add_edit_delete::on_deleteacc_pushButton_clicked()
{
    string username=ui->username_deleteacc_lineEdit->text().toStdString();
    bool flag=currentAdmin.delete_acc(username);
    if(flag)
    {
        QMessageBox::information(this,"Delete Account","Deleted Successfuly");
    }
    else
    {
        QMessageBox::information(this,"Delete Account","User Not Found");
    }
    ui->username_deleteacc_lineEdit->clear();
}
//-------------------------------------------------------------------------------------

void add_edit_delete::on_add_button_clicked()
{
    ui->add_button->hide();
    ui->delete_button->show();
    ui->edit_button->show();

    ui->username_label_2->show();
    ui->username_add_lineEdit->show();
    ui->password_label_2->show();
    ui->password_add_lineEdit->show();
    ui->email_label_2->show();
    ui->email_add_lineEdit->show();
    ui->city_label_2->show();
    ui->age_label_2->show();
    ui->address_add_lineEdit->show();
    ui->add_acc_pushButton->show();
    ui->age_add_lineEdit->show();

    ui->viewAndEditAddress_lineEdit->hide();
    ui->viewAndEditAge_lineEdit->hide();
    ui->viewAndEditEmail_lineEdit->hide();
    ui->viewAndEditPassword_lineEdit->hide();
    ui->viewAndEditusername_lineEdit->hide();
    ui->viewCurrentAccData_CB->hide();
    ui->username_label->hide();
    ui->password_label->hide();
    ui->email_label->hide();
    ui->editAcc_pushButton->hide();
    ui->city_label->hide();
    ui->age_label->hide();

    ui->deleteacc_pushButton->hide();
    ui->username_deleteacc_lineEdit->hide();
    ui->username_label_3->hide();
}


void add_edit_delete::on_edit_button_clicked()
{
    populateComboBox();
    ui->edit_button->hide();
    ui->delete_button->show();
    ui->add_button->show();

    ui->viewAndEditAddress_lineEdit->show();
    ui->viewAndEditAge_lineEdit->show();
    ui->viewAndEditEmail_lineEdit->show();
    ui->viewAndEditPassword_lineEdit->show();
    ui->viewAndEditusername_lineEdit->show();
    ui->viewCurrentAccData_CB->show();
    ui->username_label->show();
    ui->password_label->show();
    ui->email_label->show();
    ui->editAcc_pushButton->show();
    ui->city_label->show();
    ui->age_label->show();

    ui->username_label_2->hide();
    ui->username_add_lineEdit->hide();
    ui->password_label_2->hide();
    ui->password_add_lineEdit->hide();
    ui->email_label_2->hide();
    ui->email_add_lineEdit->hide();
    ui->city_label_2->hide();
    ui->age_label_2->hide();
    ui->address_add_lineEdit->hide();
    ui->add_acc_pushButton->hide();
    ui->age_add_lineEdit->hide();

    ui->deleteacc_pushButton->hide();
    ui->username_deleteacc_lineEdit->hide();
    ui->username_label_3->hide();
}


void add_edit_delete::on_delete_button_clicked()
{
    ui->delete_button->hide();
    ui->edit_button->show();
    ui->add_button->show();

    ui->deleteacc_pushButton->show();
    ui->username_deleteacc_lineEdit->show();
    ui->username_label_3->show();

    ui->username_label_2->hide();
    ui->username_add_lineEdit->hide();
    ui->password_label_2->hide();
    ui->password_add_lineEdit->hide();
    ui->email_label_2->hide();
    ui->email_add_lineEdit->hide();
    ui->city_label_2->hide();
    ui->age_label_2->hide();
    ui->address_add_lineEdit->hide();
    ui->add_acc_pushButton->hide();
    ui->age_add_lineEdit->hide();

    ui->viewAndEditAddress_lineEdit->hide();
    ui->viewAndEditAge_lineEdit->hide();
    ui->viewAndEditEmail_lineEdit->hide();
    ui->viewAndEditPassword_lineEdit->hide();
    ui->viewAndEditusername_lineEdit->hide();
    ui->viewCurrentAccData_CB->hide();
    ui->username_label->hide();
    ui->password_label->hide();
    ui->email_label->hide();
    ui->editAcc_pushButton->hide();
    ui->city_label->hide();
    ui->age_label->hide();
}


void add_edit_delete::populateComboBox() {
    if(sign_up::users_read.empty())return;
    unordered_map<string,user_c*>::iterator it;
    for(it = sign_up::users_read.begin();it!=sign_up::users_read.end();it++){
        ui->viewCurrentAccData_CB->addItem(QString::fromStdString(it->first));}
}


void add_edit_delete::on_viewCurrentAccData_CB_currentTextChanged(const QString &user)
{
    if(sign_up::users_read[user.toStdString()] != NULL)
    {
        user_c *u = sign_up::users_read[user.toStdString()];
        ui->viewAndEditusername_lineEdit->setText(QString::fromStdString(u->user_acc.username));
        ui->viewAndEditAddress_lineEdit->setText(QString::fromStdString(u->user_acc.address));
        ui->viewAndEditEmail_lineEdit->setText(QString::fromStdString(u->user_acc.email));
        ui->viewAndEditAge_lineEdit->setText(QString::fromStdString(to_string(u->user_acc.age)));
    }
}








