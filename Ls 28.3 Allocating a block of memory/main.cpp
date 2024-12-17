// Ls 28.3 Allocating a block of memory

#include <iostream>
using namespace std;

int main()
{
    /*
    To allocate a block/ chuck of memory
    */
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    cout << "Value at arr[0] is " << arr[0] << endl;
    cout << "Value at arr[1] is " << arr[1] << endl;
    cout << "Value at arr[2] is " << arr[2] << endl;

    delete[] arr; // deletes dynamically allocated memeory

    cout << "Value at arr[0] is " << arr[0] << endl;
    cout << "Value at arr[1] is " << arr[1] << endl;
    cout << "Value at arr[2] is " << arr[2] << endl;

    // As we can see, the nos are now random as the memory has become free.

    // instead of arr[0] , arr[1], etc, we can also do this:

    int *array = new int[3];
    *(array) = 10;
    // pointer array is pointing at memory of index 0
    *(array + 1) = 20;
    *(array + 2) = 30;
    // We can do this as array is a continuous block of memory.
    cout << "Value at arr[0] is " << *(array) << " Stored at " << array << endl;
    cout << "Value at arr[1] is " << *(array + 1) << " Stored at " << (array + 1) << endl;
    cout << "Value at arr[2] is " << *(array + 2) << " Stored at " << (array + 2) << endl;

    // As you can see, the memory address are incrementing by 4 bytes, this is so because, int occupies 4 bytes of memory.

    // Instead of array+1 array+2, we can do array++.

    int *arrayPointer = new int[3];
    // Here the arrayPointer is pointing at index 0
    *(arrayPointer) = 1;
    arrayPointer++; // Here the arrayPointer is pointing at index 1
    *(arrayPointer) = 2;
    arrayPointer++; // Here the arrayPointer is pointing at index 2
    *(arrayPointer) = 3;

    arrayPointer = arrayPointer - 2; // Here the arrayPointer is pointing at index 0
    cout << "Value at arr[0] is " << *(arrayPointer) << " Stored at " << (arrayPointer) << endl;
    arrayPointer++; // Here the arrayPointer is pointing at index 1
    cout << "Value at arr[1] is " << *(arrayPointer) << " Stored at " << (arrayPointer) << endl;
    arrayPointer++; // Here the arrayPointer is pointing at index 2
    cout << "Value at arr[2] is " << *(arrayPointer) << " Stored at " << (arrayPointer) << endl;

    delete[] array;
}