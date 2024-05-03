#ifndef ADJUST_BALANCE_DIALOG_H
#define ADJUST_BALANCE_DIALOG_H
#include <QDialog>

namespace Ui {
class adjust_balance_dialog;
}

class adjust_balance_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit adjust_balance_dialog(QWidget *parent = nullptr);
    ~adjust_balance_dialog();

private:
    Ui::adjust_balance_dialog *ui;
};

#endif // ADJUST_BALANCE_DIALOG_H
