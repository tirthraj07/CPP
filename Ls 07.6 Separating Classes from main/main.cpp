// Ls 07.6 Separating Classes from main

/*
Usually we have to separate the class files. In order to create separate class files, we have to do certain things.

1st) Create a file (in the same directory as the main) and name it the title you want for the class. For eg I have created a 'Burrito' class here.
the extention should be '.cpp'.

2nd) Create another file with same name except let '.h' be the extention to this file

3rd) Goto Burrito.h

4th) goto Burrito.cpp

*/

#include <iostream>
#include "Burrito.h"
using namespace std;

int main()
{

    Burrito Bo;

    return 0;
}