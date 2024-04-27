

#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include"user.h"

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();


private slots:
    void on_back_button_clicked();


    void on_Login_2_clicked();

private:
    Ui::Login *ui;
    user *user_widget;
};

#endif // LOGIN_H
