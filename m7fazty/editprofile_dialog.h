#ifndef EDITPROFILE_DIALOG_H
#define EDITPROFILE_DIALOG_H
#include"user_c.h"
#include <QDialog>


namespace Ui {
class editProfile_dialog;
}

class editProfile_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit editProfile_dialog(QWidget *parent = nullptr);
    ~editProfile_dialog();
     user_c *user2;


private slots:
    void on_pushButton_clicked();



    void on_lineEdit_password_textEdited(const QString &arg1);

private:
    Ui::editProfile_dialog *ui;

};

#endif // EDITPROFILE_DIALOG_H
