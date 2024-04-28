// main.cpp
#include <QApplication>
#include "mainwindow.h"
#include "Login.h"
#include"requestmoney_dialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QIcon icon("D:/Projects/2nd Year/DS/m7fazty/m7fazty/photos/icon.png");
    a.setWindowIcon(icon);

    w.setWindowTitle("Ma7fazty");

    w.show();
    return a.exec();
}
