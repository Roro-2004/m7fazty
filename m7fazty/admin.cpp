#include "admin.h"
#include "ui_admin.h"
#include"requestmoney_dialog.h"
admin::admin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::admin)

admin::admin(QWidget *parent): QWidget(parent), ui(new Ui::admin)
{
    ui->setupUi(this);
}

admin::~admin()
{
    delete ui;
}
