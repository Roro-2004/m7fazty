#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap background("D:/Projects/2nd Year/DS/m7fazty/m7fazty/photos/bg.png");
    ui->label_bg->setPixmap(background);

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_login_clicked()
{

}


void MainWindow::on_sign_up_clicked()
{

}

