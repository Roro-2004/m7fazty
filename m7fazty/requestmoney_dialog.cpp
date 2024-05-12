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



//----------------------------------------------------- Generating ID -------------------------------------------------------
string requestMoney_dialog::generateID()
{
    string id;
    int randomNumber;
    //do-while 3shan howa lazm y3ml id 2bl ma yt-check awel mara
    do{
        randomNumber = rand() % 900 + 100; // random number between 100 and 999
        id = "R" + to_string(randomNumber);
    } while(usedIDs.count(id) > 0); // count btrg3ly 3dd el 7aga el heya l2to mn el ana b3taholha

    return id;
}
//---------------------------------------------------------------------------------------------------------------------------


//----------------------------------------------- Getting Current Date/Time -------------------------------------------------
string requestMoney_dialog::getCurrentDate()
{
    time_t currentDate = time(nullptr); //get current date
    char formatted_date[11];
    //built-in function to format the date
    strftime(formatted_date, sizeof(formatted_date), "%d/%m/%Y", localtime(&currentDate));

    return string(formatted_date);
}

string requestMoney_dialog::getCurrentTime()
{
    time_t currentTime = time(nullptr);   // get the current time
    tm* timeinfo = localtime(&currentTime);   // format the current time as a string (HH:MM AM/PM)

    string am_pm;
    if (timeinfo->tm_hour < 12){
        am_pm = "AM";
    }
    else{
        am_pm = "PM";
    }

    //to make 12-hours mode not 24-hours
    int hour;
    if (timeinfo->tm_hour < 12){
        hour = timeinfo->tm_hour;
    }
    else {
        hour = timeinfo->tm_hour - 12;
    }

    //to handle midnight 0 to 12 (hour 24)
    if (hour == 0){
        hour = 12;
    }

    char formatted_time[9];
    strftime(formatted_time, sizeof(formatted_time), "%I:%M", timeinfo); // %I for 12-hour format

    return string(formatted_time) + " " + am_pm;
}
//---------------------------------------------------------------------------------------------------------------------------


//-------------------------------------------------------- Send Money -------------------------------------------------------
void requestMoney_dialog::on_request_Button_clicked()
{
    //COLLECTING TRANS DATA
    t = new transiction();
    t->id = generateID();
    t->receiver = Login::current_user.user_acc.username;
    t->sender = ui->userName_textBox->text().toStdString();
    t->amount = ui->amount_textBox->text().toFloat();

    //empty fields handeling
    if(ui->amount_textBox->text().toStdString().empty() || ui->userName_textBox->text().toStdString().empty())
    {
        QMessageBox::warning(this, "Transaction", "Empty Fields Not Allowed");
        close();
        return;
    }

    //amount handeling
    if (t->amount <= 10000&&t->amount>0)
    {
        t->status = "Successful";
    }
    else
    {
        t->status = "Failed";
        QMessageBox::warning(this, "Transiction", "Transaction failed: Invalid Amount");
    }

    t->date = getCurrentDate();
    t->time = getCurrentTime();


    //LOGIC
    if (sign_up::users_read[t->receiver]->user_acc.status==1)
    {
            if (sign_up::users_read.find(t->sender) != sign_up::users_read.end())
            {
                if(sign_up::users_read[t->sender]->user_acc.status==0)
                {
                    t->status="Failed";
                    QMessageBox::warning(this, "Transiction", "Transaction Failed: User is Suspended");
                }
                if (t->receiver == t->sender)
                {
                    t->status="Failed";
                    QMessageBox::warning(this, "Transiction", "Transaction Failed: Invalid Transaction");
                }
                else
                {
                    if (sign_up::users_read[t->sender]->balance >= t->amount)
                    {
                        sign_up::users_read[t->receiver]->balance += t->amount;
                        sign_up::users_read[t->sender]->balance -= t->amount;
                        Login::current_user.balance+=t->amount;
                    }
                    else
                    {
                        t->status="Failed";
                        QMessageBox::warning(this, "Transiction", "Transaction Failed: Insufficient Balance");
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

    if(t->status=="Successful"){
        QMessageBox::information(this, "Transaction", "Transaction Successful");
    }

    trans_read[t->id] = t;
    close();
}
//---------------------------------------------------------------------------------------------------------------------------



requestMoney_dialog::~requestMoney_dialog()
{
    delete ui;
}
