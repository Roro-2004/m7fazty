#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <QString>
using namespace std;

class account
{
public:

    QString username;
    QString password;
    QString address;
    int age;
    bool status;

    account();

    //string change_password(string);
};

#endif // ACCOUNT_H
