#include <iostream>
#include "myClass.h"
using namespace std;

myClass::myClass() {}
myClass::myClass(int a)
    : num(a)
{
}

myClass myClass::operator+(myClass object2)
{
    myClass result;
    result.num = this->num + object2.num;
    return result;
}