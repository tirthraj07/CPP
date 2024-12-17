// Ls 28.5 Array of Objects Using Pointers in C++

// CodeWithHarry - Array of Objects Using Pointers in C++ | C++ Tutorials for Beginners #52

// https://www.geeksforgeeks.org/creating-array-of-pointers-in-cpp/

#include <iostream>
using namespace std;

class College
{
private:
    int code, course;

public:
    void setData(int code, int course)
    {
        this->code = code;
        this->course = course;
    }
    void getData()
    {
        cout << "College Code: " << code << " Course: " << course << endl;
    }
};

int main()
{
    int no_choices, code, course;

    cout << "How many colleges do you want to apply in: " << endl;
    cin >> no_choices;

    College *ptr = new College[no_choices];
    for (int i = 0; i < no_choices; i++)
    {

        cout << "Preference " << (i + 1) << " College Code: ";
        cin >> code;
        cout << " Course Code: ";
        cin >> course;

        (ptr + i)->setData(code, course);
    }

    for (int i = 0; i < no_choices; i++)
    {
        ptr->getData();
        ptr++; // or (ptr+i)
    }
    // ptr++ will move the pointer memory while (ptr+i) will keep the pointer location at index 0
}