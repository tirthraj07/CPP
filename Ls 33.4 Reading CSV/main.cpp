// Ls 33.4 Reading CSV
// https://archive.ics.uci.edu/ml/machine-learning-databases/iris/

// Buckys C++ Programming Tutorials - 67 - Reading Custom File Structures

// https://www.youtube.com/watch?v=EjJY7yA5SWw&list=PLAE85DE8440AA6B83&index=67&ab_channel=thenewboston

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string vec[750];
    string temp;
    int length;
    int ptr = 0, ptr2 = 0;
    ifstream data("irisdata.txt");
    while (data >> temp)
    {
        length = temp.length();
        ptr = 0;
        for (int i = 0; i <= length; i++)
        {
            if (temp[i] == ',' || i == (length))
            {
                for (int j = ptr; j < i; j++)
                {
                    vec[ptr2] = vec[ptr2] + temp[j];
                }
                ptr2++;
                ptr = i + 1;
            }
        }
    }
    for (string i : vec)
    {
        cout << i << endl;
    }
}