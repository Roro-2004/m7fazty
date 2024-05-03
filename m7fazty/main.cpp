#include <QApplication>
#include "mainwindow.h"
#include "Login.h"
#include"account.h"
#include"user_c.h"
#include"context.h"
#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Ma7fazty");
    QApplication::setWindowIcon(QIcon("D:/Projects/2nd Year/DS/m7fazty//m7fazty/photos/icon.png"));

    w.show();
    ////////////////
    account a1;
    a1.username = "Nrmeen";
    account a2;
    a2.username = "Ahmed";
    account a3;
    a3.username = "Aya";
    account a4;
    a4.username = "Nero";
    user_c user1(2000, a1);
    context::users.push_back(user1);
    user_c user2(3000, a2);
    context::users.push_back(user2);
    user_c user3(3050, a3);
    context::users.push_back(user3);
    user_c user4(2080, a4);
    context::users.push_back(user4);
    a1.status=false;
    context::accounts.push_back(a1);
    context::accounts.push_back(a2);
    context::accounts.push_back(a3);
    context::accounts.push_back(a4);
    //////////////

    return a.exec();
}
