#ifndef ADMIN_C_H
#define ADMIN_C_H
#include "account.h"
#include"user_c.h"
#include<vector>

class admin_c
{
public:
    admin_c();

    account admin_acc;
    vector <user_c> users;
    bool add_acc(account acc);
    bool edit_balance(QString username,float new_balance);
    void actviate(QString);
    void suspend(QString);
     bool delete_acc(QString);
    account View_current_account_data(QString); //helper function
    bool edit_acc(QString ,account);
    /*void traverse_users_tranisctions();
    void traverse_transiction_history(user user);*/
};

#endif // ADMIN_C_H
