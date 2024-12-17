File handling is used to store data permanently in a computer.
Using file handling we can store our data in secondary memory (Hard disk).

Refer to this diagram:
![Library Hierarchy](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20191129162746/CPP-File-Handling.png)
or:
https://www.geeksforgeeks.org/file-handling-c-classes/?ref=lbp

1. **ios**:-

ios stands for input output stream.
This class is the base class for other classes in this class hierarchy.
This class contains the necessary facilities that are used by all the other derived classes for input and output operations.

2. **istream**:-

istream stands for input stream.
This class is derived from the class ‘ios’.
This class handle input stream.
The extraction operator(>>) is overloaded in this class to handle input streams from files to the program execution.
This class declares input functions such as get(), getline() and read()

3. **ostream**:-

ostream stands for output stream.
This class is derived from the class ‘ios’.
This class handle output stream.
The insertion operator(<<) is overloaded in this class to handle output streams to files from the program execution.
This class declares output functions such as put() and write().

4. **iostream**:-

iostream is a combination of input and output stream in a programming language.
Iostream provides us with various functions to handle the input and output stream in c++.
This iostream header file contains various functions, including cin, cout, cin, and many more.
With the help of this, we can read the input, print them, and also trace the error, if any.

5. **streambuf**:-

This class contains a pointer which points to the buffer which is used to manage the input and output streams.

6. **fstreambase**:-

This class provides operations common to the file streams. Serves as a base for fstream, ifstream and ofstream class.
This class contains open() and close() function.

7. **ifstream**:-

This class provides input operations.
It contains open() function with default input mode.
Inherits the functions get(), getline(), read(), seekg() and tellg() functions from the istream.

8. **ofstream**:-

This class provides output operations.
It contains open() function with default output mode.
Inherits the functions put(), write(), seekp() and tellp() functions from the ostream.

9. **fstream**:-

This class provides support for simultaneous input and output operations.
Inherits all the functions from istream and ostream classes through iostream.

10. **filebuf**:-

Its purpose is to set the file buffers to read and write.
We can also use file buffer member function to determine the length of the file.

Opening a file:
#include<fstream>

ofstream objectName("filename.extension",ios::openmode) //by default (ifstream) ios::in or (ofstream) ios::out

<table>
<thead>
<tr>
    <td>Sr. no</td>
    <td>Member Constant</td>
    <td>Stands For</td>
    <td>Access</td>
</tr>
</thead>
<tr>
    <td>1.</td>
    <td>in</td>
    <td>input</td>
    <td>File open for reading only: the internal stream buffer supports input operations.</td>
</tr>
<tr>
    <td>2.</td>
    <td>out</td>
    <td>output</td>
    <td>File open for writing: the internal stream buffer supports output operations.</td>
</tr>
<tr>
    <td>3.</td>
    <td>binary</td>
    <td>binary</td>
    <td>Operations are performed in binary mode rather than text.</td>
</tr>
<tr>
    <td>4.</td>
    <td>ate</td>
    <td>at end</td>
    <td>The output position starts at the end of the file.</td>
</tr>
<tr>
    <td>5.</td>
    <td>app</td>
    <td>append</td>
    <td>All output operations happen at the end of the file, appending to its existing contents</td>
</tr>
<tr>
    <td>6.</td>
    <td>trunc</td>
    <td>truncate</td>
    <td>Any contents that existed in the file before it is open are discarded.</td>
</tr>
<tr>
    <td>7.</td>
    <td>nocreate</td>
    <td>nocreate</td>
    <td>Open file fails if file doesn't exist</td>
</tr>
<tr>
    <td>8.</td>
    <td>noreplace</td>
    <td>noreplace</td>
    <td>Open file fails if file already exists.</td>
</tr>
</table>
