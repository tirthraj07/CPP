// Ls 22.2 Const Objects
// Buckys C++ Programming Tutorials - 44 - const Objects

#include "Sally.h"
#include <iostream>
using namespace std;

/*
Sometimes you need to create an object that you don't want to be able to be
modified So we use the keyword 'const' to define a constant object A const
object doesnt act as a normal object Whenever you create a const object, you
cannot call regular fuctions with it Thus, we need to define a const fuctions
Constant Objects NEED Const Functions
*/

int main()
{

    Sally RegularObject;
    RegularObject.RegularFunction();
    RegularObject.ConstFunction();

    /*
    As we can see, a regular object can call both, regular and constant function.
    It is important to note: if you had a non-const overload of ConstFunction(),
    that one would be called. Refer to Ls 23.3
    */

    const Sally ConstObject;
    ConstObject.ConstFunction();
    ConstObject.RegularFunction();

    // Here it gives an error as I have called a regular function with a constant object.
    // This Remember, Const Object NEED const Member Functions
    // However, a non-const Object can call call both
}