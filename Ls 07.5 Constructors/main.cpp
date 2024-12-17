// Ls 07.5 Constructors

#include <iostream>
#include <string>

using namespace std;
/*
Self study - Construtors
*/

class bodyProfile
{
public:
    bodyProfile(string a, string b, int c)
    {
        setName(a);
        setEmail(b);
        setAge(c);
    }

    void setName(string x)
    {
        name = x;
    }
    string getName()
    {
        return name;
    }
    void setEmail(string y)
    {
        email = y;
    }
    string getEmail()
    {
        return email;
    }
    void setAge(int z)
    {
        age = z;
    }
    int getAge()
    {
        return age;
    }

private:
    string name, email;
    int age;
};

int main()
{
    bodyProfile TJM("Tirthraj Mahajan", "tirthraj@gmail.com", 16);
    cout << TJM.getName() << endl
         << TJM.getEmail() << endl
         << TJM.getAge() << endl;

    bodyProfile Batman("Bruce Wayne", "brucewayne@batman.com", 48);
    cout << Batman.getName() << endl
         << Batman.getEmail() << endl
         << Batman.getAge() << endl;

    bodyProfile Spiderman("Peter Parker", "peterparker@spidy.com", 21);
    cout << Spiderman.getName() << endl
         << Spiderman.getEmail() << endl
         << Spiderman.getAge() << endl;

    return 0;
}