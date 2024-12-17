// Ls 10 Assignment and Increment Operators
// thenewboston ls 21 C++

#include <iostream>
using namespace std;

/*
Assignments Operators:

int a = 10
  a += 5 --> a = a + 5 = 15

  a -= 5 --> a = a - 5 = 5

  a *= 5 --> a = a * 5 = 50

  a /= 5 --> a = a/5 = 2

  a %= 3 --> a = a%3 = 1

Increment Operators:

int x = 20
  x++ = x+1
  ++x = 1+x

same for : x-- and --x .

*/

int main()
{
    // difference between x++ and ++x
    int x = 20;
    cout << "x++" << endl;
    cout << x++ << endl; // 1 is added to x AFTER the line is EXECUTED.
    cout << x << endl;

    cout << "++x" << endl;
    x = 20;
    cout << ++x << endl; // here 1 is added to x BEFORE and then it is EXECUTED.
    cout << x << endl;

    return 0;
}