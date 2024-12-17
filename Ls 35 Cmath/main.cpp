// Ls 35 Cmath

// https://cplusplus.com/reference/cmath/

// https://www.youtube.com/watch?v=LFu4Qi8OSr0&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=25&ab_channel=CalebCurry

#include <cmath>
#include <iostream>
using namespace std;

int main()
{

    cout << "\n\nSqrt Function" << endl;
    cout << sqrt(25) << endl; // Output 5
    // Refer Macro constants in Notes.txt:
    cout << "\n\nMacro constants" << endl;

    cout << sqrt(-25) << endl;    // Output: -nan --> Not a number --> Imaginary No.
    cout << pow(9, 999) << endl;  // Output: inf --> Infinity
    cout << pow(-9, 999) << endl; // Output: -inf --> -Infinty

    // Fmod and remainder
    cout << "\n\nFmod and remainder Functions" << endl;
    // to get remainder, we used to use %
    // But it only works for int value.

    // cout<<5%2.4<<endl; //error: invalid operands to binary expression ('int' and 'double')

    cout << remainder(5, 2.4) << endl;
    cout << fmod(5, 2.4) << endl;
    // for the most part, remainder and fmod are same.

    // remquo: Compute remainder and quotient
    cout << "\n\nRemquo Function" << endl;
    // Returns the same as remainder, but it additionally stores the quotient internally used to determine its result in the object pointed by q.

    // double remquo(double a, double b, int* q);
    int q;
    double result = remquo(5, 2.4, &q);
    /*
    1. It is mandatory to give all the three arguments otherwise it will give error no matching function for call to ‘remquo’.
    2. It is mandatory to pass third argument a pointer because it stores address of quotient otherwise it will give error ‘remquo(double&, double&, int&)’
    */
    cout << "Remainder is: " << result << endl;
    cout << "Quotient is: " << q << endl;

    // Fmax and Fmin Functions
    cout << "\n\nFmax and Fmin Functions" << endl;
    cout << fmax(20.134, 21) << endl; // returns the max no. in parameter
    cout << fmin(20.134, 21) << endl; // returns the min no. in parameter

    // Fdim --> Positive difference --> The function returns x-y if x>y, and zero otherwise
    cout << "\n\nFdim FUnction" << endl;
    cout << fdim(2, 1) << endl;   // 2>1 --> returns 2-1 = 1
    cout << fdim(1, 2) << endl;   // 1!>2 --> returns 0
    cout << fdim(-2, -1) << endl; //-2!>-1 --> return 0
    cout << fdim(-1, -2) << endl; //-1>-1 --> returns -1-(-2) = 1

    // abs() --> Absolute Value Function
    cout << "\n\nabs() Function" << endl;
    cout << abs(-2 - 1) << endl; // |-2-1| = |-3| = 3
    // cout<<abs((a)-(b))<<endl; Absolute Difference of a and b

    // ceil, floor, trunc, round funtions

    cout << "\n\nceil, floor, trunc, round funtions" << endl;

    cout << ceil(1.5) << endl;    // Output: 2 --> ceil(x) = {n ∈ Z | n >= x }
    cout << floor(1.5) << endl;   // Output: 1 --> floor(x) = {n ∈ Z | n <= x }
    cout << trunc(1.5) << endl;   // Output: 1 --> truc removes the fractional part of the number
    cout << round(1.5) << endl;   // Output: 2 --> rounds a number to the nearest whole number.
    cout << round(1.49) << endl;  // Output: 1
    cout << ceil(-1.5) << endl;   // Output: -1
    cout << floor(-1.5) << endl;  // Output: -2
    cout << trunc(-1.5) << endl;  // Output: -1
    cout << round(-1.5) << endl;  // Output: -2
    cout << round(-1.49) << endl; // Output: -1
}