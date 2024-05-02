#include "admin.h"
#include "ui_admin.h"
//#include"mainwindow.h"      /////////////////////////
admin::admin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::admin)
{
    ui->setupUi(this);
   /* // Create the NadminN widget and add it to the stacked widget    /////////////////
    NadminNWidget=new NadminN();
    MainWindow::stackedWidget->addWidget(NadminNWidget);*/
}

admin::~admin()
{
    delete ui;
}
