#include <iostream>
using namespace std;

/*
Void functions are known as Non-Value Returning functions.
They are “void” due to the fact that they are not supposed to return values. True, but not completely
Void functions do not have a return type, but they can do return values. Some of the cases are listed below:
*/

// 1) A Void Function Can Return: We can simply write a return statement in a void voidFunction().
// In fact, it is considered a good practice (for readability of code) to write a return; statement to indicate the end of the function.

void voidFunction()
{
    cout << "Start of Function" << endl;
    //...Body...
    cout << "End of Function" << endl;

    return; // indicated end of function
}

// 2) A void firstFunction() can return another void function: A void function can also call another void function while it is terminating. For example,

void secondFunction()
{
    cout << "First void function has returned a second void function" << endl;
}

void firstFunction()
{
    return secondFunction();
}

// 3) A void() can return a void value: A void() cannot return a value that can be used. But it can return a value that is void without giving an error. For example,

void voidFun()
{
    cout << "This will print" << endl;

    return (void)"Doesn't Print";
}

int main()
{
    voidFunction();  // Type 1
    firstFunction(); // Type 2
    voidFun();       // Type 3
}