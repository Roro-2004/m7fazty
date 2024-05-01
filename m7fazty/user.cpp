#include "user.h"
#include "ui_user.h"
#include <QWidget>

user::user(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::user)
{
    ui->setupUi(this);
}

user::~user()
{
    delete ui;
}
