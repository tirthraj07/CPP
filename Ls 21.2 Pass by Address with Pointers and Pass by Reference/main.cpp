// Ls 21.2 Pass by Address with Pointers and Pass by Reference.
// Note - In thenewboston ls 39 - Pass by Reference with Pointers, its wrong. Its actually pass by Address in pointers.

/*
Check Note.txt added with this.
Note - In thenewboston ls 39 - Pass by Reference with Pointers, its wrong. Its actually pass by Address in pointers.
https://www.geeksforgeeks.org/passing-by-pointer-vs-passing-by-reference-in-c/

in simple words;
passByAddress uses pointers
passbyReference doesn't use pointers

*/
#include <iostream>
using namespace std;
void passByValue(int x);
void passByAddress(int *x);
void passbyReference(int &x);

int main()
{

    int betty = 13;
    int sandy = 13;
    int pattrick = 13;

    passByValue(betty);
    passByAddress(&sandy);
    passbyReference(pattrick);

    cout << "Original betty " << betty << endl; // This proves that the actual value of betty didn't change.
    cout << "Original sandy " << sandy << endl;
    cout << "Original pattrick " << pattrick << endl;

    return 0;
}

void passByValue(int x)
{           // here x is a COPY of betty
    x = 99; // COPY of betty = 99 , not betty
    cout << "COPY of betty " << x << endl;
}

void passByAddress(int *x)
{            // here *x is the ADDRESS of sandy
    *x = 66; // the actual variable is given value of 66
}

void passbyReference(int &x)
{
    x = 66;
}

/*
When you pass a variable through a function, it create a COPY of that function. Thus whenever you change the variable value through a function, it is not changing the main variable but its COPY.
int main(){
  int x = 13;
  passByValue(x);
  cout<<"x = "<<x<<endl;
}
void passByValue(int x){
  x = 99;
}
Output
==> x = 13

This is what happens when you just pass the variable COPY.
If you want the entire variable to change then you need to pass its ADDRESS. It changes the main variable value instead of its COPY.
This is called as pass by Address.

eg-
int main(){
  int x = 13;
  passByAddress(&x); //here we need to give the ADDRESS of variable.
  cout<<"x = "<<x<<endl;
}
void passByAddress(int *x){  //here *x is a pointer holding the address of the variable
  *x = 99;
}
Output
=>>  x = 99.


*/
