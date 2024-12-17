#include "bodyProfile.h"
#include <iostream>
#include <string>

using namespace std;

// Constructor

bodyProfile::bodyProfile(string x, string y, int z)
{
    setName(x);
    setEmail(y);
    setAge(z);
};

// SET
void bodyProfile::setName(string a)
{
    name = a;
};
void bodyProfile::setEmail(string b)
{
    email = b;
};
void bodyProfile::setAge(int c)
{
    age = c;
}

// GET

string bodyProfile::getName()
{
    return name;
};
string bodyProfile::getEmail()
{
    return email;
};
int bodyProfile::getAge()
{
    return age;
};
