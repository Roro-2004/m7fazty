#ifndef CONFIRM_PASS_DIALOG_H
#define CONFIRM_PASS_DIALOG_H
#include <QDialog>
using namespace std;

namespace Ui {
class confirm_pass_dialog;
}

class confirm_pass_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit confirm_pass_dialog(QWidget *parent = nullptr);
    ~confirm_pass_dialog();
    static string newpassword;

private slots:
    void on_pushButton_clicked();


private:
    Ui::confirm_pass_dialog *ui;
};

#endif // CONFIRM_PASS_DIALOG_H
