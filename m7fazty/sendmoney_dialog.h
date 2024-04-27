#ifndef SENDMONEY_DIALOG_H
#define SENDMONEY_DIALOG_H
#include <QDialog>
#include <unordered_map>
#include "transiction.h"
using namespace std;

namespace Ui {
class sendMoney_dialog;
}

class sendMoney_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit sendMoney_dialog(QWidget *parent = nullptr);
    ~sendMoney_dialog();

    transiction* t;

    string generateID();
    string getCurrentDate();
    string getCurrentTime();

private slots:
    void on_send_Button_clicked();

private:
    Ui::sendMoney_dialog *ui;
};

#endif // SENDMONEY_DIALOG_H
