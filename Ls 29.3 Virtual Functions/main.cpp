// Ls 29.3 Virtual Functions

#include <iostream>
using namespace std;
/*
A virtual function is a member function which is declared within a base class and is re-defined (overridden) by a derived class.
When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the function.
*/

/*
In the Previous program, we encountered a problem.
base pointer pointing to derived class object could not call the member function of derived class.
Thus we explicitly had to declare a derived class object and call the member function by using the object and dot operator
This method was long and confusing and hence we use Virtual Functions to fix that issue.

You can think of virtual function as a prototype of member function of the derived class in base class.
If virtual keyword is used before declaring a function in the base class, the compiler knows to look for that function in the derived class rather than the base class.
For e.g:
*/

class Enemy
{
protected:
    int attackPwr;

public:
    virtual void attack() {}; // prototype of attack() function in derived ninja and monster class.

    void setAttackPower(int attackPwr)
    {
        this->attackPwr = attackPwr;
    }
};

class Ninja : public Enemy
{
public:
    void attack()
    {
        cout << "I am a Ninja! NINJA CHOP -" << attackPwr << endl;
    }
};

class Monster : public Enemy
{
public:
    void attack()
    {
        cout << "Im gonna eat you!!! -" << attackPwr << endl;
    }
};

int main()
{

    Enemy *ptr_ninja = new Ninja;
    ptr_ninja->setAttackPower(55);
    ptr_ninja->attack();

    Enemy *ptr_monster = new Monster;
    ptr_monster->setAttackPower(99);
    ptr_monster->attack();

    /*
    As we can see, pointers of same class (Enemy) give different output on calling the same function (attack) due to virtual function and as they are linked with objects of different derived classes.
    This is why its called polymorphism.

    */

    /*
      //This can be used to create an array of objects.
      int no_ninjas, no_monsters, attackPwr;
      cout<<"How many Ninjas do you want? ";
      cin>>no_ninjas;
      Enemy* ptrNinja = new Ninja[no_ninjas];
      for(int i = 0; i<no_ninjas;i++){
        cout<<"\nAttack Power for Ninja "<<(i+1)<<" :";
        cin>>attackPwr;
        (ptrNinja+i)->setAttackPower(attackPwr);
      }

      cout<<"How many Monsters do you want? ";
      cin>>no_monsters;

      Enemy* ptrMonster = new Monster[no_monsters];
      for(int i = 0; i<no_monsters;i++){
        cout<<"\nAttack Power for Monster "<<(i+1)<<" :";
        cin>>attackPwr;
        (ptrMonster+i)->setAttackPower(attackPwr);
      }

      for(int i = 0; i<no_ninjas;i++){
        (ptrNinja+i)->attack();
      }

      for(int i = 0; i<no_monsters; i++){
        (ptrMonster+i)->attack();

      }
    */
}