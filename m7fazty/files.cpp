#include "files.h"
#include <filesystem>
#include<fstream>
#include<string>
#include<iostream>
#include<unordered_map>
using namespace std;
namespace fs = std::filesystem;
files::files() {
}
#include <unordered_map>
#include"requestmoney_dialog.h"
using namespace std;
namespace fs = std::filesystem;


//files::files() {}




void files::write_in_file(string file_path)
{
    // Specify the file path
    fs::path path = file_path;
    ofstream file(path);
    if(path == "D:/m7fazty/m7fazty/files/Transiction.csv"){
        if (file.is_open()){
            file << "Trans ID" <<"," <<"Reciver"<<"," << "Sender" <<","<<"Amount" <<","<<"Date"<<","<<"Time"<<","<<"Status"<< endl;

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


    void files::read_from_file(string file_path){
        unordered_map<string, string> data;
        ifstream inputFile(file_path);
        // Check if the file stream is open
        if (inputFile.is_open()) {
            // Read data from the file
            string line;
            while (getline(inputFile, line)) {
                // Parse the line and extract key-value pairs
                size_t pos = line.find(','); // Assuming the format is "key:value"
                if (pos != string::npos) {
                    string key = line.substr(0, pos);
                    string value = line.substr(pos + 1);
                    // Insert key-value pair into the unordered map
                    data[key] = value;
                }
            }
            // Close the file stream
            inputFile.close();
        } else {
            cout << "Error: Unable to open file '" << file_path << "'." << endl;
        }
    }

    files::~files() {
        for (auto& pair : requestMoney_dialog::trans_data) {
            delete pair.second; // Delete the transiction objects
        }
    }
