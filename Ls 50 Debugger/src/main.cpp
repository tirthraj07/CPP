#include <iostream>
using namespace std;

int bar(int a, int b)
{
    return a * b;
}

void foo(int a, int b)
{
    int c = bar(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
}

int main()
{
    cout << "Hello World" << endl;
    int a, b;
    cin >> a >> b;

    foo(a, b);

    return EXIT_SUCCESS;
}