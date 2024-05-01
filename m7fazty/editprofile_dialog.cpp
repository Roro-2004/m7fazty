#include "editprofile_dialog.h"
#include "ui_editprofile_dialog.h"

editProfile_dialog::editProfile_dialog(QWidget *parent): QDialog(parent), ui(new Ui::editProfile_dialog)
{
    ui->setupUi(this);

}

editProfile_dialog::~editProfile_dialog()
{
    delete ui;
}
