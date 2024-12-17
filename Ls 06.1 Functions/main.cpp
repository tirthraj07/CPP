// Ls 06.1 Functions
// thenewboston C++ ls 8

/*
  INT Funtion --> returns an integer
  VOID Funtion --> returns nothing

  --x--x--x--
  Prototyping a Funtion :
  Instead of writing all the functions above main, we can technically tell the
  computer before hand that there is a funtion later and so it wont give an
  error message

 */

#include <iostream>
using namespace std;

void Test(); // Prototyping a Function

int main()
{
    Test(); // Calling the function
    return 0;
}

void Test() // The actual Function
{
    cout << "Hello World" << endl;
}
