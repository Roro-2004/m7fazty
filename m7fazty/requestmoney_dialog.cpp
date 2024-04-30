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
using namespace std;


unordered_map<string, transiction*> requestMoney_dialog::trans_data;
unordered_map<string, transiction*> requestMoney_dialog::trans_read;
unordered_set<string> requestMoney_dialog::usedIDs;


requestMoney_dialog::requestMoney_dialog(QWidget *parent) : QDialog(parent), ui(new Ui::requestMoney_dialog) {
    ui->setupUi(this);

    QPixmap dialog_bg("D:/m7fazty/m7fazty/photos/dialog_bg.png");
    ui->label_bg->setPixmap(dialog_bg);
    cout<<trans_data.size()<<endl;
}

string requestMoney_dialog::generateID()
{
    string id;
    int randomNumber;
    do {
        randomNumber = rand() % 900 + 100;
        id = "R" + to_string(randomNumber);
    } while(usedIDs.count(id) > 0); // Check if the generated ID already exists in the set

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
    t->receiver = Login::current_user;
    t->sender = ui->userName_textBox->text().toStdString();
    t->amount = ui->amount_textBox->text().toFloat();

    if (t->amount <= 10000)
        t->status = "Successful";
    else
        t->status = "Failed";

    t->date = getCurrentDate();
    t->time = getCurrentTime();
    trans_data[generateID()] = t;

    close();
}

requestMoney_dialog::~requestMoney_dialog()
{
    delete ui;}
