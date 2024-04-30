#include "user_c.h"
#include"context.h"
user_c::user_c() {}
QString user_c::View_current_balance()
{
    QString Current_balance;
    for (int usersidx = 0; usersidx <context:: users.size(); usersidx++)
    {
        if (this->user_acc.username == context::users[usersidx].user_acc.username)
        {
            Current_balance =QString::number(context::users[usersidx].balance);
            break;
        }

    }
    return Current_balance;
}
