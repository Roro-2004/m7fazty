#ifndef USER_C_H
#define USER_C_H
#include "account.h"
#include<vector>
#include<unordered_map>
using namespace std;

class transiction;

class user_c
{
public:
    user_c();

    account user_acc;
    float balance;
    int points;

    //float balance_calc();
    //float points_calc();
};

#endif // USER_C_H
