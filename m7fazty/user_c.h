#ifndef USER_C_H
#define USER_C_H
#include "account.h"
#include<vector>
#include<unordered_map>
#include<QString>
#include<string>
using namespace std;

class transiction;

class user_c
{
public:
    user_c();
    account user_acc;
    float balance;
    float dept;
    int pin_code;
};

#endif // USER_C_H
