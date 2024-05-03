#ifndef FILES_H
#define FILES_H
#include <string>
#include"transiction.h"
using namespace std;

class files
{
public:
    files();
    void static read_from_file( const string &file_path);
    void static write_in_file( string file_path);
    void static split(const string &s, const string &path);
    ~files();
};

#endif // FILES_H
