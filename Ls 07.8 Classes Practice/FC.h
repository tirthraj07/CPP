#ifndef FC_H
#define FC_H
#include <iostream>
#include <string>
using namespace std;

class FC
{
public:
    FC(string x, string y);

    // void setName(string x);
    string getName();

    // void setLeague(string y);
    string getLeague();

private:
    string name, league;
};

#endif
