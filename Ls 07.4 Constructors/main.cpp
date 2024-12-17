// Ls 07.4 Constructors
// thenewboston ls 14 C++

#include <iostream>
#include <string>
using namespace std;

/*

Constructors - is a fucnction which gets called automatically when the program starts
Constructors never have a return type. Thus its neither void nor int,etc.
Constructor name is the same as the class name.


*/

class myClass
{
public:
    myClass(string z)
    {
        setName(z);
    }

    void setName(string x)
    {
        name = x;
    }
    string getName()
    {
        return name;
    }

private:
    string name;
};

int main()
{
    myClass Object("Tirthraj Mahajan");
    cout << Object.getName();

    myClass Obj2("Bruce Wayne");
    cout << Obj2.getName();

    return 0;
}
