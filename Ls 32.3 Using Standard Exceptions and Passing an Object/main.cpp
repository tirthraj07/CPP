// Ls 32.3 Using Standard Exceptions and Passing an Object
// https://www.youtube.com/watch?v=FynvrvLw3Rs&list=PLfVsf4Bjg79Cx42Myce8bIg1nVBVSFKyx&index=2&ab_channel=LearningLad

#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
    int num1 = 10, num2 = 0;
    try
    {
        if (num2 == 0)
        {
            throw runtime_error("Division by 0");
        }

        cout << num1 / num2 << endl;
    }
    catch (runtime_error x)
    {
        cout << "Runtime Error:" << x.what() << endl;
    }
}
