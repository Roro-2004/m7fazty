#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <fstream>
#include <filesystem>
#include <iostream>
using namespace std;
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

    // Set the central widget to the stacked widget
    setCentralWidget(stackedWidget);

    // Set background image
    QPixmap background("D:/Projects/2nd Year/DS/m7fazty/m7fazty/photos/bg.png");
    ui->label_bg->setPixmap(background);

    stackedWidget->show();



    // Specify the file path
    fs::path transiction_filePath = "D:/Projects/2nd Year/DS/m7fazty/m7fazty/files/Transiction.csv";
    ofstream transiction_file(transiction_filePath);

    if (transiction_file.is_open()) {
        transiction_file << "Hello, world" << endl;
        transiction_file << "This is a line written to the file." << endl;

        transiction_file.close();

        cout << "Data has been written to the file successfully." << endl;
    } else {
        cerr << "Error: Unable to open the file for writing." << endl;
    }

    // Specify the file path
    fs::path filePath = "D:/Projects/2nd Year/DS/m7fazty/m7fazty/files/Transiction.csv";

    // Check if the file exists
    if (fs::exists(filePath)) {
        // Open the file for reading
        ifstream inputFileStream(filePath);

        // Check if the file stream is open
        if (inputFileStream.is_open()) {
            string line;
            // Read the file line by line
            while (getline(inputFileStream, line)) {
                // Process each line (in this example, we just print it)
                cout << line << endl;
            }
            // Close the file stream
            inputFileStream.close();
        } else {
            cerr << "Error: Unable to open the file for reading." << endl;
        }
    } else {
        cerr << "Error: File does not exist." <<endl;
    }
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_login_clicked()
{
    loginWidget = new Login();
    stackedWidget->addWidget(loginWidget);
    stackedWidget->setCurrentWidget(loginWidget);
}


void MainWindow::on_sign_up_clicked()
{
    signup_Widget = new sign_up();
    stackedWidget->addWidget(signup_Widget);
    stackedWidget->setCurrentWidget(signup_Widget);

}

