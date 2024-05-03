#include "files.h"
#include <filesystem>
#include<fstream>
#include<string>
#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;
namespace fs = std::filesystem;



files::files() {}


void files::write_in_file(string file_path)
{
    fs::path path = file_path;

    if (!fs::exists(path))
    {
        ofstream file(path);

        if (path.string() == "D:/m7fazty/m7fazty/files/Transiction.csv" && file.is_open())
        {
            file << "Trans ID" << "," << "Receiver" << "," << "Sender" << "," << "Amount" << "," << "Date" << "," << "Time" << "," << "Status" << endl;

        }
        else if(path.string() == "D:/m7fazty/m7fazty/files/User.csv" && file.is_open()){
            file << "Username" << "," << "Password" << "," << "Address" << "," << "Email" << "," << "Age" << "," << "Balance" << "," << "Status" << endl;
        }
        else
        {
            cerr << "Error: Unable to open the file for writing." << endl;
            return;
        }
        cout << "Headers have been written to the file successfully." << endl;
        file.close();
    }

    ofstream file(path, ios::app);
    if (path.string() == "D:/m7fazty/m7fazty/files/Transiction.csv" && file.is_open()) {
            for (unordered_map<string, transiction*>::value_type & trans : requestMoney_dialog::trans_read) {
                transiction* t = trans.second;
                file << trans.first << "," << t->receiver << "," << t->sender << "," << t->amount << "," << t->date << "," << t->time << "," << t->status << endl;
            }
    }
    else if(path.string() == "D:/m7fazty/m7fazty/files/User.csv" ){
        for (unordered_map<string, user_c*>::value_type & u : sign_up::users_read) {
            user_c* user = u.second;
            file << u.first  << "," << user->user_acc.password << "," << user->user_acc.address << "," << user->user_acc.email << "," << user->user_acc.age << "," << user->balance << "," << user->user_acc.status << endl;
        }
    }
     else cerr << "Error: Unable to open the file for writing." << endl;
    file.close();
    cout << "Data has been written to the file successfully." << endl;
}


void files::split(string s, string path)
{
    transiction* t = new transiction();
    user_c *users = new user_c();
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
    if(path == "tr" ){

    if (v.size() <= 7)
    {
        t->id=v[0];
        t->receiver = v[1];
        t->sender = v[2];
        if (!v[3].empty())
        {
            try
            {
                t->amount = stof(v[3]); //convert the string to a float
            }
            catch (const invalid_argument& e)
            {
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
    }
    else if(path == "ur"){
        if (v.size() <= 7)
        {
            users->user_acc.username=v[0];
            users->user_acc.password = v[1];
            users->user_acc.address = v[2];
            users->user_acc.email = v[3];
            if (!v[4].empty())
            {
                try
                {
                    users->user_acc.age = stoi(v[4]); //convert the string to a int
                }
                catch (const invalid_argument& e)
                {
                    cerr << "Error converting amount to float: " << e.what() << endl;
                    users->user_acc.age = 0;
                }
            }
            else
            {
               users->user_acc.age = 0;
            }
            if (!v[5].empty())
            {
                try
                {
                    users->balance = stof(v[5]); //convert the string to a float
                }
                catch (const invalid_argument& e)
                {
                    cerr << "Error converting amount to float: " << e.what() << endl;
                    users->balance = 0;
                }
            }
            else
            {
                users->balance = 0;
            }
            users->user_acc.status = stoi(v[6]);
        }
        else
        {
            cout << "Error: Insufficient data in the input line." << endl;
        }
        sign_up::users_read[v[0]] = users;
    }
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
            if (file_path == "D:/m7fazty/m7fazty/files/Transiction.csv"){
               files::split(line, "tr");
            }
            else if (file_path == "D:/m7fazty/m7fazty/files/User.csv"){
                files::split(line, "ur");
            }
        }
    }

    inputFile.close();
}


files::~files() {}
