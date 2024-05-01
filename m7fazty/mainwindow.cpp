#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <fstream>
#include <filesystem>
#include <iostream>
#include"files.h"
#include"requestmoney_dialog.h"
#include "sendmoney_dialog.h"
using namespace std;
namespace fs = std::filesystem;

QStackedWidget* MainWindow::stackedWidget = nullptr;



MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    stackedWidget = new QStackedWidget(this);
    // Add the main window UI created with Qt Designer to the stacked widget
    stackedWidget->addWidget(ui->centralwidget);

    // Set the central widget to the stacked widget
    setCentralWidget(stackedWidget);

    stackedWidget = new QStackedWidget(this);
    stackedWidget->addWidget(ui->centralwidget);
    setCentralWidget(stackedWidget);
    stackedWidget->show();

    loginWidget = new Login();
    stackedWidget->addWidget(loginWidget);

    files::read_from_file("D:/Projects/2nd Year/DS/m7fazty/m7fazty/files/Transiction.csv");
    for (const auto& pair : requestMoney_dialog::trans_read) {
        if (pair.second != nullptr) {
            transiction* t = pair.second;
            cout << pair.first << " " << t->receiver << " " << t->sender << " " << t->amount << " " << t->date << " " << t->time << " " << t->status << endl;
        }
        else {
            cout << "Error: Null pointer encountered in trans_data map." << endl;
        }
    }

}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_login_clicked()
{

    stackedWidget->setCurrentWidget(loginWidget);
    requestMoney_dialog::trans_data.clear();
}


void MainWindow::on_sign_up_clicked()
{
    signup_Widget = new sign_up();
    stackedWidget->addWidget(signup_Widget);
    stackedWidget->setCurrentWidget(signup_Widget);

}

