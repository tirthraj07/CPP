// Ls 12 Do While Loops
// thenewboston ls 22 C++

#include <iostream>
#include <cmath>
using namespace std;

// It ensures that you run your code atleast one time before testing the condition

int main()
{

    int x = 99;

    do
    {
        cout << x << endl; // This wont happen in other loops.
        x++;
    } while (x < 10);

    return 0;
}

/*
Syntax

do{
 some stuff..
}while(condition);


*/