// Ls 32.5 Nested Try Catch statements & Rethrowing an Error
// https://www.youtube.com/watch?v=UcT_sXaJF94&list=PLfVsf4Bjg79Cx42Myce8bIg1nVBVSFKyx&index=5&ab_channel=LearningLad

#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{

    try
    {

        try
        {
            throw runtime_error("Runtime Error");
        }
        catch (const char a)
        {
            cout << "Character Exception in inner block --->" << a << endl;
            throw; // rethrows the exception in the outer block
        }
        catch (runtime_error a)
        {
            cout << "Exception in inner block --->" << a.what() << endl;
            throw; // rethrows the same exception in the outer block
            // throw runtime_error("runtime error");
            // throw 20;
            // throw 'a';
        }
        catch (...)
        {
            cout << "Unexpected Exception in inner block" << endl;
            throw; // rethrows the exception in the outer block
        }
    }
    catch (const char a)
    {
        cout << "Exception in outer block --->" << a << endl;
    }
    catch (runtime_error a)
    {
        cout << "Exception in outer block --->" << a.what() << endl;
    }
    catch (...)
    {
        cout << "Unexpected Exception in outer block" << endl;
    }
}