#include "viewbalance_dialog.h"
#include "ui_viewbalance_dialog.h"

viewBalance_dialog::viewBalance_dialog(QWidget *parent) : QDialog(parent) , ui(new Ui::viewBalance_dialog)
{
    ui->setupUi(this);
}

viewBalance_dialog::~viewBalance_dialog()
{
    delete ui;
}
