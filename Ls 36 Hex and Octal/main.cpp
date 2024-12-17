// Ls 36 Hex and Octal
// Caleb Curry - C++ Programming Tutorial 29 - Hex and Octal

#include <iostream>
using namespace std;

int main()
{

    int decimal = 30;        //(30)10 = 30
    cout << decimal << endl; // output 30

    int hexadecimal = 0x28;      // 0x(28) ---> Hexadeimal --> 28H = (40)10
    cout << hexadecimal << endl; // output 40

    int octal = 027; // 0(27) --> Octal --> (27)8 = (23)10
    cout << octal << endl;

    // Convert Decimal to Hex

    decimal = 30;
    cout << hex << decimal << endl;
    // hex-->keyword in C std: converts decimal to hexadecimal

    // Convert Decimal to Octal
    decimal = 30;
    cout << oct << decimal << endl;
    // oct-->keyword in C std: converts decimal to octal
}