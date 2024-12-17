// Ls 39.2 STL Stack

#include <iostream>
#include <stack>
using namespace std;

/*
The functions associated with stack are:
empty() – Returns whether the stack is empty – Time Complexity : O(1)
size() – Returns the size of the stack – Time Complexity : O(1)
top() – Returns a reference to the top most element of the stack – Time Complexity : O(1)
push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1)
pop() – Deletes the most recent entered element of the stack – Time Complexity : O(1)
*/

void display(stack<int> s)
{
    while (s.size() > 0)
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main()
{

    stack<int> s;
    cout << s.empty() << endl;
    cout << s.size() << endl;
    s.push(3);
    s.push(7);
    s.push(9);
    s.push(5);
    s.push(1);
    s.push(8);
    display(s);
    s.pop();
    s.pop();
    display(s);
}