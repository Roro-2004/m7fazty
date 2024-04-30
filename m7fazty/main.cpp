#include <QApplication>
#include "mainwindow.h"
#include "Login.h"
#include"requestmoney_dialog.h"
#include"files.h"
#include"iostream"
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QIcon icon("D:/Projects/2nd Year/DS/m7fazty/m7fazty/photos/icon.png");
    a.setWindowIcon(icon);

   /* files::read_from_file("D:/Projects/2nd Year/DS/m7fazty/m7fazty/files/Transiction.csv");

    for (unordered_map<string, transiction*>::value_type & trans : requestMoney_dialog::trans_read) {
        transiction* t = trans.second;
        cout << trans.first << " " << t->receiver << " " << t->sender << " " << t->amount << " " << t->date << " " << t->time << " " << t->status << endl;
    }
    cout << requestMoney_dialog::trans_read.size() << endl;*/

    w.setWindowTitle("Ma7fazty");

    w.show();
    return a.exec();
}
