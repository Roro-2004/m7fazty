#ifndef SUSPEND_ACTIVATE_H
#define SUSPEND_ACTIVATE_H

#include <QDialog>

namespace Ui {
class suspend_activate;
}

class suspend_activate : public QDialog
{
    Q_OBJECT

public:
    explicit suspend_activate(QWidget *parent = nullptr);
    ~suspend_activate();

private:
    Ui::suspend_activate *ui;
};

#endif // SUSPEND_ACTIVATE_H
