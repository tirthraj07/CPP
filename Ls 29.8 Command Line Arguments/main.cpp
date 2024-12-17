#include <iostream>
using namespace std;

/*
~/Ls-298-Command-Line-Arguments$ ./main on example.txt
*/

int main(int argc, char *argv[])
{
    // argc is the count of arguments (including the program name)
    // argv is an array of strings representing the arguments

    // argv[0] -> Referes to the name of the program itself

    // Say the argv[1] -> bebug mode
    // Say the argv[2] -> The file which is to be operated on

    if (argc >= 3)
    {
        cout << "Starting Project : " << argv[0] << endl;
        bool debug = true;
        if (string(argv[1]) == "on")
        {
            debug = true;
        }
        else
        {
            debug = false;
        }
        string file = string(argv[2]);

        if (debug)
        {
            cout << "Debug Mode - ON" << endl;
            cout << "Entering Developement Environment.." << endl;
            cout << "Working on file : " << file << endl;
        }

        else
        {
            cout << "Debug Mode - OFF" << endl;
            cout << "Entering Production Environment.." << endl;
            cout << "Working on file : " << file << endl;
        }
    }
    else
    {
        cout << "Insufficient arguments. Usage: " << argv[0] << " <debug_mode> <file_name>" << endl;
    }

    return 0;
}