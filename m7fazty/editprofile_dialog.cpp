#include "editprofile_dialog.h"
#include "ui_editprofile_dialog.h"

editProfile_dialog::editProfile_dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::editProfile_dialog)
{
    ui->setupUi(this);


    QPixmap dialog_bg("D:/Projects/2nd Year/DS/m7fazty/m7fazty/photos/dialog_bg.png");
    ui->label_bg->setPixmap(dialog_bg);
}

editProfile_dialog::~editProfile_dialog()
{
    delete ui;
}
