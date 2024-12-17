// Ls 07.1 Classes and Objects
// thenewboston ls 12

#include <iostream>
using namespace std;
/*
  If you want main() to use the functions of your class, then you need to make your functions public. If you don't want then use Private.
  Public Access Specifier - public:
  --x--x--

  An Object is how you access the stuff inside your class.

 */

class MyClass
{
public: // Public Access Specifier
    void coolSaying()
    {
        cout << "Just do it!" << endl;
    }
};

int main()
{
    MyClass MyObject;
    MyObject.coolSaying();

    return 0;
}