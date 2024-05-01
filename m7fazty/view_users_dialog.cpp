#include "view_users_dialog.h"
#include "ui_view_users_dialog.h"

view_users_dialog::view_users_dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::view_users_dialog)
{
    ui->setupUi(this);
}

view_users_dialog::~view_users_dialog()
{
    delete ui;
}
