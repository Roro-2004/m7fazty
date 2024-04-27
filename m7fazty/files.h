#ifndef FILES_H
#define FILES_H
#include <string>
using namespace std;
class files
{
public:
    files();
    void read_from_file(string file_path);
    void write_in_file(string file_path);
};

#endif // FILES_H
