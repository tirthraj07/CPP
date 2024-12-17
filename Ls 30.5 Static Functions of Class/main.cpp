// Ls 30.5 Static Functions of Class.

#include <iostream>
using namespace std;

class myClass
{
public:
    static void printMsg()
    {
        cout << "Hello World" << endl;
    }
};

int main()
{
    myClass::printMsg();

    /*
    Output WITH static keyword:
    Hello World

    Output WITHOUT static keyword:
    error: call to non-static member function without an object argument
    */
}