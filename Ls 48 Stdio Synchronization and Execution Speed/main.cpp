#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

#define MAX 100000

void foo()
{
    for (int i = 1; i <= MAX; i++)
    {
        cout << i << "\n";
    }
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        cerr << "Invalid Initiation" << endl;
        cerr << "Syntax: ./a.exe [ON/OFF]" << endl;
        return EXIT_FAILURE;
    }
    bool SYNCHRONIZED_STREAMS = true;
    if (argv[1] == "OFF")
    {
        SYNCHRONIZED_STREAMS = false;
    }

    time_t start, end;
    time(&start);

    ios_base::sync_with_stdio(SYNCHRONIZED_STREAMS);

    foo();

    time(&end);

    double time_taken = double(end - start);
    cout << "\n\n\n\n\n----- Total Execution Time (with ios_base::sync_with_stdio(" << SYNCHRONIZED_STREAMS << ")): " << fixed << time_taken << setprecision(10);
    cout << " sec" << endl;
    return EXIT_SUCCESS;
}
