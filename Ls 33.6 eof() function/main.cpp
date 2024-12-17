// Ls 33.6 eof() function

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{

    ifstream data("data.txt", ios::in);
    string line;

    while (data.eof() == 0)
    {
        getline(data, line);
        cout << line << endl;
    }
}