#include <iostream>
#include "Sally.h"
using namespace std;

void Sally::ConstFunction() const
{
    cout << "I am a const function" << endl;
}

void Sally::ConstFunction()
{
    cout << "I am a regular function" << endl;
}