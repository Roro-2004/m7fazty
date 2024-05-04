#ifndef NADMINN_H
#define NADMINN_H

#include <QDialog>

namespace Ui {
class NadminN;
}

class NadminN : public QDialog
{
    Q_OBJECT

public:
    explicit NadminN(QWidget *parent = nullptr);
    ~NadminN();

private slots:
    void on_add_acc_pushButton_clicked();

    void on_editBalance_pushButton_clicked();

    void on_Activate_pushButton_clicked();

    void on_suspend_pushButton_clicked();

    void on_deleteacc_pushButton_clicked();

private:
    Ui::NadminN *ui;
};

#endif // NADMINN_H
