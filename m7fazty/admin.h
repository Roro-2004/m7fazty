#ifndef ADMIN_H
#define ADMIN_H
#include"nadminn.h"
#include <QWidget>

namespace Ui {
class admin;
}

class admin : public QWidget
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = nullptr);
    ~admin();

private:
    Ui::admin *ui;
    NadminN* NadminNWidget;
};

#endif // ADMIN_H
