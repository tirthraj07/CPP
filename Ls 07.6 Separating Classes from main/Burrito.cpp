/*
First we need to include our header file for the class.
Here #include "Burrito.h"
then include all the other necessary files.

*/

#include "Burrito.h"
#include <iostream>
using namespace std;

/*
This is where we are going to build our Classes.
This is where all the body goes.
--x--x--x--

:: -> Binary Scope Resolution Operator

*/

Burrito::Burrito()
{
    cout << "I am a banana" << endl;
};

/*
Here the line 'Burrito::Burrito(){}' says that there the function Burrito() is in the class Burrito.
As the Class name is the same as the function name, we know it is a Constructor.
However, this is not only applicable for Constructor but also other Functions as well.

*/
