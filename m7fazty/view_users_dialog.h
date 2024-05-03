#ifndef VIEW_USERS_DIALOG_H
#define VIEW_USERS_DIALOG_H
#include"headers.h"
#include <QDialog>

namespace Ui {
class view_users_dialog;
}

class view_users_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit view_users_dialog(QWidget *parent = nullptr);
    ~view_users_dialog();

private:
    Ui::view_users_dialog *ui;
};

#endif // VIEW_USERS_DIALOG_H
