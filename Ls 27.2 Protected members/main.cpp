// Ls 27.2 Protected members

#include <iostream>
using namespace std;
/*
As we know, there are 3 access specifiers: Public, Protected and Private.
Access specifiers define how the members (attributes and methods) of a class can be accessed.

1. Public: All the class members declared under the public specifier will be available to everyone.
The data members and member functions declared as public can be accessed by other classes and functions too.
The public members of a class can be accessed from anywhere in the program using the direct member access operator (.) with the object of that class.

2. Private: The class members declared as private can be accessed only by the member functions inside the class.
They are not allowed to be accessed directly by any object or function outside the class.
Only the member functions or the friend functions are allowed to access the private data members of the class.

The inherited derived class cannot access the private members of the Base class

3. Protected: This is a mix of private and public, as the memeber function and variables under protected access specifier can only be used by the class itself aswell as the friend function and the inherited classes
They cannot be accessed outside of the class.
*/

class Mother
{
public:
    int publicVar = 1;

private:
    int privateVar = 2;

protected:
    int protectedVar = 3;

    friend void FriendFunction(Mother &obj);
};

class Daughter : public Mother
{
public:
    void PrintVar()
    {
        cout << "Public Var is " << publicVar << endl;       // output = 1
        cout << "Protected Var is " << protectedVar << endl; // output = 3
                                                             // cout<<"Private Var is "<<privateVar<<endl; // Here it gives an error as private variables cannot be accessed by inherited classes
    }
};

void FriendFunction(Mother &obj)
{
    cout << "Public Var is " << obj.publicVar << endl;       // output = 1
    cout << "Protected Var is " << obj.protectedVar << endl; // output = 3
    cout << "Private Var is " << obj.privateVar << endl;     // output = 2
}

int main()
{

    // INHERITED CLASS:
    Daughter obj;
    obj.PrintVar();

    // OUTSIDE OF CLASS:
    cout << obj.publicVar << endl;
    ; // Output = 1

    cout << obj.protectedVar;
    // Here it gives an error as protected members cannot be accessed outside of the class (unless inherited class or friend function)

    cout << obj.privateVar;
    // Here it gives an error as private members cannot be accessed outside of the class (unless friend function)

    // FRIEND FUNCTION:
    FriendFunction(obj);

    /*
    Here it can clearly be seen that Friend Function has access to all, public, protected and private memebers of a class.
    */
}