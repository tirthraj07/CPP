// https://www.youtube.com/watch?v=jELbKhGkEi0

#include <iostream>
using namespace std;

class Base
{
public:
    Base() { cout << "Base Constructor" << endl; }
    // ~Base(){cout<<"Base Destructor"<<endl;}
    virtual ~Base() { cout << "Base Destructor" << endl; }
};

class Derived : public Base
{
private:
    int *arr;

public:
    Derived()
    {
        arr = new int[10];
        cout << "Derived Constructor" << endl;
    }
    ~Derived()
    {
        delete[] arr;
        cout << "Derived Destructor" << endl;
    }
};

int main()
{
    Base *base = new Base();
    delete base;
    cout << "-----------------------------" << endl;
    Derived *derived = new Derived();
    delete derived;
    cout << "------------------------------" << endl;
    Base *poly = new Derived();
    delete poly;
}

/*
If you don't define the the destructor virtual, it won't call the destructor of the Derived class which may lead to memeory leakage
See: https://www.youtube.com/watch?v=jELbKhGkEi0
*/