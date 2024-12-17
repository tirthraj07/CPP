// Ls 37.4 Intro to Vectors Bubble sort Using Vector Array
// Caleb Curry -  C++ Programming Tutorial 50 - Intro to Vectors
// Caleb Curry -  C++ Programming Tutorial 51 - Creating a Vector

#include <iostream>
#include <vector>
#include <limits>

using std::cout, std::cin, std::endl, std::vector;

int main()
{

    vector<int> vec;
    int temp, count = 0;

    cout << "Enter Array, Enter any char to Exit" << endl;
    for (;;)
    {
        if (cin >> temp)
        {
            vec.push_back(temp);
            count += 1;
        }
        else
        {
            break;
        }
    }

    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    cout << "Applying Bubble Sort Algorithm.." << endl;

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < (count - 1); j++)
        {
            if (vec[j] > vec[j + 1])
            {
                temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < count; i++)
    {
        cout << vec[i] << "\t";
    }
}
