// Ls 37.3 Fill Array, cin.clear(), cin.ignore()
// Caleb Curry - C++ Programming Tutorial 48 - Fill Array from Input

#include <iostream>
#include <limits>

void printArray(int arr[], int *size)
{
    for (int i = 0; i < *size; i++)
    {
        std::cout << arr[i] << "\t";
    }
    std::cout << std::endl;

    return (void)0;
}

int main(void)
{

    const int SIZE = 100;
    int arr[SIZE];
    int count = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (std::cin >> arr[i]) // return cin --> true if input stored in arr
        {
            // input worked
            count += 1;
        }
        else
        {
            // If any input other than int, then
            break;
        }
    }

    printArray(arr, &count);

    // BUT now we have a problem. The input which is not stored in a[i] is still
    // in the input buffer

    /*
    What is a buffer?

    A temporary storage area is called a buffer.
    All standard input and output devices contain an input and output buffer.
    In standard C/C++, streams are buffered.
    For example, in the case of standard input, when we press the key on the
    keyboard, it isn’t sent to your program, instead of that, it is sent to the
    buffer by the operating system, till the time is allotted to that program.

    */

    // How does it affect us? Lets see for an example:

    // First we need to clear the cin as the I/O wont work properly if we don't

    /*

    std::cin.clear(); //The cin.clear() clears the error flag on cin (so that future I/O operations will work correctly),


    std::string s;
    std::cin >> s;
    std::cout << s << std::endl;
    //As we can see, we cannot enter the string s, instead the input which couldn't be stored in arr[i] is automatically used
    //This is so because the input is still in the buffer.

    */

    // To clear the buffer, we can use cin.ignore();

    // std::cin.ignore(1000,'\n');

    // cin.ignore(1000, '\n') skips to the next newline (to ignore anything else on the same line as the non-number so that it does not cause another parse failure)
    // However, if the input buffer has string of more than 1000 characters, it will create the same problem.

    // This should work most of the time, but to tackle the issue completely, we can use the following command

    // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    // For this we have to std::numeric_limits

    // IMP: make sure to #include <limits>

    // Thus:
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::string s;
    std::cin >> s;
    std::cout << s << std::endl;

    // Now you can see that it works properly.
}