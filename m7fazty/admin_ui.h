#ifndef ADMIN_UI_H
#define ADMIN_UI_H

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
};

#endif // ADMIN_UI_H
