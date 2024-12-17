// Ls 04 Swapping two numbers

// Swapping two numbers
#include <iostream>
using namespace std;

int main()
{

    int a, b, temp;

    cout << "Type two numbers: " << endl;
    cin >> a >> b;
    temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << endl
         << "b = " << b << endl;

    return 0;
}
