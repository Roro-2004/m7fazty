

#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <vector>
#include "user.h"
#include "admin.h"

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();
    std::vector<user> users;
    user user_info;


private slots:
    void on_back_button_clicked();

    void on_Login_2_clicked();

private:
    Ui::Login *ui;
    user *userwidget;
    admin *adminwidget;
};

#endif // LOGIN_H
