// Ls 37.6 STL Arrays
// Caleb Curry - C++ Programming Tutorial 54 - STL Array

// Caleb Curry - C++ Programming Tutorial 55 - STL Arrays in Practice

#include <iostream>
#include <array>
using std::cout, std::cin, std::array, std::endl;

/*
STL Arrays or Templatized arrays are hybrid of arrays and vectors.

Syntax: std::array<data-type, limit> name;

Like Arrays, they are statically sized.
But when passed through as functions, they remember their size (more specifically, their 'limit')

eg. name.size()

When passed through functions, they are passed as values instead of pointers.

*/

void printArray(std::array<int, 5> &arr)
{
    int length = arr.size();
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    printArray(arr);
}
