// Ls 37.7 Nested Vectors

// Caleb Curry - C++ Programming Tutorial 65 - Multidimensional Arrays and Nested Vectors

#include <iostream>
#include <vector>

int main()
{
    // Revising Multidimensional array

    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // it is necessary to mention the number of arrays in the arr i.e no. of rows

    std::cout << "Multidimensional Array" << std::endl;

    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            std::cout << arr[r][c] << '\t';
        }
        std::cout << std::endl;
    }

    std::cout << std::endl
              << std::endl
              << std::endl
              << "Nested Vector" << std::endl;

    std::vector<std::vector<int>> table = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            std::cout << table[r][c] << '\t';
        }
        std::cout << std::endl;
    }
}