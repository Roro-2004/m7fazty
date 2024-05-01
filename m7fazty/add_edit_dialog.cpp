#include "add_edit_dialog.h"
#include "ui_add_edit_dialog.h"

add_edit_dialog::add_edit_dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::add_edit_dialog)
{
    ui->setupUi(this);
}

add_edit_dialog::~add_edit_dialog()
{
    delete ui;
}
