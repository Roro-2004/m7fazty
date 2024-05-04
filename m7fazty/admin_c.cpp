#include "admin_c.h"
#include<QString>
#include <string>
#include"sign_up.h"
using namespace std;

admin_c::admin_c() {}


bool admin_c::add_acc(user_c *u)
{
    bool is_exist = false;
        if (sign_up::users_read[u->user_acc.username] != NULL)
        {
            is_exist = true;
        }

    if (is_exist==false)
    {
        u->balance=0;
        u->user_acc.status = true; //activated
        sign_up::users_read[u->user_acc.username] = u;
    }

    return is_exist;     //check on it inside the function of the button and if the username is found so it is will be true, so show a msg that asks the admin to enter another username
}


bool admin_c::edit_balance(string username,float new_balance)   //just convert the string u get from the box to a float and pass it to that function
{
    bool is_exist=false;
    if (sign_up::users_read[username] != NULL){
        is_exist = true;
        sign_up::users_read[username]->balance=new_balance;
    }
    return is_exist;
}


void admin_c:: actviate(string username)
{
    if (sign_up::users_read[username] != NULL){
        sign_up::users_read[username]->user_acc.status=true;
    }
}


void admin_c::suspend(string username)
{
    if (sign_up::users_read[username] != NULL){
        sign_up::users_read[username]->user_acc.status=false;
    }
}


bool admin_c::delete_acc(string username)
{
    bool is_exist=false;

    if (sign_up::users_read[username] != NULL){
    is_exist = true;
        sign_up::users_read.erase(username);
    }
    return is_exist;  // if false tell him that user is not exist already
}


bool admin_c::edit_acc(string previous_username, user_c *u)
{
    bool is_exist = false;
    if(previous_username !=u->user_acc.username)    //to avoid confliction if admin will not change the username
    {

        if (sign_up::users_read[u->user_acc.username]!= NULL)
            {
                is_exist = true;
            }
    }

    if ((is_exist == false) || (previous_username == u->user_acc.username))
    {
        u->balance=sign_up::users_read[previous_username]->balance;
        u->user_acc.status=sign_up::users_read[previous_username]->user_acc.status;
        sign_up::users_read.erase(previous_username);
        sign_up::users_read[u->user_acc.username]= u;

    }

    return is_exist;    //check on it inside the function of the button and if the username is found so it is will be, so  true show a msg that asks the admin to enter another username
}
