#include "Sally.h"
#include <iostream>
using namespace std;

Sally::Sally(int a, int b)
    : RegularVar(a), ConstVar(b)
{
}

void Sally::Print()
{
    cout << "Regular Variable is " << RegularVar << endl;
    cout << "Const Variable is " << ConstVar << endl;
}