// Ls 16 Default arguments
// thenewboston ls 28 C++

#include <iostream>
using namespace std;

// To make default arguments, go to the function prototype and give the variable a value.
int volume(int l = 1, int w = 1, int h = 1); // Here 1 is a default value.
// If the user doesn't enter any values expilicitly then the program is going to use these default values.

int main()
{

    cout << volume(5) << endl; // If the user enters only 1 value in the function, then the programs automatically allots the value to the first parameter.(here 5 is alloted to 'l') Value of h is default 1 as it is not given a value.

    cout << volume(5, 6) << endl; // If the user enters 2 values in the function, then the programs automatically allots the values to the first and the second parameter.(here 5 is allotted to 'l' , 6 is allotted to to 'w'. Value of h is default 1 as it is not given a value. )

    return 0;
}

// Do not give values to the variables here.
int volume(int l, int w, int h)
{
    return l * w * h;
}