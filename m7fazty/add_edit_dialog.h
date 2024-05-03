#ifndef ADD_EDIT_DIALOG_H
#define ADD_EDIT_DIALOG_H
#include"headers.h"
#include <QDialog>

namespace Ui {
class add_edit_dialog;
}

class add_edit_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit add_edit_dialog(QWidget *parent = nullptr);
    ~add_edit_dialog();

private:
    Ui::add_edit_dialog *ui;
};

#endif // ADD_EDIT_DIALOG_H
