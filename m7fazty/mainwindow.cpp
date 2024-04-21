#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap background("D:/ds/m7fazty/m7fazty/photos/bg.png");


    stackedWidget = new QStackedWidget(this);
    // Add the main window UI created with Qt Designer to the stacked widget
    stackedWidget->addWidget(ui->centralwidget);

    // Create the login widget and add it to the stacked widget
    loginWidget = new Login();
    stackedWidget->addWidget(loginWidget);

    // Set the central widget to the stacked widget
    setCentralWidget(stackedWidget);

    // Connect signals from the login widget to slots in main window
    connect(loginWidget, &Login::switchToMain, this, &MainWindow::switchToMain);

    // Set background image
   // QPixmap background("D:/ds/m7fazty/m7fazty/photos/bg.png");
    ui->label_bg->setPixmap(background);

    stackedWidget->show();
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::switchToMain()
{
    stackedWidget->setCurrentIndex(0); // Index of the main window widget
}

void MainWindow::on_login_clicked()
{
    stackedWidget->setCurrentWidget(loginWidget);
}
