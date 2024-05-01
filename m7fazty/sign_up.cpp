#include "sign_up.h"
#include "ui_sign_up.h"
#include "mainwindow.h"

sign_up::sign_up(QWidget *parent): QWidget(parent), ui(new Ui::sign_up)
{
    ui->setupUi(this);
}

sign_up::~sign_up()
{
    delete ui;
}

void sign_up::on_back_button_clicked()
{
    MainWindow::stackedWidget->setCurrentIndex(0);

}


void sign_up::on_sign_up2_button_clicked()
{
    MainWindow::stackedWidget->setCurrentIndex(1);
}

