#ifndef ADMIN_H
#define ADMIN_H

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

private slots:
    void on_editBalnce_pushButton_clicked();

    void on_addAccount_pushButton_clicked();

    void on_username_editBalance_lineEdit_cursorPositionChanged(int arg1, int arg2);

    void on_username_editBalance_lineEdit_textEdited(const QString &arg1);

    void on_suspend_pushButton_clicked();

    void on_Activate_pushButton_clicked();

    void on_delete_acc_pushButton_clicked();

    void on_delete_pushButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::admin *ui;
};

#endif // ADMIN_H
