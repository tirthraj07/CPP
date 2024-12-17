// Ls 15 Random Number Generator
// thenewboston ls 21 C++

#include <iostream>
#include <cstdlib> //to use function rand()
#include <ctime>   //to use time(0) to truly randamize

using namespace std;

int main()
{

    srand(time(0));

    for (int x = 1; x <= 20; x++)
    {
        cout << 1 + (rand() % 6) << endl;
        cout << time(0) << endl;
    }

    return 0;
}

/*
So to get random numbers, we need to include a file called 'C Standard Library' or cstdlib.
With the help of that we can get random numbers by just using rand();

However if we print random nos (cout<<rand;) we can see that we often get large nos.
So as to get small nos, we can use the modules function to get the remainder. For eg rand()%6;

But if we want the nos to be from 1-6 instead of 0-5, we simply add 1. i.e 1+(rand()%6);

However when we print these nos again and again, they seem to be not changing. This is because no maching can think of a random no. Instead they need complex algorithms.

C++ has allowed us to change the algorithm slightly so as to get a different random nos.
That function is called srand();
We simply insert an integer to change it. For eg - srand(43);

However we cannot do this always. So in order to change the algorithm constantly, we have to add something which is constantly changing.

TIME.
Time is always changing. We can take advantage of this fact.
In order to use time, we have to include time.
Then we just have to insert time(0) in srand.
For eg - srand(time(0));

Thus the algorithm is constantly changing and we can truly get a random no.

*/