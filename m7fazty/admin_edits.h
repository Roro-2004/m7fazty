#ifndef ADMIN_EDITS_H
#define ADMIN_EDITS_H

#include <QDialog>

namespace Ui {
class admin_edits;
}

class admin_edits : public QDialog
{
    Q_OBJECT

public:
    explicit admin_edits(QWidget *parent = nullptr);
    ~admin_edits();

private slots:
    void on_viewCurrentAccData_pushButton_clicked();

    void on_editAcc_pushButton_clicked();

private:
    Ui::admin_edits *ui;
};

#endif // ADMIN_EDITS_H
