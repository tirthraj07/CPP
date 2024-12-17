// Ls 14 Logical Operators

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int age = 23;
    int money = 6;

    if (age > 21 || money > 500)
    {
        cout << "You are allowed in." << endl;
    }

    return 0;
}

/*
Instead of netting if statements we can use Logical Operators to do it in one line.


&& --> AND gate  - checks if all the conditions are met.
|| --> OR gate - checks whether any one conditions is met.

Syntax:

AND age
if(test && test && test && test){
  statement
}


OR gate
if(test || test || test || test){
  statement
}
*/