#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
#include"QString"
using namespace std;

class account
{
public:

    string username;
    string password;
    string address;
    string email;
    int age;
    bool status;

    account();
    //string change_password(string);
};

#endif // ACCOUNT_H
