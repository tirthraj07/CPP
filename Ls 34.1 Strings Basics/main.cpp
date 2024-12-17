// Ls 34.1 Strings Basics
// Buckys C++ Programming Tutorials - 71 - string Class and string Functions
// https://www.geeksforgeeks.org/stdstring-class-in-c/?ref=lbp

#include <iostream>
#include <string>
using namespace std;

int main()
{

    // Concept 1: cin vs getline

    string s1;
    cout << "enter a string: ";
    cin >> s1; // enter a sentence e.g 'I love chicken'
    cout << "Entered String was " << s1 << endl;

    /*
    Notice how if you enter a sentence, it breaks up at the first word
    This is so because, the cin function doesn't read the entire line.
    It only reads till the first blank space or newline.
    */

    cin.ignore(256, '\n');

    /*
    If we want to use getline after cin, we have to use cin.ignore.
    This is so because, getline() skip input after a formatted extraction
    cin.ignore() is used to flush the input buffer completely (rejecting all of the extra characters until a newline is found)

    Refer: https://stackoverflow.com/questions/5739937/using-getlinecin-s-after-cin

    OR:
    https://stackoverflow.com/questions/21567291/why-does-stdgetline-skip-input-after-a-formatted-extraction

    */

    /*
    To get the entire line, we use getline();
    Syntax: getline(cin,variable_name);
    */
    string s2;
    cout << "enter a string: ";
    getline(cin, s2);
    cout << "Entered String was " << s2 << endl;

    // Concept 2: To assigning a value to string

    // We can assign value to string like this:
    string str1 = "Hello World!";
    // Or like this:
    string str2("Hello World");

    // Concept 3: To copy a string to another string

    string st1 = "Hello World";
    string st2, st3;

    // We can copy a string like this:
    st2 = st1;
    // Or like this:
    st3.assign(st1);

    /*
    Note:
    the function strcpy(des,source);
    the function only works with C style strings and not C++ style strings
    i.e. it only works with strings of type char str[]; and not string s1; which are created using standard string data type available in C++ and not C.
    */

    // Concept 4: Postion of string

    string stri = "Hello Guys";
    // To access the letter at index 'x' say 2, we can use:
    cout << stri[2];
    // Or we can use the .at() function aswell
    cout << stri.at(2);

    // Concept 5: Size
    string strin = "Hello World";
    // We can get the length of string by: .length()
    int len1 = strin.length();
    // Or by .size();
    int len2 = strin.size();

    // Both size() and length() are synonyms.

    /*
    Note: .strlen() function is used for C style strings and not C++ style strings
    i.e. it only works with strings of type char str[]; and not string s1;
    */
}