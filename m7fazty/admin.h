#ifndef ADMIN_H
#define ADMIN_H
#include"headers.h"
#include <QWidget>

namespace Ui {
class admin;
}

class admin : public QWidget
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = nullptr);
    ~admin();
    void hideAllElements();

private slots:

    void on_close_list_Button_clicked();

    void on_add_edit_Button_clicked();

    void on_viewUsers_Button_clicked();

    void on_delete_suspend_Button_clicked();

    void on_viewTransictions_Button_clicked();

    void on_adjustBalance_Button_clicked();

    void on_logout_Button_clicked();

    void on_menu_Button_clicked();

private:
    Ui::admin *ui;
};

#endif // ADMIN_H
