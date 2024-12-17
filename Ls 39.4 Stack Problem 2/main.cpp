// Ls 39.4 Stack Problem 2

/*
In this problem, we need to check whether a given string of parentheses is balanced or not using a stack. A string is considered balanced if each opening parenthesis has a corresponding closing parenthesis in the correct order.

For example, consider the string "((()))". This string is balanced because every opening parenthesis has a corresponding closing parenthesis, and the order is correct. On the other hand, the string "(()" is not balanced because the closing parenthesis is missing.
*/

#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution
{

private:
    stack<int> s;
    string str;

public:
    Solution()
    {
    }

    string isBalanced(string str)
    {
        this->str = str;
        for (char i : str)
        {
            if (i == '(')
            {
                s.push(0);
            }
            if (i == ')')
            {
                if (s.empty() != true)
                {
                    s.pop();
                }
                else
                {
                    // cout<<"Unbalanced"<<endl;
                    return "Unbalanced";
                }
            }
        }
        if (s.empty() == true)
        {
            // cout<<"Balanced"<<endl;
            return "Balanced";
        }
        else
        {
            // cout<<"Unbalanced"<<endl;
            return "Unbalanced";
        }
    }
};

int main()
{
    string test_cases[] = {"",
                           "()",
                           "(())",
                           "(()())",
                           "()()",
                           "))((",
                           "((()",
                           "()()( ",
                           ")()( ",
                           "()()()",
                           "(()))(",
                           "()()()",
                           "()())",
                           ")(",
                           "()()",
                           "))(((",
                           "())(()",
                           "())(",
                           "()()))(",
                           "((((()))))",
                           "(())))))",
                           "(((())))(",
                           "(()))(",
                           "(((())))",
                           ")))))",
                           "(((()))))",
                           "((())()(())))",
                           "(((())))(",
                           "((((()))))))",
                           "(())))(",
                           "(()))(",
                           "()((())())",
                           "(((())()())())",
                           "((()()())(())))",
                           "()()()())(",
                           "(()))(",
                           "((((()))))",
                           "()(()))",
                           ")()(",
                           "()(()))(",
                           "()()))))",
                           "((())",
                           ")()()()",
                           "()()(()",
                           "()()()))",
                           "())()(",
                           "()()(()))",
                           "()()())(",
                           "()()()(",
                           "()()(())))))))"};

    int srNo = 1;
    Solution s;
    for (string i : test_cases)
    {
        cout << i << " : " << s.isBalanced(i) << endl;
        srNo++;
    }
}