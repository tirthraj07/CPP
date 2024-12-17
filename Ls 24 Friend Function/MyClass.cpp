#include <iostream>
#include "MyClass.h"
using namespace std;

MyClass::MyClass(int a) : PrivateVar(a) {}

void MyClass::PrintVar()
{
    cout << "Private Var is now " << PrivateVar << endl;
}
