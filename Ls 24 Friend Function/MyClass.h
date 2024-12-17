#ifndef MYCLASS_H
#define MYCLASS_H

class MyClass
{
private:
    /*
    Here we have defined a Private Variable, which generally cannot be accessed by functions outside of this class.
    */
    int PrivateVar;

public:
    MyClass(int a);
    /*
    In order to access the private variable, we declare a friend function by using the keyword 'friend' before the function declaration in the class itself.
    */
    friend void FriendFunction(MyClass &object);
    /*
    Here we have put &object as the parameter instead of just the object as a friend function (or any in that case) cannot change the value of a variable it doesn't own. If we had passed it without the &(by reference) all we would have done is made another instance, or rather, copy, of the object.
    The actual PrivateVar we was wanted to change, would not have changed.

    By Passing the address of the class (pass by reference), it gives the function the permission to access actual variables rather than get a copy of their value (by creating another variable)
    */
    void PrintVar();
};

#endif