// Ls 26.2 Complex Nos

#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex No1(2, 3);
    Complex No2(4, 5);
    Complex Total;
    Total = No1 + No2;
    cout << "Total is ";
    Total.Print();
}