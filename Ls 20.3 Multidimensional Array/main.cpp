// Ls 20.3 Multidimensional Array
// Buckys C++ Programming Tutorials - 36 - Multidimensional Arrays

#include <iostream>
#include <string>

using namespace std;

int main()
{

    string arr[3][3] = {{"Name", "Age", "Class"}, {"TJM ", "16 ", "11th"}, {"Bucky", "25", "10th"}};

    for (int rows = 0; rows < 3; rows++)
    {

        for (int coln = 0; coln < 3; coln++)
        {
            cout << arr[rows][coln] << " ";
        }

        cout << endl;
    }

    cout << arr[0][0] << " " << arr[0][1] << " " << arr[0][2] << endl;
    cout << arr[1][0] << " " << arr[1][1] << " " << arr[1][2] << endl;
    cout << arr[2][0] << " " << arr[2][1] << " " << arr[2][2] << endl;

    return 0;
}

/*
A multidimentional array is like a table, where there are rows and columns.

int arr[2][3] = {{2,3,4},{8,9,10}};

  columns
   0 1 2
   | | |
// 2,3,4   <-- 0th row
// 8,9,10  <-- 1st row

Syntax:

int arr[no. of rows][no.columns] = {{row 1 elements},{row 2 elements}};

while printing out a multidimentional array, we have to remember that rows and columns START FROM 0 and not 1. i.e the 1st row is actually 0 and 2nd row is actually 1. Likewise for columns.

cout<< arr[row no.][element index];

for eg.
int arr[2][3] = {{2,3,4},{8,9,10}};
cout<< arr[0][1]<<endl;
output => 3


*/