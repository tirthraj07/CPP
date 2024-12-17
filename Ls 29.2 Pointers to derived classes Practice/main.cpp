// Ls 29.2 Pointers to derived classes Practice
// Buckys C++ Programming Tutorials - 55 - Introduction to Polymorphism

#include <iostream>
using namespace std;

class Enemy
{
protected:
    int attackPower;

public:
    void setValue(int attackPower)
    {
        this->attackPower = attackPower;
    }
};

class Ninja : public Enemy
{
public:
    void setValue(int attackPower)
    {
        cout << "You have accessed Ninja Class" << endl;
    }
    void display()
    {
        cout << "I am a Ninja! Ninja CHOP! -" << attackPower << endl;
    }
};

class Monster : public Enemy
{
public:
    void setValue(int attackPower)
    {
        cout << "You have accessed Monster Class" << endl;
    }
    void display()
    {
        cout << "Imma eat you!!! -" << attackPower << endl;
    }
};

int main()
{
    Ninja n;
    Monster m;
    Enemy *ptr_ninja = &n;
    Enemy *ptr_monster = &m;
    n.setValue(55);          // It calls the setValue() in the derived Ninja Class and not the base Enemy Class
    ptr_ninja->setValue(55); // It calls the setValue() in the base Enemy Class and not the derived Ninja Class
    n.display();
    /*
    We had to use n.display() as the base class does not contain display(). Thus ptr_ninja->display() will throw an error
    */

    m.setValue(55);            // It calls the setValue() in the derived Monster Class and not the base Enemy Class
    ptr_monster->setValue(99); // It calls the setValue() in the base Enemy Class and not the derived Monster Class
    m.display();
}
