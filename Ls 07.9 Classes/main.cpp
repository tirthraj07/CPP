#include "bodyProfile.h"
#include <iostream>
#include <string>
using namespace std;
// Prototypes
string askName();
string askEmail();
int askAge();

// MAIN
int main()
{
    string name, email;
    int age;

    name = askName();
    email = askEmail();
    age = askAge();

    bodyProfile body(name, email, age);

    body.ageFunction();
}

// FUNCTIONS
string askName()
{
    string a;
    cout << "Whats your name? \n>> ";
    cin >> a;
    cout << "\n";
    return a;
}

string askEmail()
{
    string a;
    cout << "Whats your email? \n>> ";
    cin >> a;
    cout << "\n";
    return a;
}

int askAge()
{
    int a;
    cout << "Whats your age? \n>> ";
    cin >> a;
    cout << "\n";
    return a;
}
