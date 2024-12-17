// Ls 21.3 Arrow Member Selection Operator

#include <iostream>
#include "sally.h"
using namespace std;

int main()
{

    sally salObj;

    sally *sallyPointer = &salObj;

    salObj.printCrap();

    sallyPointer->printCrap();

    // whenever we use a pointer to access stuff inside the class then use ' -> ' (Arrow Member Selection Operator)

    return 0;
}