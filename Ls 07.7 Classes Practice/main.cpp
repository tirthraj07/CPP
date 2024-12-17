// Ls 07.7 Classes Practice

#include "bodyProfile.h"
#include <iostream>
using namespace std;

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

    bodyProfile Starlord("Star Lord", "starlord@gamora.com", 30);
    cout << Starlord.getName() << endl
         << Starlord.getEmail() << endl
         << Starlord.getAge() << endl;

    return 0;
}
