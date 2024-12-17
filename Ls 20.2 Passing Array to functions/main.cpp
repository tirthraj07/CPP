// Ls 20.2 Passing Array to functions

#include <iostream>
using namespace std;
void printArray(int theArray[], int sizeArray);

int main()
{

    int tuna[3] = {33, 76, 342};
    int TJM[4] = {44, 2, 35, 278};

    printArray(TJM, 4); // Here we DON'T need to pass TJM[] parameter. Only TJM works as it already knows that TJM is an array.

    return 0;
}

void printArray(int theArray[], int sizeArray)
{

    for (int x = 0; x < sizeArray; x++)
    {
        cout << theArray[x] << endl;
    }
}