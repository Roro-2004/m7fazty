#include "files.h"
#include <filesystem>
#include<fstream>
#include<string>
#include<iostream>
#include<unordered_map>
#include<vector>
#include "transiction.h"
#include <unordered_map>
#include"requestmoney_dialog.h"
using namespace std;
namespace fs = std::filesystem;
files::files() {
}
using namespace std;
namespace fs = std::filesystem;


void files::write_in_file(string file_path)
{
    cout<<"the no f data in file is "<<requestMoney_dialog::trans_data.size()<<endl;
    // Specify the file path
    fs::path path = file_path;
    ofstream file(path);
    if(path == "D:/m7fazty/m7fazty/files/Transiction.csv"){
        if (file.is_open()){
            file << "Trans ID" <<"," <<"Reciver"<<"," << "Sender" <<","<<"Amount" <<","<<"Date"<<","<<"Time"<<","<<"Status"<< endl;

            for (auto &trans : requestMoney_dialog::trans_data) {
                cout<<"in the loop\n";
                transiction* t = trans.second;
                file << trans.first << "," << t->receiver << "," << t->sender << "," << t->amount << "," << t->date << "," << t->time << "," << t->status << endl;
            }
            cout << "Data has been written to the file successfully." << endl;
        }
        else cerr << "Error: Unable to open the file for writing." << endl;
    }
    file.close();
}



void files::split(string s) {
    vector<string> v;
    string temp = "";
    for (char c : s) {
        if (c == ',') {
            v.push_back(temp);
            temp = "";
        } else {
            temp += c;
        }
    }
    v.push_back(temp);
    transiction* t = new transiction();
    if (v.size() >= 7) {
        t->receiver = v[1];
        t->sender = v[2];
        if (!v[3].empty()) {
            try {
                t->amount = stof(v[3]);
            } catch (const invalid_argument& e) {
                cerr << "Error converting amount to float: " << e.what() << endl;
                t->amount = 0;
            }
        } else {
            t->amount = 0;
        }
        t->date = v[4];
        t->time = v[5];
        t->status = v[6];
    } else {
        cout << "Error: Insufficient data in the input line." << endl;
    }

    // Insert the transiction object into the trans_data map
    requestMoney_dialog::trans_data[v[0]] = t;
}


void files::read_from_file(string file_path) {
    ifstream inputFile(file_path); // Open the file
    if (inputFile.is_open()) {
        string line;
        if (file_path == "D:/m7fazty/m7fazty/files/Transiction.csv") {
            cout << "Trans ID" << " " << "Receiver" << " " << "Sender" << " " << "Amount" << " " << "Date" << " " << "Time" << " " << "Status" << endl;
        }
        bool firstLine = true;
        while (getline(inputFile, line)) {
            if (firstLine) {
                firstLine = false;
                continue;
            }
            split(line); // Call the split function on the current object
        }
        inputFile.close();
    } else {
        cerr << "Error: Unable to open the file for reading." << endl;
    }
}



    files::~files() {
        /*for (auto& pair : requestMoney_dialog::trans_data) {
            delete pair.second; // Delete the transiction objects
        }*/

    }
