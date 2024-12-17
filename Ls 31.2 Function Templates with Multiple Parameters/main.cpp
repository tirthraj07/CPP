#include <iostream>
using namespace std;

template <class First, class Second>
/*
(auto add(First a, Second b){
  return(a+b);
}
*/
auto returnSmaller(First a, Second b)
{
    return (a < b ? a : b);
    /*
    Conditional statement:
    (condition)?(if condition is true):(if condition is false)
    */
}

int main()
{
    cout << returnSmaller(2, 2) << endl;
    cout << returnSmaller(2.43, 2.23) << endl;
    cout << returnSmaller(1, 2.244) << endl;
    cout << returnSmaller(4.355, 5) << endl;
}