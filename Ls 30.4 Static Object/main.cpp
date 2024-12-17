// Ls 30.4 Static Object

#include <iostream>
using namespace std;

class myClass
{
public:
    myClass()
    {
        cout << "Constructor is invoked" << endl;
    }
    ~myClass()
    {
        cout << "Destructor is invoked" << endl;
    }
};

int main()
{
    /*
      int i = 0;
      if(i == 0){
       myClass obj;
      }

      cout<<"End of main()"<<endl;

    OUTPUT:
    Constructor is invoked
    Destructor is invoked
    End of main()

    */

    int i = 0;
    if (i == 0)
    {
        static myClass obj;
    }

    cout << "End of main()" << endl;

    /*
    OUTPUT:
    Constructor is invoked
    End of main()
    Destructor is invoked

    */

    /*
    Note and Explaination:
    You can clearly see the change in output.

    In the FIRST program:
    The object is declared inside the 'if block' as non-static.
    So, the scope of variable is inside the 'if block' only as it is where it is declared.
    So when the object is created the constructor is invoked.
    As soon as the 'if block' gets over the destructor is invoked as the scope of object is inside the 'if block' only.


    In the SECOND program:
    The object is declared inside the 'if block' as static.
    Now the destructor is invoked after the end of main.
    This happened because the scope of static object is through out the life time of program.

    */
}