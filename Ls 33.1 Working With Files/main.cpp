// Ls 33.1 Working With Files
// Buckys C++ Programming Tutorials - 64 - Working with Fileshttps://www.youtube.com/watch?v=HcONWqVyvlg&list=PLAE85DE8440AA6B83&index=64&ab_channel=thenewboston

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream myFile;
    myFile.open("MyFile.txt");
    myFile << "This is my File Yo!\n";
    myFile.close();
}