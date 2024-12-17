#include "bodyProfile.h"
#include <iostream>
#include <string>
using namespace std;

bodyProfile::bodyProfile(string sname, string semail, int sage)
{
    setName(sname);   // sname = Set Name
    setEmail(semail); // semail = set email
    setAge(sage);     // sage = set age
};

// SETS
void bodyProfile::setName(string sname)
{
    name = sname;
}
void bodyProfile::setEmail(string semail)
{
    email = semail;
}
void bodyProfile::setAge(int sage)
{
    age = sage;
}

// RETURNS

string bodyProfile::getName()
{
    return name;
}
string bodyProfile::getEmail()
{
    return email;
}
int bodyProfile::getAge()
{
    return age;
}

// FUNCTIONS

void bodyProfile::ageFunction()
{
    if (age < 60)
    {
        youngAgeMessage();
    }

    if (age > 60)
    {
        if (age > 80)
        {
            reallyOldAgeMessage();
        }
        else
        {
            oldAgeMessage();
        }
    }
}

void bodyProfile::youngAgeMessage()
{
    cout << "email: " << email << endl
         << "Mr/Mrs " << name << ", as a " << age << " year old, you should go to work.." << endl;
}

void bodyProfile::reallyOldAgeMessage()
{
    cout << "email: " << email << endl
         << "Mr/Mrs " << name << ", as a " << age << " year old, you are really old mate.. get some rest!" << endl;
}
void bodyProfile::oldAgeMessage()
{
    cout << "email: " << email << endl
         << "Mr/Mrs " << name << ", as a " << age << " year old. Excellent Work!" << endl;
}