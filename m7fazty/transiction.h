#ifndef TRANSICTION_H
#define TRANSICTION_H
#include<string>
#include"user_c.h"
using namespace std;
class user_c;

class transiction
{
public:
    transiction();

    string id;
    string  sender;
    string  receiver;
    float amount;
    string date;
    string time;
    string status;
};

#endif // TRANSICTION_H
