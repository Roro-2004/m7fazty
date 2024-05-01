#include "sign_up.h"
#include "ui_sign_up.h"
#include"QString"
#include <QFile>
#include<QTextStream>
#include<QMessageBox>
#include <QRegularExpression>
#include "mainwindow.h"

sign_up::sign_up(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::sign_up)
{
    ui->setupUi(this);

    loginWidget = new Login();
    MainWindow::stackedWidget->addWidget(loginWidget);
}

sign_up::~sign_up()
{
    delete ui;
}

bool sign_up::isStrongPassword(const QString &password) {
    QRegularExpression uppercase("[A-Z]");
    QRegularExpression lowercase("[a-z]");
    QRegularExpression digit("[0-9]");
    QRegularExpression special("[!@#$%^&*()_+{}|:<>?~-]");

    // Check if the password meets the criteria
    return (password.length() >= 8) &&
           uppercase.match(password).hasMatch() &&
           lowercase.match(password).hasMatch() &&
           digit.match(password).hasMatch() &&
           special.match(password).hasMatch();
}

void sign_up::on_pushButton_clicked()
{
    bool check = true;
     QString Username = ui->lineEdit_username->text();
     QString Password = ui->lineEdit_password->text();
     QString Address = ui->lineEdit_address->text();
     int Age = ui->lineEdit_age->text().toInt();

     QFile file("User.txt");
     if (!file.open(QFile::WriteOnly | QFile::Text | QFile:: Append)){
         QMessageBox::warning(this,"File", "File not open");
         check = false;
     }
     QTextStream out(&file);
     if (!isStrongPassword(Password)) {
         QMessageBox::warning(this, "Password", "Password is not strong enough. Please use at least 8 characters including uppercase, lowercase, digits, and special characters.");
         check = false;
     } else {
         out << Username << " " << Password << " " << Address << " " << Age << '\n';
         file.flush();
     }
     file.close();

     if (check){
         QMessageBox::information(this, "Sign up","Sign up successfully");
         MainWindow::stackedWidget->setCurrentWidget(loginWidget);
     }

}

