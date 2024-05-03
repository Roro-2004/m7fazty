#ifndef DELETE_SUSPEND_DIALOG_H
#define DELETE_SUSPEND_DIALOG_H
#include <QDialog>

namespace Ui {
class delete_suspend_dialog;
}

class delete_suspend_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit delete_suspend_dialog(QWidget *parent = nullptr);
    ~delete_suspend_dialog();

private:
    Ui::delete_suspend_dialog *ui;
};

#endif // DELETE_SUSPEND_DIALOG_H
