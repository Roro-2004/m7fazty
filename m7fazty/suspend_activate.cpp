#include "suspend_activate.h"
#include "ui_suspend_activate.h"

suspend_activate::suspend_activate(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::suspend_activate)
{
    ui->setupUi(this);
}

suspend_activate::~suspend_activate()
{
    delete ui;
}
