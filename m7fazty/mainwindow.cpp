#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <fstream>
#include <filesystem>
#include <iostream>
#include"requestmoney_dialog.h"
using namespace std;
namespace fs = std::filesystem;

QStackedWidget* MainWindow::stackedWidget = nullptr;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    stackedWidget = new QStackedWidget(this);
    // Add the main window UI created with Qt Designer to the stacked widget
    stackedWidget->addWidget(ui->centralwidget);

    // Set the central widget to the stacked widget
    setCentralWidget(stackedWidget);

    // Set background image
    QPixmap background("D:/Projects/2nd Year/DS/m7fazty/m7fazty/photos/bg.png");
    ui->label_bg->setPixmap(background);

    stackedWidget->show();
}




void MainWindow::on_login_clicked()
{
    loginWidget = new Login();
    stackedWidget->addWidget(loginWidget);
    stackedWidget->setCurrentWidget(loginWidget);
}


void MainWindow::on_sign_up_clicked()
{
    signup_Widget = new sign_up();
    stackedWidget->addWidget(signup_Widget);
    stackedWidget->setCurrentWidget(signup_Widget);

}

MainWindow::~MainWindow()
{
    delete ui;
}
