#ifndef CONTEXT_H
#define CONTEXT_H
#include"user_c.h"
#include"account.h"
class context
{
public:
    context();
    static user_c user;
    static vector<user_c>users;
    static vector<account>accounts;
};

#endif // CONTEXT_H
