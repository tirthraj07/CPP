// CodeWithHarry- Pointers to Objects and Arrow Operator in CPP | C++ Tutorials for Beginners #51

#include <iostream>
using namespace std;

/*
We can access a member function in a class using pointers.
To access a member function by pointer, we have to declare a pointer to the object and initialize it
*/

class Complex
{
private:
    int real, img;

public:
    void setData(int real, int img)
    {
        this->real = real;
        this->img = img;
    }
    void getData()
    {
        cout << real << "+" << img << " i" << endl;
    }
};

int main()
{
    // We can create an object and use the functions

    Complex c1;
    c1.setData(5, 10);
    c1.getData();

    // OR assign a pointer to the the memory address of object and call the members

    Complex c2;
    Complex *ptr1 = &c2;
    (*ptr1).setData(15, 10);
    (*ptr1).getData();

    // Instead of (*ptr1). , we can use the arrow operator ->

    Complex c3;
    Complex *ptr2 = &c3;
    ptr2->setData(50, 25);
    ptr2->getData();

    // OR instead, we can initialize an object at runtime by using new keyword

    Complex *ptr3 = new Complex;
    ptr3->setData(10, 20);
    ptr3->getData();

    // We can also create an array of objects

    Complex *ptr4 = new Complex[3];
    ptr4->setData(1, 2);
    ptr4->getData();
    (ptr4 + 1)->setData(2, 3);
    (ptr4 + 1)->getData();
    (ptr4 + 2)->setData(3, 4);
    (ptr4 + 2)->getData();
}