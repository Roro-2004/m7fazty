#include "viewtranshistory_dialog.h"
#include "ui_viewtranshistory_dialog.h"

viewTransHistory_dialog::viewTransHistory_dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::viewTransHistory_dialog)
{
    ui->setupUi(this);


    QPixmap dialog_bg("D:/m7fazty/m7fazty/photos/dialog_bg.png");
    ui->label_bg->setPixmap(dialog_bg);
}

viewTransHistory_dialog::~viewTransHistory_dialog()
{
    delete ui;
}
