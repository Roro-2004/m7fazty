#include <QApplication>
#include "mainwindow.h"
#include"iostream"
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Ma7fazty");
    QApplication::setWindowIcon(QIcon("C:/Users/Esc/Documents/GitHub/m7fazty/m7fazty/photos/icon.png"));

    w.show();
    return a.exec();
}
