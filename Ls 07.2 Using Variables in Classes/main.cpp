// Ls 07.2 Using Variables in Classes
// thenewboston ls 13

#include <iostream>
#include <string>
using namespace std;
// Note - Use the variables in class inside private.

class myClass
{
public:
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
    myClass mObj; // mObj -- My Object
    mObj.setName("Bruce Wayne");
    cout << mObj.getName();
    return 0;
}