// Ls 21.1 Pointers

#include <iostream>
using namespace std;

int main()
{
    int fish = 5;
    cout << &fish << endl;

    int *fishPointer; // '*' mark suggests that it not just a variable but it is
                      // a pointer.

    fishPointer = &fish; // No need to give '*' mark again as the compiler
                         // already knows that it is a pointer

    cout << fishPointer << endl;
    cout << *fishPointer << endl; // This gives the value stored in the address stored in fishPointer. AKA De-referencing a pointer

    return 0;
}

/*
in order to find the memory address of variable use '&' before the variable
name. int fish = 5; cout<<&fish<<endl;


when we create a variable, it is stored in the memory of the computer.
when you assign a number/character to the variable then the assigned value is
allocated in the memory set aside by the variable.

What is a Pointer?
In simple words, it does the same job of cout<<&fish, i.e it stores the ADDRESS
of that variable.

A pointer is declared by following method.
int x = 5;

int *xPointer;  // '*' mark suggests that it not just a variable but it is a
pointer. xPointer = &fish; // No need to give '*' mark again as the compiler
already knows that it is a pointer

*/