#include "user.h"
#include "ui_user.h"

user::user(QWidget *parent): QWidget(parent), ui(new Ui::user)
{
    ui->setupUi(this);
    hideAllElements();
}


user::~user()
{
    delete ui;
}


void user::hideAllElements()
{
    ui->menu_Button->show();
    ui->menu_label->show();
    ui->user_listView->hide();
    ui->line->hide();
    ui->line_2->hide();
    ui->line_3->hide();
    ui->line_4->hide();
    ui->line_5->hide();
    ui->editProfile_Button->hide();
    ui->logout_Button->hide();
    ui->requestMoney_Button->hide();
    ui->sendMoney_Button->hide();
    ui->viewBalance_Button->hide();
    ui->viewHistory_Button->hide();
}


void user::on_menu_Button_clicked()
{
    ui->menu_Button->hide();
    ui->menu_label->hide();
    ui->user_listView->show();
    ui->line->show();
    ui->line_2->show();
    ui->line_3->show();
    ui->line_4->show();
    ui->line_5->show();
    ui->editProfile_Button->show();
    ui->logout_Button->show();
    ui->requestMoney_Button->show();
    ui->sendMoney_Button->show();
    ui->viewBalance_Button->show();
    ui->viewHistory_Button->show();
}


void user::on_close_list_Button_clicked()
{
    ui->menu_Button->show();
    ui->menu_label->show();
    ui->user_listView->hide();
    ui->line->hide();
    ui->line_2->hide();
    ui->line_3->hide();
    ui->line_4->hide();
    ui->line_5->hide();
    ui->editProfile_Button->hide();
    ui->logout_Button->hide();
    ui->requestMoney_Button->hide();
    ui->sendMoney_Button->hide();
    ui->viewBalance_Button->hide();
    ui->viewHistory_Button->hide();
}


void user::on_viewBalance_Button_clicked()
{
    viewBalance_dialog d;
    d.setWindowTitle("Balance");
    d.exec();
}


void user::on_sendMoney_Button_clicked()
{
    sendMoney_dialog d;
    d.setWindowTitle("Send Money");
    d.exec();
}


void user::on_requestMoney_Button_clicked()
{
    requestMoney_dialog d;
    d.setWindowTitle("Request Money");
    d.exec();
}


void user::on_viewHistory_Button_clicked()
{
    viewTransHistory_dialog d;
    d.setWindowTitle("Transiction History");
    d.exec();
}


void user::on_editProfile_Button_clicked()
{
    editProfile_dialog d;
    d.setWindowTitle("Edit Profile");
    d.exec();
}


void user::on_logout_Button_clicked()
{
    MainWindow::stackedWidget->setCurrentIndex(0);
    files::write_in_file("D:/m7fazty/m7fazty/files/Transiction.csv");


}


