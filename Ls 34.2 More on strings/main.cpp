// Ls 34.2 More on strings
// Buckys C++ Programming Tutorials - 72 - string substrings, swapping, and finding

// Buckys C++ Programming Tutorials - 73 - Final Video for this Series!

// Caleb Curry: C++ Programming Tutorial 27 - String Operation Methods

#include <iostream>
#include <string>
using namespace std;

int main()
{

    /*Concept 1: Substrings

    If we want to create smaller strings from a larger string, we can use
    substring. SYNTAX: stringName.substr(position,length)

    */

    string s1 = "Hello Guysss!!!";
    string s2 = s1.substr(6, 9);
    cout << s2 << endl
         << endl;

    /*
    Important points:
    1. The index of the first character is 0 (not 1).

    2. If pos is equal to the string length, the function returns an empty string.

    3. If pos is greater than the string length, it throws out_of_range. If this
    happens, there are no changes in the string.

    4. If the requested sub-string len is greater than the size of a string, then
    returned sub-string is [pos, size()).

    5. If len is not passed as a parameter, then returned sub-string is [pos,
    size()).
  */

    /*
    Concept 2: Swapping

    1. The function std::swap() is a built-in function in the C++ Standard
    Template Library (STL) which swaps the value of two variables.

    SYNTAX:
    swap(a, b);

    OR
    a.swap(b);

    */

    string a = "apples";
    string b = "oranges";

    cout << a << " " << b << endl;
    swap(a, b);
    cout << a << " " << b << endl;
    a.swap(b);
    cout << a << " " << b << endl;
    b.swap(a);
    cout << a << " " << b << endl
         << endl
         << endl;

    /*
    Concept 3: find() and rfind();

    C++ find() function is part of the standard library function which tries to find the first occurrence of the specified range of element where the range starts with first range to last range
    */
    string str = "ham is spam oh yes i am!";
    cout << str.find("am") << endl;

    // str[0]->h, str[1]->a,str[3]->m
    // This "am" is at index 1 (and 2).

    // Notice how it does not find the "am" at str[9] and str[21].
    // It only looks the first occurance in string from the beginning.

    /*
    The std::string::rfind is a string class member function that is used to search the last occurrence of any character in the string
    */
    cout << str.rfind("am") << endl;
    // Notice how it does not find the "am" at str[1] and str[9].
    // It only looks the first occurance in string from the end.

    /*


    Concept 4:
    1. begin() --> This function returns an iterator to the beginning of the string.
    2. end()	--> This function returns an iterator to the next to the end of the string.
    3. rbegin()	--> This function returns a reverse iterator pointing at the end of the string.
    4. rend()	--> This function returns a reverse iterator pointing to the previous of beginning of the string.
    5. erase --> The function erases a part of the string content, shortening the length of the string.


    */

    // Syntax 1: str.erase();
    string st = "Hello World!!";
    cout << "Before erase: " << st << endl;
    st.erase(); // It will erase all characters.
    cout << "After erase: " << st << endl;

    // Syntax 2: erase(size_type pos)
    st = "Hello World";
    st.erase(3); // It will erase all character from index 3.
    cout << st << endl;

    // Syntax 3: erase (size_type idx, size_type len )
    //- If len is missing, all remaining characters are removed.
    //- Throw out_of_range if idx > size().

    st = "Hello World";
    st.erase(1, 4);
    cout << st << endl;

    // Syntax 4: Erase the single character at iterator position pos.
    // erase (iterator pos)
    //- Return the first character after the last character removed
    //- If no such character is remaining then, returns string::end() i.e. position after the last character.

    st = "Hello World";
    st.erase(st.end() - 2);
    cout << st << endl;

    // 5. Syntax 5: Erase characters from iterator pos. to another iterator pos.
    // erase (iterator beg, iterator end )

    // - Erases all characters of the range [ beg, end)
    // - Returns end i.e. the first character after the
    //   last character removed.
    // - If no such character is remaining then, returns
    //   string::end() i.e. position after the last character

    st = "Hello World";
    st.erase(st.begin() + 1, st.begin() + 5);
    cout << st << endl;

    /*
    Concept 5: replace() Function.

    It replaces each element in the range [first, last) that is equal to oldValue with newValue.

    Syntax:
    replace(position, length, new_value);

    */

    str = "I am Tirthraj Mahajan and I love chicken";
    cout << str << endl;
    str.replace(5, 16, "Lelouch vi Britania");
    cout << str << endl;
    str.replace(str.find("Lelouch"), 7, "Nunnally");
    cout << str << endl;

    /*
    Concept 6: insert() Function

    It is a built-in function in C++ STL that inserts new elements before the element at the specified position, effectively increasing the container size by the number of elements inserted.
    */

    // Syntax: string_name.insert (position, val)

    str = "Hello World";
    str.insert(6, "Nvm ");
    cout << str << endl;

    str = "Hello World!";
    str.insert((str.size()), " I am God!");
    cout << str << endl;

    /*
    Concept 7: Compare strings
    */
    str = "Hello Whats up!";
    if (str == "Hello Whats up!")
    {
        cout << "Equals" << endl;
    }

    // OR:
    //.compare("") returns 1 if there is difference, returns 0 if its same
    if (str.compare("Hello Whats up!") == 0)
    {
        cout << "Equals" << endl;
    }
}