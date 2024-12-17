#ifndef BODYPROFILE_H
#define BODYPROFILE_H
#include <iostream>
#include <string>
using namespace std;

class bodyProfile
{
public:
    bodyProfile(string sname, string semail, int sage);

    void setName(string sname); // sname = Set Name (instead of it just being x)
    string getName();

    void setEmail(string semail); // semail = set email
    string getEmail();

    void setAge(int sage); // sage = set age
    int getAge();

    void ageFunction();

    void oldAgeMessage();
    void youngAgeMessage();
    void reallyOldAgeMessage();

private:
    string name, email;
    int age;
};

#endif
