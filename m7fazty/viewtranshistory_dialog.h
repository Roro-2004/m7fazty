#ifndef VIEWTRANSHISTORY_DIALOG_H
#define VIEWTRANSHISTORY_DIALOG_H
#include <QDialog>

namespace Ui {
class viewTransHistory_dialog;
}

class viewTransHistory_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit viewTransHistory_dialog(QWidget *parent = nullptr);
    ~viewTransHistory_dialog();

private:
    Ui::viewTransHistory_dialog *ui;
};

#endif // VIEWTRANSHISTORY_DIALOG_H
