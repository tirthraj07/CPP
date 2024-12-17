// Ls 30.2 More on Inline Functions
// https://www.geeksforgeeks.org/inline-functions-cpp/?ref=lbp

#include <iostream>
using namespace std;

class operation
{
private:
    int a, b;

public:
    operation(int a, int b);
    int sum();
    int subtract();
    int product();
    int divide();
};

operation::operation(int a, int b) : a(a), b(b)
{
}

inline int operation::sum()
{
    return (a + b);
}
inline int operation::subtract()
{
    return (a - b);
}
inline int operation::divide()
{
    return (a / b);
}
inline int operation::product()
{
    return (a * b);
}

int main()
{
    int a, b;
    cout << "Enter two nos :" << endl;
    cin >> a >> b;
    operation obj(a, b);

    cout << "Sum is " << obj.sum() << endl;
    cout << "Subtraction is " << obj.subtract() << endl;
    cout << "Product is " << obj.product() << endl;
    cout << "Division is " << obj.divide() << endl;
}