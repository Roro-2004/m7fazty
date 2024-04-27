#ifndef REQUESTMONEY_DIALOG_H
#define REQUESTMONEY_DIALOG_H

#include <QDialog>

namespace Ui {
class requestMoney_dialog;
}

class requestMoney_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit requestMoney_dialog(QWidget *parent = nullptr);
    ~requestMoney_dialog();

private slots:
    void on_send_Button_clicked();

private:
    Ui::requestMoney_dialog *ui;
};

#endif // REQUESTMONEY_DIALOG_H
