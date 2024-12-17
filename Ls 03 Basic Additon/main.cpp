// Ls 03 Basic Addition

#include <iostream>

using namespace std;

int main()
{
    int a, b, sum;

    cout << "Please enter the two numbers." << endl;
    cin >> a >> b; // cin -> input stream object

    sum = a + b;

    cout << "The sum of those numbers is: " << sum << endl;

    return 0;
}