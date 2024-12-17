// Ls 20.1 Array

#include <iostream>
using namespace std;

int main()
{

    // Sum of elements in an Array
    int tuna[5] = {20, 30, 50, 100, 200};

    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + tuna[i];
    }

    cout << sum << endl;

    return 0;
}

/*
Syntax;
Array initializer list.
declaration(int) variable_name[no. of elements] = {element 1, element 2,...element n};

int =555r[5]={5,2,5,1,7};

*/