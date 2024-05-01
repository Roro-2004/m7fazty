#ifndef SIGN_UP_H
#define SIGN_UP_H
#include "Login.h"

#include <QWidget>

namespace Ui {
class sign_up;
}

class sign_up : public QWidget
{
    Q_OBJECT

public:
    explicit sign_up(QWidget *parent = nullptr);
    ~sign_up();

private slots:
    void on_pushButton_clicked();
    bool isStrongPassword(const QString &password);

private:
    Ui::sign_up *ui;
    Login *loginWidget;
};

#endif // SIGN_UP_H
