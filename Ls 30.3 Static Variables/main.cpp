// Ls 30.3 Static Variables
// https://www.geeksforgeeks.org/static-keyword-cpp/

#include <iostream>
using namespace std;

void Function()
{
    static int count = 1;
    cout << count << " ";
    count++;
}

int main()
{
    int loopNo;
    cout << "How many times do you want to call the function?" << endl;
    cin >> loopNo;

    for (int i = 0; i < loopNo; i++)
    {
        Function();
    }
}