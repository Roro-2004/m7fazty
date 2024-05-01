#include "view_trans_dialog.h"
#include "ui_view_trans_dialog.h"

view_trans_dialog::view_trans_dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::view_trans_dialog)
{
    ui->setupUi(this);
}

view_trans_dialog::~view_trans_dialog()
{
    delete ui;
}
