// Ls 24 Friend Function

#include <iostream>
#include "MyClass.h"
using namespace std;

/*
A Friend Function is not a membered function but can access private and protected members of other class in which it is declared as friend. It is sometimes useful to allow a particular class to access private members of other class.

GOTO MyClass.h for further explaination

*/

void FriendFunction(MyClass &object)
{
    object.PrivateVar = 99;
}

int main()
{
    MyClass MyObject(50);
    MyObject.PrintVar();
    FriendFunction(MyObject);

    // Here we can clearly see that the actual PrivateVar has changed as the function has the access of the memory location.

    MyObject.PrintVar();
}