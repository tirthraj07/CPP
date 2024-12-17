// Ls 37.2 Passing an array to a function

#include <iostream>

void printSizeOfArr(int arr[])
{

    std::cout << sizeof(arr) / sizeof(int) << std::endl;
    // Here it print 2 instead of the actual size of elements.
    // Why is that? Refer Notes.
}

void printArray(int arr[], int *size)
{

    std::cout << "Array[" << *size << "] =" << std::endl;

    for (int i = 0; i < *size; i++)
    {
        std::cout << arr[i] << std::endl;
    }

    return (void)0;
}

int main(void)
{
    int arr[] = {3, 2, 4, 1, 6, 77, 245, 234, 643, 235, 12};

    // Concept 1: Sizeof Inside and Outside function

    // outside:
    std::cout << sizeof(arr) / sizeof(int) << std::endl;
    // It prints the exact size of the element

    printSizeOfArr(arr);

    // Concept 2: While passing the array, we do not need to use [] as the compiler already knows its and array
    // We should also use an extra parameter to pass the size of array

    int size = sizeof(arr) / sizeof(int);

    printArray(arr, &size);

    return 0;
}