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
