// Ls 39.3 Stack Problem 1

/*
Problem Statement:
Write a program that uses a stack to reverse the characters in a string and check if its a palindrome
*/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    string str, rev_str;
    stack<char> rev;

    cout << "Enter a String: " << endl;
    cin >> str;

    for (char i : str)
    {
        rev.push(i);
    }

    while (rev.empty() != true)
    {
        rev_str = rev_str + rev.top();
        rev.pop();
    }

    cout << "Reverse String: " << rev_str << endl;

    if (rev_str == str)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not a Palindrome" << endl;
    }
}

/*
Test Cases:

Input: "racecar"
Expected Output: racecar
Reverse String: racecar
Palindrome

Input: "hello"
Expected Output: olleh
Reverse String: olleh
Not a Palindrome

Input: "12321"
Expected Output: 12321
Reverse String: 12321
Palindrome

Input: ""
Expected Output:
Reverse String:
Palindrome (empty string is a palindrome)

Input: "A man a plan a canal Panama"
Expected Output: amanaP lanac a nalp a nam A
Reverse String: amanaP lanac a nalp a nam A
Not a Palindrome (ignores spaces and case sensitivity)

Input: "abb"
Expected Output: bba
Reverse String: bba
Not a Palindrome
*/