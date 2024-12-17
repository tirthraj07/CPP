// Ls 26.1 Operator Overloading

#include "myClass.h"
#include <iostream>
using namespace std;

int main()
{
    myClass Num1(2);
    myClass Num2(3);
    myClass Total;
    Total = Num1 + Num2;
    cout << Total.num;
}
