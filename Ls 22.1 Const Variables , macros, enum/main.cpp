#include <iostream>

// Refer Method 3:
#define A 10
// #define <variable-name> <value>
#define min(a, b) (((a) > (b)) ? (a) : (b))

using namespace std;

int main()
{

    int x = 13;
    x = 15;
    cout << x << endl;

    // Here the value of x can be changed in the program itself
    // Sometimes you want the value of the variable to not change

    // Method 1: use the constant 'const' before initialising it.

    const int y = 13;
    y = 15; // Here it gives an error as the value of y cannot be reassigned.

    cout << y << endl;

    // Method 2: We can use enum keyword aswell
    /*
    Enumerated Types or Enums in C++
    Enumerated type (enumeration) is a user-defined data type which can be assigned some limited values.
    These values are defined by the programmer at the time of declaring the enumerated type.
    It is also assigned by zero the same as the array. It can also be used with switch statements.
    */

    enum
    {
        z = 100
    };
    cout << z << endl;
    z = 200; // error: expression is not assignable

    // Method 3: Use of macros
    // A macro is a piece of code in a program that is replaced by the value of the macro.
    // Macro is defined by #define directive.
    // Whenever a macro name is encountered by the compiler, it replaces the name with the definition of the macro.
    // Macro definitions need not be terminated by a semi-colon(;).

    cout << A << endl;
    A = 200; // error: expression is not assignable

    // These macros are the same as a function call. It replaces the entire code instead of a function name.
    // For eg: #define min(a, b) (((a) > (b)) ? (a) : (b))
    cout << min(20, 30) << endl;

    return 0;
}