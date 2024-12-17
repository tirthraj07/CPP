// Ls 37.1 Revsiting Array
// 1. Caleb Curry- C++ Programming Tutorial 45 - Intro to Arrays and Vectors
// 2. Caleb Curry C++ Programming Tutorial 46 - Working with Arrays
// 3. Caleb Curry - C++ Programming Tutorial 47 - Passing Arrays to Functions and sizeof Operator

#include <iostream>

/*
In order to have a collection of values of same data type, without declaring the
variables again and again explicitly n number of times, we use built in
data-types to do so

1. Array --> Introduced in C
2. Vector --> Introduced in C++
3. Templatized Array --> Introduced in C++

Array

1. It is a group of variables of similar data types referred to by a single
element.
2. Its elements are stored in a contiguous memory location.
3. The size of the array should be mentioned while declaring it.
4. Array elements are always counted from zero (0) onward.
5. Array elements can be accessed using the position of the element in the
array.
7. The array can have one or more dimensions.

Advantages:-
1. Code Optimization:  we can retrieve or sort the data efficiently.
2. Random access: We can get any data located at an index position.

Disadvantages:-
1. Size Limit: We can store only the fixed size of elements in the array. It
doesn’t grow its size at runtime.
2. To get no. of elements present in the array is not easy and needs extra
calculations

In order to have a dynamically sized collection, c++ introduced vectors

Vectors: (aka 'List' in other programming languages)
Vectors are the same as dynamic arrays with the ability to resize itself
automatically when an element is inserted or deleted, with their storage being
handled automatically by the container.

It has functions like:
size() – Returns the number of elements in the vector.
max_size() – Returns the maximum number of elements that the vector can hold.

Thus the disadvantages of arrays are solved using vectors.

Templatized Array:
It is basically an object that contains an array
It is easiler to get the size of the array using this

There are other custom data structures like stacks, queues, etc

These are the basics, so Lets start with Arrays
*/

int main()
{

    int arr[] = {3, 21, 45, 14, 66, 13, 67, 13}; // integer array.
    // Note, if you already know the values of array before hand, there is no need
    // to explicitly mention the limit of array. C++ does that automatically.

    //==> here arr[] and arr[8] makes no difference.
    // However,if you don't know the values already, then you need to mention the
    // limit while declaring the array

    // eg. int arr[10];

    // Whenever you reference the array, we simply reference arr with [] as the
    // compiler already knows that its an array

    // arr[3] sometimes called arr of 3 points to the 4th element of array as the
    // index starts with 0

    std::cout << arr[3] << std::endl;

    // Size of array generally refers to the total limit of the array

    // To get the Size of array, use sizeof()

    // sizeof(arr)/sizeof(int) OR sizeof(arr)/sizeof(arr[0])

    // sometimes the limit>no of elements in the array, then it will print out '0'
    // (limit-no.element) times as it is the default value of int array if all
    // values are not set

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << "\t";
    }
}
