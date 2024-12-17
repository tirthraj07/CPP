// Ls 27.1 Introduction to Inheritance
// Buckys C++ Programming Tutorials - 52 - Inheritance

#include <iostream>
#include "baseClass.h"
#include "derivedClass.h"
using namespace std;

int main()
{
    derivedClass child;
    child.baseFunction();
    /*
    Thus even though, baseFunction is a function of Base Class, it can be accessed by the derived class.
    */
}