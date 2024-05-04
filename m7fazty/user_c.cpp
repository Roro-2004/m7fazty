#include "user_c.h"
#include <iostream>
#include <vector>
#include <sstream>
#include<string>
using namespace std;

user_c::user_c() {}

user_c::user_c(float val, account acc)
{
    balance = val;
    user_acc = acc;
}

