// Ls 38.2 Deque
// https://www.geeksforgeeks.org/deque-cpp-stl/
// https://www.geeksforgeeks.org/deque-vs-vector-in-c-stl/
// https://www.youtube.com/watch?v=WgMPrLX-zsA&ab_channel=CodeHelp-byBabbar

#include <iostream>
#include <deque>

int main()
{

    std::deque<int> deq;

    deq.push_back(1);

    std::cout << deq[0] << std::endl;

    deq.push_front(4);

    std::cout << deq[0] << std::endl;
}