// Ls 13 Switch

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int age = 18;

    switch (age)
    {
    case 16:
        cout << "STUDYY!" << endl;
        break;
    case 18:
        cout << "Go get a job u idiot.." << endl;
        break;
    case 21:
        cout << "You got a job, right??" << endl;
        break;
    default: // if no case work. Kinda like e
        cout << "sorry u get nothing... " << endl;
        // no need to add 'break;'.
    }

    return 0;
}

/*
Instead of writting if statements over and over again, we use switch

Syntax:

switch(variable u wanna test){
  case condition:
    statement
    break;
  case another condition:
    statement
    break;
  case another condition:
    statement
    break;
  default:
    statement

}



*/