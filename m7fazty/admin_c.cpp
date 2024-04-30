#include "admin_c.h"
#include"context.h"
#include<QString>
admin_c::admin_c() {}
bool admin_c::add_acc(account acc)
{
    bool is_exist = false;
    for (int accounts_idx = 0; accounts_idx < context::accounts.size(); accounts_idx++)
    {
        if (acc.username == context::accounts[accounts_idx].username)
        {
            is_exist = true;
            break;
        }
    }

    if (is_exist==false)
    {
        context::accounts.push_back(acc);
    }

    return is_exist;     //check on it inside the function of the button and if the username is found so it is will be true, so show a msg that asks the admin to enter another username
}
bool admin_c::edit_balance(QString username,float new_balance)   //just convert the string u get from the box to a float and pass it to that function
{
    bool is_exist=false;
    for (int users_idx = 0; users_idx < context::users.size(); users_idx++)
    {
        if (username == context::users[users_idx].user_acc.username)
        {
            context::users[users_idx].balance = new_balance;
            is_exist=true;
            break;
        }
    }
    return is_exist;
}
void admin_c:: actviate(QString Username)
{
    for (int accounts_idx = 0; accounts_idx < context::accounts.size(); accounts_idx++)
    {
        if (Username == context::accounts[accounts_idx].username)
        {
            context::accounts[accounts_idx].status = true;
            break;
        }
    }
}
void admin_c::suspend(QString Username)
{
    for (int accounts_idx = 0; accounts_idx < context::accounts.size(); accounts_idx++)
    {
        if (Username == context::accounts[accounts_idx].username)
        {
            context::accounts[accounts_idx].status = false;
            break;
        }
    }
}
bool admin_c::delete_acc(QString Username)
{
    bool is_exist=false;
    for (int accounts_idx = 0; accounts_idx < context::accounts.size(); accounts_idx++)
    {
        if (Username == context::accounts[accounts_idx].username)
        {
            context::accounts.erase(context::accounts.begin() + accounts_idx);
            is_exist = true;
            break;
        }
    }
    return is_exist;  // if false tell him that user is not exist already
}
