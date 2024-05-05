#include "requestmoney_dialog.h"
#include "ui_requestmoney_dialog.h"
#include <unordered_map>
#include "transiction.h"
#include "login.h"
#include "viewtranshistory_dialog.h"
#include <ctime>
#include <iostream>
#include <QUuid>
#include <unordered_set>
#include"sign_up.h"
#include<QMessageBox>
using namespace std;


unordered_map<string, transiction*> requestMoney_dialog::trans_read;
unordered_set<string> requestMoney_dialog::usedIDs;


requestMoney_dialog::requestMoney_dialog(QWidget *parent) : QDialog(parent), ui(new Ui::requestMoney_dialog) {
    ui->setupUi(this);
}


string requestMoney_dialog::generateID()
{
    string id;
    int randomNumber;
    do {
        randomNumber = rand() % 900 + 100;
        id = "R" + to_string(randomNumber);
    } while(usedIDs.count(id) > 0);
    return id;
}


string requestMoney_dialog::getCurrentDate()
{
    // Get the current time
    time_t currentTime = time(nullptr);

    // Format the current date as a string (DD/MM/YYYY)
    char buffer[11]; // Buffer to store the formatted date
    strftime(buffer, sizeof(buffer), "%d/%m/%Y", localtime(&currentTime));
    return string(buffer);
}


string requestMoney_dialog::getCurrentTime()
{
    // Get the current time
    time_t currentTime = time(nullptr);

    // Format the current time as a string (HH:MM AM/PM)
    tm* timeinfo = localtime(&currentTime);

    string am_pm = (timeinfo->tm_hour < 12) ? "AM" : "PM";
    int hour = (timeinfo->tm_hour < 12) ? timeinfo->tm_hour : timeinfo->tm_hour - 12; //to convert it to the 12-hour format.
    if (hour == 0)
    {
        hour = 12;
    }

    char buffer[9];
    strftime(buffer, sizeof(buffer), "%I:%M", timeinfo); // %I for 12-hour format
    return string(buffer) + " " + am_pm;
}


void requestMoney_dialog::on_request_Button_clicked() {
    t = new transiction();
    t->id = generateID();
    t->receiver = Login::current_user.user_acc.username;
    t->sender = ui->userName_textBox->text().toStdString();
    t->amount = ui->amount_textBox->text().toFloat();

    if (t->amount <= 10000)
    {
        t->status = "Successful";
    }
    else
    {
        t->status = "Failed";
        QMessageBox::warning(this, "Transiction", "Transaction failed: Amount exceeds limit");
        delete t;
        return;
    }

    t->date = getCurrentDate();
    t->time = getCurrentTime();



    if (sign_up::users_read[t->receiver]->user_acc.status==1)
    {
        if ((t->sender == "Bank" || t->sender == "bank"))
        {
            if((sign_up::users_read[t->receiver]->dept+t->amount)  <= 1000){
               sign_up::users_read[t->receiver]->balance += t->amount;
               sign_up::users_read[t->receiver]->dept += t->amount;
            }
            else
            {
                QMessageBox::warning(this, "Transiction", "Transaction failed: Dept Limit Exceeded");
                delete t;
                return;
            }
        }
        else
        {
            // Handle sender's balance and debt deduction
            /*if (sign_up::users_read[t->sender]->balance >= sign_up::users_read[t->sender]->dept) {
                if (sign_up::users_read[t->sender]->balance == sign_up::users_read[t->sender]->dept && t->amount <= sign_up::users_read[t->sender]->dept) {
                    // If the balance equals the debt and the transaction amount is less than or equal to the debt
                    sign_up::users_read[t->sender]->balance -= t->amount;
                    sign_up::users_read[t->sender]->dept -= t->amount;
                } else {
                    // Regular deduction when balance is greater than or equal to the debt
                    sign_up::users_read[t->sender]->balance -= sign_up::users_read[t->sender]->dept;
                    sign_up::users_read[t->sender]->dept = 0; // Reset the debt to zero
                }
            } else {
                // If the sender's balance is less than the debt, deduct the remaining balance from the debt
                sign_up::users_read[t->sender]->dept -= sign_up::users_read[t->sender]->balance;
                sign_up::users_read[t->sender]->balance = 0; // Set the balance to zero
            */

            if (sign_up::users_read.find(t->sender) != sign_up::users_read.end())
            {
                if(sign_up::users_read[t->sender]->user_acc.status==0)
                {
                    QMessageBox::warning(this, "Transiction", "Transaction failed: User is Suspended");
                    delete t;
                    return;
                }
                if (t->receiver == t->sender)
                {
                    QMessageBox::warning(this, "Transiction", "Transaction failed: Invalid transaction");
                    delete t;
                    return;
                }
                else
                {
                    if (sign_up::users_read[t->sender]->balance >= t->amount)
                    {
                        sign_up::users_read[t->receiver]->balance += t->amount;
                        sign_up::users_read[t->sender]->balance -= t->amount;
                    }
                    else
                    {
                        QMessageBox::warning(this, "Transiction", "Transaction failed: Insufficient balance");
                        delete t;
                        return;
                    }
                }
            }
            else
            {
                QMessageBox::warning(this, "Transiction", "Transaction failed: User not found");
                delete t;
                return;
            }
        }
    }
    else
    {
        QMessageBox::warning(this, "Transiction", "Transaction failed: Your account is Suspended");
        delete t;
        return;
    }


    trans_read[t->id] = t;
    close();
}



requestMoney_dialog::~requestMoney_dialog()
{
    delete ui;
}
