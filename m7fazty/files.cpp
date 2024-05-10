#include "files.h"
#include <filesystem>
#include<fstream>
#include<string>
#include<iostream>
#include<unordered_map>
#include<vector>
#include"requestmoney_dialog.h"
#include "sign_up.h"
#include"sstream"
using namespace std;
namespace fs = std::filesystem;



files::files() {}


void files::write_in_file(string file_path) {
    fs::path path = file_path;
    ofstream file(path);

    if (!file.is_open()) {
        cerr << "Error: Unable to open the file for writing." << endl;
        return;
    }

    // Write headers only if the file is empty
    if (fs::file_size(path) == 0) {
        if (path.string() == "C:/Users/Esc/Documents/GitHub/m7fazty/m7fazty/files/Transiction.csv") {
            file << "Trans ID" << "," << "Receiver" << "," << "Sender" << "," << "Amount" << "," << "Date" << "," << "Time" << "," << "Status" << endl;
        } else if (path.string() == "C:/Users/Esc/Documents/GitHub/m7fazty/m7fazty/files/User.csv") {
            file << "Username" << "," << "Password" << "," << "Address" << "," << "Email" << "," << "Age" << "," << "Balance" << "," << "Status" << endl;
        } else {
            cerr << "Error: Invalid file path." << endl;
            file.close();
            return;
        }
        cout << "Headers have been written to the file successfully." << endl;
    }


    // Write data
    if (path.string() == "C:/Users/Esc/Documents/GitHub/m7fazty/m7fazty/files/Transiction.csv") {
        for (const auto& trans : requestMoney_dialog::trans_read) {
            transiction* t = trans.second;
            file << trans.first << "," << t->receiver << "," << t->sender << "," << t->amount << "," << t->date << "," << t->time << "," << t->status << endl;
        }
    } else if (path.string() == "C:/Users/Esc/Documents/GitHub/m7fazty/m7fazty/files/User.csv") {
        for (const auto& u : sign_up::users_read) {
            user_c* user = u.second;
            file << u.first << "," << user->user_acc.password << "," << user->user_acc.address << "," << user->user_acc.email << "," << user->user_acc.age << "," << user->balance << "," << user->user_acc.status << endl;
        }
    } else {
        cerr << "Error: Invalid file path." << endl;
    }

    file.close();
    cout << "Data has been written to the file successfully." << endl;
}


void files::split(const string& s, const string& path) {
    vector<string> v;
    stringstream ss(s);
    string temp;

    while (getline(ss, temp, ',')) {
        v.push_back(temp);
    }

    if (path == "tr") {
        if (v.size() >= 7) {
            transiction* t = new transiction();
            t->id = v[0];
            t->receiver = v[1];
            t->sender = v[2];
            try {
                t->amount = stof(v[3]);
            } catch (const invalid_argument& e) {
                cerr << "Error converting amount to float: " << e.what() << endl;
                t->amount = 0;
            }
            t->date = v[4];
            t->time = v[5];
            t->status = v[6];
            requestMoney_dialog::trans_read[v[0]] = t;
        } else {
            cerr << "Error: Insufficient data in the input line." << endl;
        }
    } else if (path == "ur") {
        if (v.size() >= 7) {
            user_c* user = new user_c();
            user->user_acc.username = v[0];
            user->user_acc.password = v[1];
            user->user_acc.address = v[2];
            user->user_acc.email = v[3];
            try {
                user->user_acc.age = stoi(v[4]);
            } catch (const invalid_argument& e) {
                cerr << "Error converting age to integer: " << e.what() << endl;
                user->user_acc.age = 0;
            }
            try {
                user->balance = stof(v[5]);
            } catch (const invalid_argument& e) {
                cerr << "Error converting balance to float: " << e.what() << endl;
                user->balance = 0;
            }
            try {
                user->user_acc.status = stoi(v[6]);
            } catch (const invalid_argument& e) {
                cerr << "Error converting status to integer: " << e.what() << endl;
                user->user_acc.status = 0;
            }
            sign_up::users_read[v[0]] = user;
        } else {
            cerr << "Error: Insufficient data in the input line." << endl;
        }
    }
}

void files::read_from_file(const string& file_path) {
    ifstream inputFile(file_path);
    string line;
    bool isFirstLine = true;

    if (!inputFile.is_open()) {
        cerr << "Error: Unable to open the file for reading." << endl;
        return;
    }

    while (getline(inputFile, line)) {
        if (isFirstLine) {
            // Skip the first line (header)
            isFirstLine = false;
            continue;
        }
        if (!line.empty()) {
            if (file_path == "C:/Users/Esc/Documents/GitHub/m7fazty/m7fazty/files/Transiction.csv") {
                split(line, "tr");
            } else if (file_path == "C:/Users/Esc/Documents/GitHub/m7fazty/m7fazty/files/User.csv") {
                split(line, "ur");
            }
        }
    }

    inputFile.close();
}



files::~files() {}
