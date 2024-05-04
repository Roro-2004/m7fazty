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
    t->id=generateID();
    t->receiver = Login::current_user.user_acc.username;
    t->sender = ui->userName_textBox->text().toStdString();
    t->amount = ui->amount_textBox->text().toFloat();

    if (t->amount <= 10000)
        t->status = "Successful";
    else
        t->status = "Failed";

    t->date = getCurrentDate();
    t->time = getCurrentTime();

    trans_read[generateID()] = t;

    cout<<"request done\n";


    for (unordered_map<string, user_c*>::value_type & u : sign_up::users_read)
    {
        bool exist=false;
        if(t->sender==u.second->user_acc.username)
            exist=true;
        if(exist==true){
            if(t->receiver==t->sender)
            {
                cout <<"cant do transiction";
                break;
            }
            else
            {
                if(t->receiver==u.second->user_acc.username)
                    u.second->balance+=t->amount;
                else if(t->sender==u.second->user_acc.username && u.second->balance>=t->amount)
                    u.second->balance-=t->amount;
            }
        }
    }
    close();
}


requestMoney_dialog::~requestMoney_dialog()
{
    delete ui;
}
