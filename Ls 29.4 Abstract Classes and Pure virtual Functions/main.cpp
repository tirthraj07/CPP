// Ls 29.4 Abstract Classes and Pure virtual Functions

// Buckys C++ Programming Tutorials - 57 - Abstract Classes and Pure virtual Functions
// CodeWithHarry - Abstract Base Class & Pure Virtual Functions in C++ | C++ Tutorials for Beginners #58

// https://www.geeksforgeeks.org/pure-virtual-functions-and-abstract-classes/

#include <iostream>
using namespace std;
/*
A pure virtual function (or abstract function) in C++ is a virtual function for which we can have implementation, But we MUST override that function in the derived class, otherwise the derived class will also become abstract class

Syntax:
virtual <class-type> class-name() = 0;

A class containing atleast one pure virtual function is called abstract class
*/

class Enemy
{
protected:
    int attackPwr;

public:
    virtual void attack() = 0; // Pure virtual function
    virtual void setAttackPwr()
    { // Not a pure virtual function
        attackPwr = 10;
    }
};

class Ninja : public Enemy
{
public:
    void setAttackPwr()
    {
        attackPwr = 50;
    }
    void attack()
    {
        cout << "I am a Ninja! NINJA CHOP -" << attackPwr;
    }
};

class Monster : public Enemy
{
public:
};

int main()
{
    Enemy *ninja_ptr = new Ninja;
    ninja_ptr->setAttackPwr();
    ninja_ptr->attack();

    Enemy *monster_ptr = new Monster;
    monster_ptr->setAttackPwr();
    /*
    Even though there is no setAttackPwr in derived monster class, it is set to the default value 10.
    This is so because, setAttackPwr is NOT a pure virtual function
    */
    monster_ptr->attack();
    /*
    Here it throws an error attack() function is a pure virtual function but is not implemented in the derived monster class.
    It is REQUIRED for a pure virtual function to be overridden in the derived class.
    */
}
