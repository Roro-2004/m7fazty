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
void admin_c:: actviate(QString username)
{
    for (int accounts_idx = 0; accounts_idx < context::accounts.size(); accounts_idx++)
    {
        if (username == context::accounts[accounts_idx].username)
        {
            context::accounts[accounts_idx].status = true;
            break;
        }
    }
}
void admin_c::suspend(QString username)
{
    for (int accounts_idx = 0; accounts_idx < context::accounts.size(); accounts_idx++)
    {
        if (username == context::accounts[accounts_idx].username)
        {
            context::accounts[accounts_idx].status = false;
            break;
        }
    }
}
bool admin_c::delete_acc(QString username)
{
    bool is_exist=false;
    for (int accounts_idx = 0; accounts_idx < context::accounts.size(); accounts_idx++)
    {
        if (username == context::accounts[accounts_idx].username)
        {
            context::accounts.erase(context::accounts.begin() + accounts_idx);
            is_exist = true;
            break;
        }
    }
    return is_exist;  // if false tell him that user is not exist already
}

account admin_c::View_current_account_data(QString Current_user_name)
{
    account acc;
    for (int accounts_idx = 0; accounts_idx < context::accounts.size(); accounts_idx++)
    {
        if (Current_user_name == context::accounts[accounts_idx].username)
        {
            acc = context::accounts[accounts_idx];
            break;
        }
    }
    return acc;
}
bool admin_c::edit_acc(QString previous_username, account acc)
{
    bool is_exist = false;
    if(previous_username !=acc.username)    //to avoid confliction if admin will not change the username
    {
        for (int accounts_idx = 0; accounts_idx < context::accounts.size(); accounts_idx++)
        {
            if (acc.username == context::accounts[accounts_idx].username)
            {
                is_exist = true;
                break;
            }
        }
    }
    if ((is_exist == false) || (previous_username == acc.username))
    {
        for (int accounts_idx = 0; accounts_idx < context::accounts.size(); accounts_idx++)
        {
            if (previous_username == context::accounts[accounts_idx].username)
            {
                context::accounts[accounts_idx] = acc;
            }
        }
    }

    return is_exist;    //check on it inside the function of the button and if the username is found so it is will be, so  true show a msg that asks the admin to enter another username
}
