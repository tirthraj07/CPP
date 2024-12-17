// Ls 28.2 new and delete keywords
// https://www.geeksforgeeks.org/new-and-delete-operators-in-cpp-for-dynamic-memory/

#include <iostream>
using namespace std;

/*
new operator
The new operator denotes a request for memory allocation on the Free Store. If sufficient memory is available, a new operator initializes the memory and returns the address of the newly allocated and initialized memory to the pointer variable.

Syntax to use new operator

data-type pointer-variable = new data-type;

Here, the pointer variable is the pointer of type data-type. Data type could be any built-in data type including array or any user-defined data type including structure and class.

*/

int main()
{
    /*
    Previously:
      int a = 4;
      int* ptr = &a;
      cout<<"Value of a is "<<*ptr;

    Here we had to initialize a value 'a' and then declare a pointer to point to that memory address of a

    Here, the purpose of 'a' is only to store the value 4.
    So instead, we can dynamically assign a value without declaring a seperate variable.
    */

    int *ptr = new int(4);
    cout << "Value stored at " << ptr << " is " << *ptr << endl;
    /*
    delete operator
    Since it is the programmer’s responsibility to deallocate dynamically allocated memory, programmers are provided delete operator in C++ language.
    Syntax:

    // Release memory pointed by pointer-variable
    delete pointer-variable;

    */

    delete ptr;
    cout << *ptr; // now the value stored in ptr is not 4 as it has been deallocated
}