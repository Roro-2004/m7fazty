#include "sendmoney_dialog.h"
#include "ui_sendmoney_dialog.h"
#include <unordered_map>
#include "transiction.h"
#include "login.h"
#include"requestmoney_dialog.h"
#include <ctime>
#include<iostream>
#include <QUuid>
#include <unordered_set>
#include"sign_up.h"
#include<QMessageBox>
using namespace std;

unordered_set<string> sendMoney_dialog::usedIDs;


sendMoney_dialog::sendMoney_dialog(QWidget *parent): QDialog(parent), ui(new Ui::sendMoney_dialog)
{
    ui->setupUi(this);
}



string sendMoney_dialog::generateID()
{
    string id;
    int randomNumber;
    do {
        randomNumber = rand() % 900 + 100;
        id = "S" + to_string(randomNumber);
    } while(usedIDs.count(id) > 0); // Check if the generated ID already exists in the set

    return id;
}


string sendMoney_dialog::getCurrentDate() {
    // Get the current time
    std::time_t currentTime = std::time(nullptr);

    // Format the current date as a string (DD/MM/YYYY)
    char buffer[11]; // Buffer to store the formatted date
    std::strftime(buffer, sizeof(buffer), "%d/%m/%Y", std::localtime(&currentTime));
    return std::string(buffer);
}


string sendMoney_dialog::getCurrentTime() {
    // Get the current time
    std::time_t currentTime = std::time(nullptr);

    // Format the current time as a string (HH:MM AM/PM)
    std::tm* timeinfo = std::localtime(&currentTime);
    std::string am_pm = (timeinfo->tm_hour < 12) ? "AM" : "PM";
    int hour = (timeinfo->tm_hour < 12) ? timeinfo->tm_hour : timeinfo->tm_hour - 12;
    if (hour == 0) {
        hour = 12;  // Convert midnight (0) to 12 AM
    }
    char buffer[9]; // Buffer to store the formatted time
    std::strftime(buffer, sizeof(buffer), "%I:%M", timeinfo); // %I for 12-hour format
    return std::string(buffer) + " " + am_pm;
}


void sendMoney_dialog::on_send_Button_clicked()
{
    t = new transiction();
    t->id = generateID();
    t->sender = Login::current_user.user_acc.username;
    t->receiver = ui->userName_textBox->text().toStdString();
    t->amount = ui->amount_textBox->text().toFloat();

    if (t->amount <= 10000&&t->amount>0)
    {
        t->status = "Successful";
    }
    else
    {
        t->status = "Failed";
        QMessageBox::warning(this, "Transiction", "Transaction Failed: Invalid Amount");
    }

    t->date = getCurrentDate();
    t->time = getCurrentTime();



    if (sign_up::users_read[t->sender]->user_acc.status==1)
    {

        if (sign_up::users_read.find(t->receiver) != sign_up::users_read.end())
            {
                if(sign_up::users_read[t->receiver]->user_acc.status==0)
                {
                t->status="Failed";
                    QMessageBox::warning(this, "Transiction", "Transaction Failed: User is Suspended");
                }
                if (t->receiver == t->sender)
                {
                    t->status="Failed";
                    QMessageBox::warning(this, "Transiction", "Transaction Failed: Invalid transaction");
                }
                else
                {
                    if (sign_up::users_read[t->sender]->balance >= t->amount)
                    {
                        sign_up::users_read[t->receiver]->balance += t->amount;
                        sign_up::users_read[t->sender]->balance -= t->amount;
                        Login::current_user.balance-=t->amount;
                    }
                    else
                    {
                        t->status="Failed";
                        QMessageBox::warning(this, "Transiction", "Transaction Failed: Insufficient balance");

                    }
                }
            }
        else
            {
            t->status="Failed";
                QMessageBox::warning(this, "Transiction", "Transaction Failed: User Not Found");
            }
    }
    else
    {
        t->status="Failed";
        QMessageBox::warning(this, "Transiction", "Transaction Failed: Your account is Suspended");
    }


    if(sign_up::users_read[t->receiver]->balance > sign_up::users_read[t->receiver]->dept)
    {
        sign_up::users_read[t->receiver]->balance -=sign_up::users_read[t->receiver]->dept;
        sign_up::users_read[t->receiver]->dept=0;
        Login::current_user.balance-=Login::current_user.dept;
        Login::current_user.dept=0;
    }


    if(t->status=="Successful"){
        QMessageBox::information(this, "Transaction", "Transaction Successful");
    }


    requestMoney_dialog::trans_read[t->id] = t;
    close();
}



sendMoney_dialog::~sendMoney_dialog()
{
    delete ui;
}
