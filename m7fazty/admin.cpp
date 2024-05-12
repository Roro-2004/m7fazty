#include "admin.h"
#include "ui_admin.h"
#include "mainwindow.h"
#include "add_edit_delete.h"
#include"suspend_activate.h"
#include"adjust_balance_dialog.h"
#include"view_trans_dialog.h"
#include"view_users_dialog.h"
#include"files.h"

admin::admin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::admin)
{
    ui->setupUi(this);
    hideAllElements();
}



void admin::hideAllElements()
{
    ui->menu_Button->show();
    ui->menu_label->show();
    ui->user_listView->hide();
    ui->line->hide();
    ui->line_2->hide();
    ui->line_3->hide();
    ui->line_4->hide();
    ui->line_5->hide();
    ui->add_edit_delete_Button->hide();
    ui->logout_Button->hide();
    ui->adjustBalance_Button->hide();
    ui->suspend_activate_Button->hide();
    ui->viewUsers_Button->hide();
    ui->viewTransictions_Button->hide();
}


void admin::on_menu_Button_clicked()
{
    ui->menu_Button->hide();
    ui->menu_label->hide();
    ui->user_listView->show();
    ui->line->show();
    ui->line_2->show();
    ui->line_3->show();
    ui->line_4->show();
    ui->line_5->show();
    ui->add_edit_delete_Button->show();
    ui->logout_Button->show();
    ui->suspend_activate_Button->show();
    ui->adjustBalance_Button->show();
    ui->viewTransictions_Button->show();
    ui->viewUsers_Button->show();
}


void admin::on_close_list_Button_clicked()
{
    ui->menu_Button->show();
    ui->menu_label->show();
    ui->user_listView->hide();
    ui->line->hide();
    ui->line_2->hide();
    ui->line_3->hide();
    ui->line_4->hide();
    ui->line_5->hide();
    ui->add_edit_delete_Button->hide();
    ui->logout_Button->hide();
    ui->adjustBalance_Button->hide();
    ui->suspend_activate_Button->hide();
    ui->viewUsers_Button->hide();
    ui->viewTransictions_Button->hide();
}


void admin::on_add_edit_delete_Button_clicked()
{
    add_edit_delete d;
    d.setWindowTitle("Add / Edit / Delete");
    d.exec();
}


void admin::on_viewUsers_Button_clicked()
{
    view_users_dialog d;
    d.setWindowTitle("List of Users");
    d.exec();
}


void admin::on_suspend_activate_Button_clicked()
{
    suspend_activate d;
    d.setWindowTitle("Suspend / Activate");
    d.exec();
}


void admin::on_viewTransictions_Button_clicked()
{
    view_trans_dialog d;
    d.setWindowTitle("List of Trabsictions");
    d.exec();
}


void admin::on_adjustBalance_Button_clicked()
{
    adjust_balance_dialog d;
    d.setWindowTitle("Adjust Balance");
    d.exec();
}


void admin::on_logout_Button_clicked()
{
    MainWindow::stackedWidget->setCurrentIndex(0);
}


admin::~admin()
{
    delete ui;
}
