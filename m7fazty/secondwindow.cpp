#include "secondwindow.h"
#include "ui_secondwindow.h"
#include"editprofile_dialog.h"
#include"user_c.h"
#include"sign_up.h"
#include"mainwindow.h"
#include<QMessageBox>
#include<QString>
std::string secondwindow::newpassword;

secondwindow::secondwindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::secondwindow)
{

    ui->setupUi(this);
    ui->lineEdit_2->hide();
    ui->pushButton_2->hide();
}

secondwindow::~secondwindow()
{
    delete ui;
}

/*void secondwindow::on_buttonBox_accepted()
{
     QString DialogPassword =ui->lineEdit_2->text();
    editProfile_dialog edit_page;
     edit_page .setModal(true);
    edit_page.exec();
}*/


void secondwindow::on_pushButton_clicked()
{


    if(ui->lineEdit->text().toStdString()==Login::current_user.user_acc.password ){

        ui->lineEdit->hide();

        ui->lineEdit_2->show();
        ui->pushButton_2->show();
        ui->pushButton->hide();
    }
    else {
        QMessageBox :: warning (this,"WARNING","INCORRECT PASSWORD TRY AGAIN");
    }
}


void secondwindow::on_pushButton_2_clicked()
{
     bool check = true;

     newpassword=ui->lineEdit_2->text().toStdString();
     if (!sign_up::isStrongPassword(newpassword)) {
        QMessageBox::warning(this, "Password", "Password is not strong enough. Please use at least 8 characters including uppercase, lowercase, digits, and special characters.");
        check = false;
    }
    if (check){
        QMessageBox::information(this, "edit password"," Editing successfully");
        /*editprofile_widget = new editProfile_dialog();
        MainWindow::stackedWidget->addWidget(editprofile_widget);
        MainWindow::stackedWidget->setCurrentWidget(editprofile_widget);*/
        this->hide();


    }

}

