// Ls 09 Sentinel Controlled Program
// thenewboston ls 20 C++

#include <iostream>
using namespace std;
/*
Basically instead of a fixed loop, user decides when to stop the program

*/
int main()
{

    int age;
    int ageTotal = 0;
    int numberOfPeopleEntered = 0;

    cout << "Enter first person's age or -1 to quit" << endl;
    cin >> age;

    while (age != -1)
    {
        ageTotal = ageTotal + age;
        numberOfPeopleEntered++;

        cout << "Enter next person's age or -1 to quit." << endl;
        cin >> age;
    }

    cout << "Total Age: " << ageTotal << endl;
    cout << "Total People: " << numberOfPeopleEntered << endl;
    cout << "Average Age: " << ageTotal / numberOfPeopleEntered << endl;

    return 0;
}