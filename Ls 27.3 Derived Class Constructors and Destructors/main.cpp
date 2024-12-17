// Ls 27.3 Derived Class Constructors and Destructors
// Buckys C++ Programming Tutorials - 54 - Derived Class Constructors and Destructors

#include <iostream>
using namespace std;

class Mother
{
public:
    Mother()
    {
        cout << "Mother Constructor is called" << endl;
    }
    ~Mother()
    {
        cout << "Mother Destructor is called" << endl;
    }
};

class Child : public Mother
{
public:
    Child()
    {
        cout << "Child Constructor is called" << endl;
    }
    ~Child()
    {
        cout << "Child destructor is called" << endl;
    }
};

int main()
{

    Child Daughter;
    /*
    We have only created a child object, not the mother object

    OUTPUT:
    Mother Constructor is called
    Child Constructor is called
    Child destructor is called
    Mother Destructor is called

    However, mother's constructor and destructor is also called
    ---x---x---
    Explanation:

    Whenever a derived class is called, the base class constructor is called.
    At the end of the program, when the object is destroyed, the derived class destructor is called before, and then the base class destructor is called.

    */
}
