#ifndef USER_C_H
#define USER_C_H
#include "account.h"
#include<vector>
using namespace std;

class transiction;

class user_c
{
public:
    user_c();

    account user_acc;
    float balance;
    int points;
    vector <transiction*> transictions;

    //float balance_calc();
    //float points_calc();
    //void transiction_history();
};

#endif // USER_C_H
