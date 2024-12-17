// Ls 22.3 Overloading a constant function

// https://stackoverflow.com/questions/53365348/constant-function-is-called-by-non-constant-object-why

#include <iostream>
#include "Sally.h"
using namespace std;

int main()
{

    const Sally ConstObject;
    ConstObject.ConstFunction();

    /*
    As we know, Const Objects need const Functions
    However, A regular Object can also call const Functions
    Sometimes we want regular objects to do different functions when they call const objects
    Thus we overload the const function
    Hence, whenever now, we call const function with a non-const object, it performs a different functions than the regular object

    This is overloading a const function
    */

    Sally RegularObject;
    RegularObject.ConstFunction();
}