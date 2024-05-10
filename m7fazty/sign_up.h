#ifndef SIGN_UP_H
#define SIGN_UP_H
#include "Login.h"
#include "user_c.h"
#include<unordered_map>
#include <QWidget>

namespace Ui {
class sign_up;
}

class sign_up : public QWidget
{
    Q_OBJECT

public:
    explicit sign_up(QWidget *parent = nullptr);
    ~sign_up();

    static unordered_map<string, user_c*> users_read;
    user_c *user;
    bool static isStrongPassword(string &password);
    string pass_before_hashing;

private slots:

    void on_back_button_clicked();

    void on_sign_up2_button_clicked();

private:
    Ui::sign_up *ui;
    Login *loginWidget;
};

#endif // SIGN_UP_H
