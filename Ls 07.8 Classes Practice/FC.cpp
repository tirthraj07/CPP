#include "FC.h"
#include <iostream>
#include <string>

using namespace std;

FC::FC(string x, string y)
{
    name = x;
    league = y;
};
/*
void FC::setName(string x){
  name = x;
}
void FC::setLeague(string y){
  league = y;
}
*/
string FC::getName()
{
    return name;
}

string FC::getLeague()
{
    return league;
}
