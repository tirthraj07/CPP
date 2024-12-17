#include "Sally.h"
#include <iostream>
using namespace std;

Sally::Sally()
{
    cout << "I am the constructor!" << endl;
}

Sally::~Sally()
{
    cout << "I am the deconstructor! " << endl;
}

// A deconstructor neither can have parameters not can return any value. You also define it as void.
