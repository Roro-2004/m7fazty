#ifndef TRANSICTION_H
#define TRANSICTION_H

#include<string>
#include"user_c.h"


class user_c;

using namespace std;
// comment

struct date{
    int day,month,year;
};

class transiction
{
public:
    transiction();

    string id;
    user_c  sender;
    user_c  receiver;
    float amount;
    date trans_date;
    bool status;

    //bool status();
};

#endif // TRANSICTION_H
