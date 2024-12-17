// Ls 29.6 Explicit and Mutable Keywords

#include <iostream>
using namespace std;

class Entity
{
public:
    string name;
    float val;
    mutable int functionCall;

    Entity(string name)
    {
        this->name = name;
        this->val = 0;
    }

    explicit Entity(float val = 0)
    {
        this->name = "Unknown";
        this->val = val;
    }

    const int getVal() const
    {
        // val = 10; -> will Throw Error
        functionCall++; // I can change this because I have declared it mutable
        return val;
    }
};

int main()
{

    Entity a = string("Tirthraj"); // Example of implict binding
    // Note, I had to convert "Tirthraj" as it was not string data type but rather char[] data type (i.e c style string rather than c++ string)
    cout << a.name << endl;

    // Entity e =  10; // This will give you an error as the word 'explicit' disables the implict conversion of data type
    Entity e(10);
    cout << e.val << endl;
    e = Entity(20);
    cout << e.val << endl;

    cout << e.getVal() << endl;
    cout << e.functionCall << endl;
}