#ifndef USER_C_H
#define USER_C_H
#include<vector>
#include<unordered_map>
#include"headers.h"
using namespace std;
class transiction;


class user_c
{
public:
    user_c();

    account user_acc;
    float balance;
    int points;
    //unordered_map<string, vector<transiction*>> transactions_map;

    //float balance_calc();
    //float points_calc();
  /*  void transiction_history();
    void search_by_month(string s);
    string encoding(string s);*/
};

#endif // USER_C_H
