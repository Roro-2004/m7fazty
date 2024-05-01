#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
using namespace std;

class account
{
public:

    string username;
    string password;
    string address;
    int age;
    bool status;

    account();
    //string change_password(string);
};

#endif // ACCOUNT_H
