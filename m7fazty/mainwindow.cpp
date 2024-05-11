#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include"login.h"
#include <fstream>
#include <filesystem>
#include <iostream>
#include"files.h"
#include"requestmoney_dialog.h"
#include "sendmoney_dialog.h"
#include <QCryptographicHash>
using namespace std;
namespace fs = std::filesystem;

QStackedWidget* MainWindow::stackedWidget = nullptr;


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    stackedWidget = new QStackedWidget(this);
    stackedWidget->addWidget(ui->centralwidget);
    setCentralWidget(stackedWidget);
    stackedWidget->show();

    loginWidget = new Login();
    stackedWidget->addWidget(loginWidget);

    files::read_from_file("D:/m7fazty/m7fazty/files/Transiction.csv");
    for (unordered_map<string, transiction*>::value_type & trans : requestMoney_dialog::trans_read) {
        transiction* t = trans.second;
        cout << trans.first << " " << t->receiver << " " << t->sender << " " << t->amount << " " << t->date << " " << t->time << " " << t->status << endl;
        requestMoney_dialog::usedIDs.insert( trans.first);
        sendMoney_dialog::usedIDs.insert( trans.first);
    }

    files::read_from_file("D:/m7fazty/m7fazty/files/User.csv");
    for (unordered_map<string, user_c*>::value_type & u : sign_up::users_read) {
        user_c* user = u.second;
        cout << u.first  << "," << user->user_acc.password << "," << user->user_acc.address << "," << user->user_acc.email << "," << user->user_acc.age << "," << user->balance << "," << user->user_acc.status << endl;
    }
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_login_clicked()
{
    stackedWidget->setCurrentWidget(loginWidget);
}


void MainWindow::on_sign_up_clicked()
{
    sign_up_widget = new sign_up(this);
    stackedWidget->addWidget(sign_up_widget);
    stackedWidget->setCurrentWidget(sign_up_widget);

}


void MainWindow::closeEvent(QCloseEvent *event)
{

    files::write_in_file("D:/m7fazty/m7fazty/files/User.csv");
    files::write_in_file("D:/m7fazty/m7fazty/files/Transiction.csv");

    QMainWindow::closeEvent(event);
}
