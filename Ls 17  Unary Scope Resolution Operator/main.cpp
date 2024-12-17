// Ls 17  Unary Scope Resolution Operator
// thenewboston ls 29 C++ tutorials

#include <iostream>

using namespace std;
void TJM();

// When you make your variable outside the functions (ex.main,TJM,etc) then all the functions can access this variable. It is a global variable.
int tuna = 10;

int main()
{

    int tuna = 45;
    cout << tuna << endl;
    /*
    Here we have have a global variable tuna. However in main we have declared a local variable tuna. Thus when we print out tuna, it prints out the value of the local variable.

    But when in funtion TJM(), where we haven't declared local variable tuna, then it uses the global variable value.
    */

    int burrito = 20; // this is a local variable and it can only be accessed by main
    TJM();

    /*
    But what if we want to use the value of the global variable even when we have a local variable, then we need to use Unary Scope Resolution Operator (i.e ::)
    */
    cout << ::tuna << endl; // Thus when we add :: before the variable, the it uses the global variable instead of local variable.

    return 0;
}

void TJM()
{
    cout << tuna << endl; // So this functions can access variable tuna.
    //  cout<<burrito; //here the variable burrito is in the main function then function TJM cannot access without passing a parameter [eg. void TJM(burrito)].
}