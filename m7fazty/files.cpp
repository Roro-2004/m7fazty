#include "files.h"
#include <filesystem>
#include<fstream>
#include<string>
#include<iostream>
#include<unordered_map>
#include<vector>
#include <unordered_map>
#include"requestmoney_dialog.h"
using namespace std;
namespace fs = std::filesystem;
files::files() {
}
void files::write_in_file(string file_path)
{
    // Specify the file path
    fs::path path = file_path;

    // Check if the file exists
    if (!fs::exists(path))
    {
        // Open the file in write mode
        ofstream file(path);

        if (file.is_open())
        {
            // Write the headers
            file << "Trans ID" << "," << "Receiver" << "," << "Sender" << "," << "Amount" << "," << "Date" << "," << "Time" << "," << "Status" <<","<<endl;
            file << "Trans ID" << "," << "Receiver" << "," << "Sender" << "," << "Amount" << "," << "Date" << "," << "Time" << "," << "Status" << endl;
            cout << "Headers have been written to the file successfully." << endl;
            file.close();
        }
        else
        {
            cerr << "Error: Unable to open the file for writing." << endl;
            return;
        }
    }

    ofstream file(path, ios::app);

    if(path == "D:/m7fazty/m7fazty/files/Transiction.csv"){

        if (file.is_open()){
            cout<< requestMoney_dialog::trans_data.size();
            for (unordered_map<string, transiction*>::value_type & trans : requestMoney_dialog::trans_data) {
                transiction* t = trans.second;
                file << trans.first << "," << t->receiver << "," << t->sender << "," << t->amount << "," << t->date << "," << t->time << "," << t->status <<","<< endl;
            }

        if (file.is_open()){
            cout<< requestMoney_dialog::trans_data.size()<<endl;
            for (unordered_map<string, transiction*>::value_type & trans : requestMoney_dialog::trans_data) {
                 transiction* t = trans.second;
                 file << trans.first << "," << t->receiver << "," << t->sender << "," << t->amount << "," << t->date << "," << t->time << "," << t->status << endl;
            }
            file.close();
            cout << "Data has been written to the file successfully." << endl;
        }
        else cerr << "Error: Unable to open the file for writing." << endl;
    }
}
void files::split(string s) {


void files::split(string s)
{
    transiction* t = new transiction();
    vector<string> v;
    string temp = "";
    for (char c : s) {

    for (char c : s)
    {
        if (c == ',') {
            v.push_back(temp);
            temp = "";
        } else {
            temp += c;
        }
    }
    //v.push_back(temp);
    transiction* t = new transiction();
    if (v.size() >= 6) {
        t->id = v[0];
    v.push_back(temp);

    if (v.size() <= 7)
    {
        t->id=v[0];
        t->receiver = v[1];
        t->sender = v[2];
        if (!v[3].empty()) {
        if (!v[3].empty())
        {
            try {
                t->amount = stof(v[3]);
            } catch (const invalid_argument& e) {
                cerr << "Error converting amount to float: " << e.what() << endl;
                t->amount = 0;
            }
        } else {
        }
        else
        {
            t->amount = 0;
        }
        t->date = v[4];
        t->time = v[5];
        t->status = v[6];
    } else {
    }
    else
    {
        cout << "Error: Insufficient data in the input line." << endl;
    }

    // Insert the transiction object into the trans_data map
    cout <<requestMoney_dialog::trans_read.size()<<endl;
}

void files::read_from_file(string file_path) {
    ifstream inputFile(file_path); // Open the file
    if (inputFile.is_open()) {
        string line;

        // Output headers if the file path matches the specific file
        if (file_path == "D:/m7fazty/m7fazty/files/Transiction.csv") {
            cout << "Trans ID Receiver Sender Amount Date Time Status" << endl;
        }

        bool firstLine = true;
        while (getline(inputFile, line)) {
            if (firstLine) {
                firstLine = false;
                continue; // Skip the first line (header)
            }
            split(line); // Call the split function for each line

void files::read_from_file(string file_path){
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
        else
        {
            files::split(line);
        }
        inputFile.close();
        cout << "Total records in the map: " << requestMoney_dialog::trans_data.size() << endl;
    } else {
        cerr << "Error: Unable to open the file for reading." << endl;
    }
}

files::~files() {
    /*for (auto& pair : requestMoney_dialog::trans_data) {
            delete pair.second; // Delete the transiction objects
        }*/

}

    inputFile.close();
}


files::~files() {}
