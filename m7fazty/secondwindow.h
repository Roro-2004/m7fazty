#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H
#include"user_c.h"
#include"editprofile_dialog.h"

#include <QDialog>

namespace Ui {
class secondwindow;
}

class secondwindow : public QDialog
{
    Q_OBJECT

public:

    explicit secondwindow(QWidget *parent = nullptr);
    ~secondwindow();
     static std:: string newpassword;


private slots:
   // void on_buttonBox_accepted();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::secondwindow *ui;
    //editProfile_dialog *editprofile_widget;
};

#endif // SECONDWINDOW_H
