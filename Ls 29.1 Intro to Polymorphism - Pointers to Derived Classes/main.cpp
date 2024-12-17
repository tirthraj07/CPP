// Ls 29.1 Intro to Polymorphism - Pointers to Derived Classes

// CodeWithHarry- Polymorphism in C++ | C++ Tutorials for Beginners #54
// https://www.geeksforgeeks.org/cpp-polymorphism/
// https://www.geeksforgeeks.org/base-class-pointer-pointing-to-derived-class-object/

#include <iostream>
using namespace std;

class baseClass
{

public:
    int var_base;
    void display()
    {
        cout << "The value of var base is " << var_base << endl;
    }
};

class derivedClass : public baseClass
{

public:
    int var_derived;
    void display()
    {
        cout << "The value of var base is " << var_base << endl;
        cout << "The value of var derived is " << var_derived << endl;
    }
};

int main()
{
    derivedClass obj_derived;
    derivedClass *derived_ptr = &obj_derived;
    derived_ptr->var_base = 10;
    derived_ptr->var_derived = 20;
    derived_ptr->display();

    /*
    When a derived class pointer points to derived class object, the derived class display() function is called instead of the baseClass.

    If we wanted to access display() function of base Class using the derived class object, then we point a base class pointer to a derived class object.
    */

    derivedClass obj2_derived;
    baseClass *base_ptr = &obj2_derived;
    base_ptr->var_base = 99;
    base_ptr->display();

    /*
    As we can see, base_ptr is pointing to derived class object.
    base_ptr calls the display() function of base class rather than derived class.
    Using this, we can access the member functions of base class which might have been overloaded in the derived class.

    However base_ptr linked to derived object cannot call the derived member functions or variables
    e.g:
    */

    // base_ptr->var_derived = 50; //Throws an error: no member named 'var_derived' in 'baseClass'
}