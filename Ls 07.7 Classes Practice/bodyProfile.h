#ifndef BODYPROFILE_H
#define BODYPROFILE_H
#include <iostream>
#include <string>
using namespace std;

class bodyProfile
{
public:
    bodyProfile(string x, string y, int z);

    void setName(string a);
    string getName();

    void setEmail(string b);
    string getEmail();

    void setAge(int c);
    int getAge();

private:
    string name, email;
    int age;
};

#endif