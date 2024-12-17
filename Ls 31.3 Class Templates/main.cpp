// Ls 31.3 Class Templates
// Buckys C++ Programming Tutorials - 60 - class Templates

// CodeWithHarry - C++ Templates: Must for Competitive Programming | C++ Tutorials for Beginners #63

// https://www.geeksforgeeks.org/templates-cpp/

#include <iostream>
using namespace std;

template <class T>
class myClass
{
private:
    T first, second;

public:
    myClass(T first, T second) : first(first), second(second) {}
    T biggerNo();
};

// To declare function outside of class which uses templates, we need to specify the template again.

template <class T>
// myClass <T> --> tells the compiler that, this "T" is the same as mentioned above in line 7.

T myClass<T>::biggerNo()
{
    return (first > second ? first : second);
}

int main()
{

    // <retrun-type> ---> needs to be specified in class templates.

    myClass<int> obj(265, 259);
    myClass<float> obj2(52.345, 43.234);
    myClass<float> obj3(52.345, 52.346);

    cout << "Bigger No is " << obj.biggerNo() << endl;
    cout << "Bigger No is " << obj2.biggerNo() << endl;
    cout << "Bigger No is " << obj3.biggerNo() << endl;
}