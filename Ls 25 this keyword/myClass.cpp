#include "myClass.h"
#include <iostream>
using namespace std;

myClass::myClass(int a) : var(a) {}

void myClass::print()
{
    cout << "var = " << var << endl;                 // Here the compiler automatically assumes that the var is of this class
    cout << "this->var = " << this->var << endl;     // Here we explicitly tell the compliler that the var is of this class
    cout << "(*this).var = " << (*this).var << endl; // Another way of explicit call of var
}