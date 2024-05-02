#ifndef VIEW_TRANS_DIALOG_H
#define VIEW_TRANS_DIALOG_H

#include <QDialog>

namespace Ui {
class view_trans_dialog;
}

class view_trans_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit view_trans_dialog(QWidget *parent = nullptr);
    ~view_trans_dialog();

private:
    Ui::view_trans_dialog *ui;
};

#endif // VIEW_TRANS_DIALOG_H
