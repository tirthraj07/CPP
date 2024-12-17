// Ls 30.1 Inline Functions

// CodeWithHarry- Inline Functions, Default Arguments & Constant Arguments in C++ | C++ Tutorials for Beginners #17

#include <iostream>
using namespace std;

inline int product(int a, int b)
{
    return a * b;
}

int main()
{
    int a, b;
    cout << "Which two nos do you want to multiply?" << endl;
    cin >> a >> b;
    cout << "Product is " << product(a, b);
}
