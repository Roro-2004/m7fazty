#include "delete_suspend_dialog.h"
#include "ui_delete_suspend_dialog.h"

delete_suspend_dialog::delete_suspend_dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::delete_suspend_dialog)
{
    ui->setupUi(this);
}

delete_suspend_dialog::~delete_suspend_dialog()
{
    delete ui;
}
