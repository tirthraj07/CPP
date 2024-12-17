#include "Sally.h"
#include <iostream>

using namespace std;

void Sally::RegularFunction() { cout << "I am a Regular Function" << endl; }

void Sally::ConstFunction() const
{
    cout << "I am a Constant Function" << endl;
}
