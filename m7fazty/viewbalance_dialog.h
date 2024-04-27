#ifndef VIEWBALANCE_DIALOG_H
#define VIEWBALANCE_DIALOG_H

#include <QDialog>

namespace Ui {
class viewBalance_dialog;
}

class viewBalance_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit viewBalance_dialog(QWidget *parent = nullptr);
    ~viewBalance_dialog();

private:
    Ui::viewBalance_dialog *ui;
};

#endif // VIEWBALANCE_DIALOG_H
