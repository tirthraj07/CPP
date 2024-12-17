// Ls 11.2 Stock Market Simulator For Loop
// thenewboston ls 23 C++

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int P, n;
    float temp, r, A, I;

    P = 10000;
    // n
    r = 5;

    for (n = 0; n <= 10; n++)
    {
        temp = (100 + r) / 100;
        temp *= P;
        A = pow(temp, n);
        cout << n << " ---- " << A << endl;
    }

    I = A - P;

    cout << "Total Profit " << I << endl;

    return 0;
}

/*
Compound Interest Formula

A = P(1+r/100)^n


*/