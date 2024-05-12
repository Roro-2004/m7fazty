#ifndef ADD_EDIT_DELETE_H
#define ADD_EDIT_DELETE_H
#include <QDialog>
#include"user_c.h"


namespace Ui {
class add_edit_delete;
}

class add_edit_delete : public QDialog
{
    Q_OBJECT

public:
    explicit add_edit_delete(QWidget *parent = nullptr);
    ~add_edit_delete();

    user_c *u;
    user_c *added_user;
    user_c *edited_user;
private slots:

    void on_add_acc_pushButton_clicked();

    void on_deleteacc_pushButton_clicked();

    void populateComboBox();

    void on_add_button_clicked();

    void on_edit_button_clicked();

    void on_delete_button_clicked();

    void on_viewCurrentAccData_CB_currentTextChanged(const QString &arg1);


    void on_editAcc_pushButton_clicked();

private:
    Ui::add_edit_delete *ui;

};

#endif // ADD_EDIT_DELETE_H
