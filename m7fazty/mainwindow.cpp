#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include<filesystem>
#include<fstream>
#include<iostream>
namespace fs = std::filesystem;


QStackedWidget* MainWindow::stackedWidget = nullptr;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    stackedWidget = new QStackedWidget(this);
    // Add the main window UI created with Qt Designer to the stacked widget
    stackedWidget->addWidget(ui->centralwidget);

    // Create the login widget and add it to the stacked widget
    loginWidget = new Login();
    stackedWidget->addWidget(loginWidget);

    // Set the central widget to the stacked widget
    setCentralWidget(stackedWidget);

    // Set background image
    QPixmap background("D:/m7fazty/m7fazty/photos/bg.png");
    ui->label_bg->setPixmap(background);
   /* // Specify the file path
    fs::path filePath = "D:/m7fazty/m7fazty/files/login.csv";

    // Open the file for writing
    ofstream outputFileStream(filePath);
    // Check if the file stream is open
    if (outputFileStream.is_open()) {
        // Write data to the file
        outputFileStream << "Hello, world!" << endl;
        outputFileStream << "This is a line written to the file." << endl;

        // Close the file stream
        outputFileStream.close();

        cout << "Data has been written to the file successfully." << endl;
    } else {
        cerr << "Error: Unable to open the file for writing." << endl;
    }*/

    stackedWidget->show();
}




MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_login_clicked()
{
    stackedWidget->setCurrentWidget(loginWidget);
}
