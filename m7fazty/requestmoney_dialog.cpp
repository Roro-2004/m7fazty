#include "requestmoney_dialog.h"
#include "ui_requestmoney_dialog.h"
#include <unordered_map>
#include "transiction.h"
#include "login.h"
#include "viewtranshistory_dialog.h"
#include <ctime>
#include <iostream>
using namespace std;

unordered_map<string, transiction*> requestMoney_dialog::trans_data;

requestMoney_dialog::requestMoney_dialog(QWidget *parent) : QDialog(parent), ui(new Ui::requestMoney_dialog) {
    ui->setupUi(this);

    QPixmap dialog_bg("D:/Projects/2nd Year/DS/m7fazty/m7fazty/photos/dialog_bg.png");
    ui->label_bg->setPixmap(dialog_bg);
}

string requestMoney_dialog::generateID() {
    static atomic<int> counter(100); // Static counter for generating unique IDs
    return "R" + to_string(counter++);
}

string requestMoney_dialog::getCurrentDate() {
    // Get the current time
    std::time_t currentTime = std::time(nullptr);

    // Format the current date as a string (DD/MM/YYYY)
    char buffer[11]; // Buffer to store the formatted date
    std::strftime(buffer, sizeof(buffer), "%d/%m/%Y", std::localtime(&currentTime));
    return std::string(buffer);
}

string requestMoney_dialog::getCurrentTime() {
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

requestMoney_dialog::~requestMoney_dialog() {
    // Delete dynamically allocated transiction objects before destroying the dialog
    for (auto& pair : trans_data) {
        delete pair.second;
    }
    trans_data.clear();
    delete ui;
}
