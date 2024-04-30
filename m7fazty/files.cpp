#include "files.h"
#include <filesystem>
#include<fstream>
#include<string>
#include<iostream>
#include<unordered_map>
#include<vector>
#include"requestmoney_dialog.h"
using namespace std;
namespace fs = std::filesystem;



files::files() {}


void files::write_in_file(string file_path)
{
    fs::path path = file_path;

    if (!fs::exists(path))
    {
        ofstream file(path);

        if (file.is_open())
        {
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
    if (path.string() == "D:/Projects/2nd Year/DS/m7fazty/m7fazty/files/Transiction.csv") {
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


void files::split(string s)
{
    transiction* t = new transiction();
    vector<string> v;
    string temp = "";

    for (char c : s)
    {
        if (c == ',') {
            v.push_back(temp);
            temp = "";
        } else {
            temp += c;
        }
    }
    v.push_back(temp);

    if (v.size() <= 7)
    {
        t->id=v[0];
        t->receiver = v[1];
        t->sender = v[2];
        if (!v[3].empty())
        {
            try {
                t->amount = stof(v[3]);
            } catch (const invalid_argument& e) {
                cerr << "Error converting amount to float: " << e.what() << endl;
                t->amount = 0;
            }
        }
        else
        {
            t->amount = 0;
        }
        t->date = v[4];
        t->time = v[5];
        t->status = v[6];
    }
    else
    {
        cout << "Error: Insufficient data in the input line." << endl;
    }

    requestMoney_dialog::trans_read[v[0]] = t;

    cout <<requestMoney_dialog::trans_read.size()<<endl;
}


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
    }

    inputFile.close();
}


files::~files() {}
