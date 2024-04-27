#ifndef SENDMONEY_DIALOG_H
#define SENDMONEY_DIALOG_H

#include <QDialog>

namespace Ui {
class sendMoney_dialog;
}

class sendMoney_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit sendMoney_dialog(QWidget *parent = nullptr);
    ~sendMoney_dialog();

private slots:
    void on_request_Button_clicked();

private:
    Ui::sendMoney_dialog *ui;
};

#endif // SENDMONEY_DIALOG_H
