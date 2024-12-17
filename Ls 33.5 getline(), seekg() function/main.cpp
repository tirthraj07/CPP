// Ls 33.5 getline(), seekg() function

#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{

    ifstream data("data.txt", ios::in);

    string str;
    data >> str;
    cout << str << endl;

    // Notice how only 'This' is printed. It breaks up at spaces and newline

    // To get the entire line, we use getline() function
    //  Syntax: getline(fileObject, variableName);

    string str2;
    getline(data, str2);
    cout << str2 << endl;

    // Now the entire line is printed.
    // But notice how it starts from ' file' and not 'This' (i.e the beginning)

    // This is so because, when we used data>>str, it shifted the file pointer to the second char (i.e ' ' --> space)

    // To reset the file pointer, we either use seekg or tellg depending on ifstream or ofstream

    // ifstream--->seekg; ofstream--->tellg;

    // seekg/tellg repositions the file pointer;

    // Syntax: fileObject.seekg(offset,position)
    //  it means how many places to shift (offset) from where (position)

    /*
    For eg;

    fileObject.seekg(6,ios_base::beg)
    // here the file pointer will move 7 positons (index starts from 0) from beginning


    Positions:

    ios_base::beg: offset from the beginning of the stream’s buffer.
    ios_base::cur: offset from the current position in the stream’s buffer.
    ios_base::end: offset from the end of the stream’s buffer.

    */

    // Thus to tackle our issue, we should reposition from the begining of the file, i.e offset 0 from position beginning

    string str3;
    data.seekg(0, ios_base::beg);
    getline(data, str3);
    cout << str3 << endl;
}
