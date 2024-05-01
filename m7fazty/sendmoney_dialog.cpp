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
    t->id=generateID();
    t->sender=Login::current_user.user_acc.username;
    t->receiver = ui->userName_textBox->text().toStdString();
    t->amount = ui->amount_textBox->text().toFloat();

    if(t->amount<=10000)
        t->status ="Successful";
    else
        t->status ="Failed";

    t->date=getCurrentDate();
    t->time=getCurrentTime();
    requestMoney_dialog::trans_data[generateID()] = t;
    cout<<"trans done\n";
    close();
}

sendMoney_dialog::~sendMoney_dialog()
{
    delete ui;
}
