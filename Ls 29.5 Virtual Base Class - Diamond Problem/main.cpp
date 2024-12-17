// Ls 29.5 Virtual Base Class - Diamond Problem
// https://www.geeksforgeeks.org/virtual-base-class-in-c/

#include <iostream>
using namespace std;

using namespace std;

class A
{
public:
    void display()
    {
        cout << "Hello from A!" << endl;
    }
};

class B : virtual public A
{
public:
};

class C : virtual public A
{
public:
};

class D : public B, public C
{
public:
};

int main()
{
    D object;
    object.display();
}