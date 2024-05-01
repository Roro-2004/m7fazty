#ifndef EDITPROFILE_DIALOG_H
#define EDITPROFILE_DIALOG_H
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

private:
    Ui::editProfile_dialog *ui;
};

#endif // EDITPROFILE_DIALOG_H
