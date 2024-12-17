// Ls 01 Understanding a Simple C++ Program

#include <iostream> //preprocessor directive ->(import)| this includes a line

using namespace std; // std -> standard library | this includes a library

int main() // function --> main function
{

    cout << "Hello World!" << endl;
    // cout -> output stream object; <<  -> stream insertion operator; endl -> \n

    // endl and \n
    cout << "boy I love bacon ";
    cout << "and ham" << endl;

    cout << "boy I love bacon \n";
    cout << "and ham" << endl;
    return 0;
}
