// Ls 06.2 Functions

#include <iostream>
using namespace std;

int Age(int birthYear);

int main()
{
    int birthYear, result;

    cout << "Whats your birth year?" << endl;
    cin >> birthYear;

    result = Age(birthYear);
    cout << result;

    return 0;
}

int Age(int birthYear)
{
    int year, age;

    year = 2020;
    age = year - birthYear;
    return age;
}