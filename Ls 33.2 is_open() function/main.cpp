// Ls 33.2 is_open() function

#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ofstream myFile("myFile.txt");
    if (myFile.is_open())
    {
        cout << "File is Opened and ready to be worked with" << endl;
        myFile << "Yo this my file! \n";
        myFile.close();
    }
    else
    {
        cout << "Error: Couldn't associate myFile Class to the file." << endl;
    }
}