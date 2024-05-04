#ifndef ADD_EDIT_DELETE_H
#define ADD_EDIT_DELETE_H

#include <QDialog>

namespace Ui {
class add_edit_delete;
}

class add_edit_delete : public QDialog
{
    Q_OBJECT

public:
    explicit add_edit_delete(QWidget *parent = nullptr);
    ~add_edit_delete();

private slots:
    void on_editAcc_pushButton_clicked();

    void on_viewCurrentAccData_pushButton_clicked();

    void on_add_acc_pushButton_clicked();

    void on_deleteacc_pushButton_clicked();

private:
    Ui::add_edit_delete *ui;
};

#endif // ADD_EDIT_DELETE_H
