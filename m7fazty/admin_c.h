#ifndef ADMIN_C_H
#define ADMIN_C_H
#include "account.h"
#include"user_c.h"
#include<vector>
#include<unordered_map>
#include<string>
using namespace std;


class admin_c
{
public:
    admin_c();

    bool add_acc(user_c *u);
    bool edit_balance(string username,float new_balance);
    void actviate(string);
    void suspend(string);
    bool delete_acc(string);
    account View_current_account_data(string); //helper function
    bool edit_acc(string s,user_c *u);
};

#endif // ADMIN_C_H
