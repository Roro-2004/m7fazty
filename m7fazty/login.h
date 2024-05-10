#ifndef LOGIN_H
#define LOGIN_H
#include <QWidget>
#include <vector>
#include "user.h"
#include<string>
#include"user_c.h"
#include"admin.h"
using namespace std;

#include <QWidget>           //

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();
    user_c static current_user;

private slots:
    void on_back_button_clicked();

    void on_Login_2_clicked();

private:
    Ui::Login *ui;
    user *user_widget;
    admin *admin_widget;
};

#endif // LOGIN_H
