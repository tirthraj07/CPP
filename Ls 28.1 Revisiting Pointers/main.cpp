// Ls 28.1 Revisiting Pointers
// CodeWithHarry - Revisiting Pointers: new and delete Keywords in CPP | C++ Tutorials for Beginners #50

// https://www.geeksforgeeks.org/cpp-pointers/#:~:text=Pointers%20are%20symbolic%20representations%20of,the%20main%20use%20of%20pointers.

// https://www.geeksforgeeks.org/new-and-delete-operators-in-cpp-for-dynamic-memory/

#include <iostream>
using namespace std;

int main()
{

    // Basics:
    int a = 4;
    int *ptr; // ptr can point to an address which holds int data
    ptr = &a;
    // OR int* ptr = &a;
    cout << "Value of a is " << a << endl;
    cout << "Value of a is " << *ptr << endl;
    cout << "Location of a is " << &a << endl;
    cout << "Location of a is " << ptr << endl;
}
