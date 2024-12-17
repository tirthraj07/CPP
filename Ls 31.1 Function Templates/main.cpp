#include <iostream>
using namespace std;

template <class TJM>

TJM add(TJM a, TJM b)
{
    return (a + b);
}

int main()
{

    cout << add(5, 20) << endl;
    cout << add(5.25, 20.38) << endl;
    cout << add(3.91234, 4.72457) << endl;
}