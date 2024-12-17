// Ls 23 Member Initializers
// Buckys C++ Programming Tutorials - 45 - Member Initializers

#include "Sally.h"
#include <iostream>
using namespace std;

int main()
{

    Sally Object(50, 100);
    Object.Print();
}

/*
When we need to assign passed variables to the private variables of the class, we need to use the member initializer.
It is defined between the constructor (class name) and the {};
It is defined by :
We do not put a semicolon after the end of the list.
If there are multiple variables, they are separated by comma ','

Eg:
class ClassName{
  private:
    int PrivateVar;

  ClassName(int a)
  : PrivateVar(a)  <--- Here
  {
  ...Function...
  }

}

*/