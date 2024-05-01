#include "adjust_balance_dialog.h"
#include "ui_adjust_balance_dialog.h"

adjust_balance_dialog::adjust_balance_dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::adjust_balance_dialog)
{
    ui->setupUi(this);
}

adjust_balance_dialog::~adjust_balance_dialog()
{
    delete ui;
}
