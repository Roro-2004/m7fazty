#include "user_c.h"
#include "requestmoney_dialog.h"
#include "login.h"
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

user_c::user_c() {}

string user_c::encoding(string s) {
    if (s == "01")
        return "January";
    else if (s == "02")
        return "February";
    else if (s == "03")
        return "March";
    else if (s == "04")
        return "April";
    else if (s == "05")
        return "May";
    else if (s == "06")
        return "June";
    else if (s == "07")
        return "July";
    else if (s == "08")
        return "August";
    else if (s == "09")
        return "September";
    else if (s == "10")
        return "October";
    else if (s == "11")
        return "November";
    else if (s == "12")
        return "December";
    else
        return "Invalid month";
}

void user_c::search_by_month(string s) {
    auto it = Login::current_user.transactions_map.find(s);
    if (it != Login::current_user.transactions_map.end()) {
        for (auto t : it->second) {
            cout << "Trans ID: " << t->id << ", Receiver: " << t->receiver << ", Sender: " << t->sender
                 << ", Amount: " << t->amount << ", Date: " << t->date << ", Time: " << t->time
                 << ", Status: " << t->status << endl;
        }
    } else {
        cout << "No data for the specified month." << endl;
    }
}

void user_c::transiction_history() {
    string name = Login::current_user.user_acc.username;

    // Iterate over the transactions in requestMoney_dialog::trans_data
    for (auto& tr : requestMoney_dialog::trans_data) {
        transiction* t = tr.second;
        if (t != nullptr && (t->receiver == name || t->sender == name)) {
            string key = encoding(t->date.substr(3, 2)); // Assuming month is two characters long
            transactions_map[key].push_back(t);
        }
    }

    // Iterate over the transactions in requestMoney_dialog::trans_read
    for (auto& tr : requestMoney_dialog::trans_read) {
        transiction* t = tr.second;
        if (t != nullptr && (t->receiver == name || t->sender == name)) {
            string key = encoding(t->date.substr(3, 2)); // Assuming month is two characters long
            transactions_map[key].push_back(t);
        }
    }

    cout << "Transactions for user " << name << ":" << endl;
    // Print out transactions for debugging
    for (auto& entry : transactions_map) {
        cout << "Month: " << entry.first << endl;
        for (auto t : entry.second) {
            cout << "Trans ID: " << t->id << ", Receiver: " << t->receiver << ", Sender: " << t->sender
                 << ", Amount: " << t->amount << ", Date: " << t->date << ", Time: " << t->time
                 << ", Status: " << t->status << endl;
        }
    }
}
