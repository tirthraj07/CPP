/*
Refer: https://www.geeksforgeeks.org/stringstream-c-applications/
*/

#include <iostream>
#include <sstream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

void frequencyWords(string s)
{
    map<string, int> FW;
    stringstream ss(s); // Used for breaking words
    string word;        // To store individual words

    while (ss >> word)
    {
        FW[word]++;
    }

    auto it = FW.begin();

    for (; it != FW.end(); it++)
    {
        cout << it->first << " : " << it->second << endl;
    }
}

int main()
{
    string s = "Hello Hello , how are you doing?";
    frequencyWords(s);
}