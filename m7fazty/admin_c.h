#ifndef ADMIN_C_H
#define ADMIN_C_H
#include<vector>
#include"headers.h"


class admin_c
{
public:
    admin_c();

    account admin_acc;
    vector <user_c> users;

    /*void traverse_users_tranisctions();
    void edit_acc(account acc);
    void delete_acc(account acc);
    void add_acc(account acc);
    void traverse_transiction_history(user user);
    void edit_balance(user user);*/
};

#endif // ADMIN_C_H
