// Ls 28.6 Practice

#include <iostream>
using namespace std;

class enemy
{
protected:
    int attackPower;

public:
    void setAttackPower(int attackPower)
    {
        this->attackPower = attackPower;
    }
};

class Ninja : public enemy
{
public:
    void attack()
    {
        cout << "I am a Ninja! Ninja CHOP -" << attackPower << endl;
    }
};

int main()
{
    int no_ninjas, attackPower;
    cout << "How many Ninjas do you want to create: " << endl;
    cin >> no_ninjas;

    Ninja *ptr = new Ninja[no_ninjas];
    for (int i = 0; i < no_ninjas; i++)
    {
        cout << "Ninja " << (i + 1) << " Attack Power = ";
        cin >> attackPower;
        (ptr + i)->setAttackPower(attackPower);
    }
    for (int i = 0; i < no_ninjas; i++)
    {
        (ptr + i)->attack();
    }
}