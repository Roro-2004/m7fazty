#ifndef USER_H
#define USER_H

#include <QWidget>

namespace Ui {
class user;
}

class user : public QWidget
{
    Q_OBJECT

public:
    explicit user(QWidget *parent = nullptr);
    ~user();
    void hideAllElements();


private slots:
    void on_menu_Button_clicked();

    void on_close_list_Button_clicked();

    void on_viewBalance_Button_clicked();

    void on_sendMoney_Button_clicked();

    void on_requestMoney_Button_clicked();

    void on_viewHistory_Button_clicked();

    void on_editProfile_Button_clicked();

    void on_logout_Button_clicked();

private:
    Ui::user *ui;
};

#endif // USER_H
