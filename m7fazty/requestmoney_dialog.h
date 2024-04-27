#ifndef REQUESTMONEY_DIALOG_H
#define REQUESTMONEY_DIALOG_H
#include <QDialog>
#include <unordered_map>
#include "transiction.h"
using namespace std;



namespace Ui {
class requestMoney_dialog;
}

class requestMoney_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit requestMoney_dialog(QWidget *parent = nullptr);
    ~requestMoney_dialog();
    static unordered_map <string,transiction*> trans_data;
    static unordered_map <string,transiction*> ::iterator it;
    transiction* t;

    string generateID();
    string getCurrentDate();
    string getCurrentTime();

private slots:    
    void on_request_Button_clicked();

private:
    Ui::requestMoney_dialog *ui;
};

#endif // REQUESTMONEY_DIALOG_H
