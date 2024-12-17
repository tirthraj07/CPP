// Ls 32.2 More on Exception Handling
// https://www.youtube.com/watch?v=5369xtKS42s&list=PLAE85DE8440AA6B83&index=63&ab_channel=thenewboston

#include <iostream>
using namespace std;

int main()
{
    try
    {
        int num1, num2;
        cout << "Enter Num 1 :" << endl;
        cin >> num1;
        cout << "Enter Num 2 :" << endl;
        cin >> num2;
        if (num2 == 0 && num1 != 0)
        {
            throw 0;
        }
        if (num1 == 0 && num2 == 0)
        {
            throw 'a';
        }
        cout << "num1/num2 = " << num1 / num2 << endl;
    }
    catch (int x)
    {
        if (x == 0)
        {
            cout << "Cannot Divide by 0" << endl;
        }
    }
    // catch(...) --> any exception will be caught no matter the datatype of throw.
    catch (...)
    {
        cout << "Default Exception" << endl;
    }
}
