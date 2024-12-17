// Ls 32.1 Exception Handling
// https://www.youtube.com/watch?v=5369xtKS42s&list=PLAE85DE8440AA6B83&index=63&ab_channel=thenewboston

#include <iostream>
using namespace std;

int main()
{

    try
    {
        int motherAge = 34;
        int sonAge = 40;
        if (sonAge > motherAge)
        {
            throw 99;
        }
    }
    catch (int x)
    {
        if (x == 99)
        {
            cerr << "Mother's age cannot be less than Son's age!" << endl;
        }
    }
}