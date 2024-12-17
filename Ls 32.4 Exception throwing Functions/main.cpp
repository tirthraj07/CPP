// Ls 32.4 Exception throwing Functions
// https://www.youtube.com/watch?v=iFexdxXbOfE&list=PLfVsf4Bjg79Cx42Myce8bIg1nVBVSFKyx&index=4&ab_channel=LearningLad

#include <iostream>
#include <stdexcept>
using namespace std;

// We have to mention what exceptions we are going to throw in the function

// Syntax: <return-type> FunctionName() throw(<exception-data-type>){}
// If we do not mention any exception data types, we cant throw exceptions.

void test() throw(int, char, runtime_error)
{
    //..block of code
    // Exception Block:
    throw 20;
    // throw 'c';
    // throw runtime_error("Invalid Argument");
}

int main()
{
    try
    {
        test();
    }
    catch (int x)
    {
        cout << "Integer Exception: " << x << endl;
    }
    catch (char x)
    {
        cout << "Character Exception: " << x << endl;
    }
    catch (runtime_error x)
    {
        cout << "Runtime Exception: " << x.what() << endl;
    }
    catch (...)
    {
        cout << "Default Exception" << endl;
    }
}