// Ls 34.4 Convert String to Numbers and vice versa

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string convertToString(int x)
{
    string s;
    stringstream ss;
    // Insert int x into the string stream using stream insertion operator
    ss << x;
    // Extract contents of string stream into string using stream extraction operator
    ss >> s;

    cout << "s : " << s << endl;
    cout << "s+1 : " << s + "1" << endl;
    return s;
}

int convertToInt(string s)
{
    int x;
    stringstream ss;
    // Insert string in stringstream using stream insertion operator
    ss << s;
    // Extract contents of string stream into int using string extraction operator
    ss >> x;
    cout << "x : " << x << endl;
    cout << "x+1 : " << x + 1 << endl;
    return x;
}

int main()
{
    string s = "11010101";
    convertToInt(s);

    int x = 101010;
    convertToString(x);
}