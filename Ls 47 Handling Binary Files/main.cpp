// Ls 47 Handling Binary Files

#include <fstream>
#include <iostream>

// Function to write integers to a binary file
void writeIntegersToFile(const std::string &filename, const int *numbers,
                         size_t count)
{
    std::ofstream output_obj(filename,
                             std::ios::binary); // Open the file in binary mode

    // Check if the file was opened successfully
    if (!output_obj)
    {
        std::cerr << "Failed to open file for writing." << std::endl;
        return;
    }

    // Write integers to the file
    output_obj.write((char *)(numbers), count * sizeof(int));

    // Check if writing was successful
    if (!output_obj)
    {
        std::cerr << "Error writing to file." << std::endl;
        return;
    }

    // Close the file
    output_obj.close();
}

// Function to read integers from a binary file
int *readIntegersFromFile(const std::string &filename, size_t count)
{
    std::ifstream input_obj(filename,
                            std::ios::binary); // Open the file in binary mode
    int *numbers = new int[count];             // Allocate memory to store the read integers

    // Check if the file was opened successfully
    if (!input_obj)
    {
        std::cerr << "Failed to open file for reading." << std::endl;
        return nullptr;
    }

    // Read integers from the file
    input_obj.read((char *)(numbers), count * sizeof(int));

    // Check if reading was successful
    if (!input_obj)
    {
        std::cerr << "Error reading from file." << std::endl;
        delete[] numbers; // Clean up allocated memory before returning nullptr
        return nullptr;
    }

    // Close the file
    input_obj.close();

    return numbers;
}

int main()
{
    const std::string filename = "data.bin";

    // Values to be written to the file
    int valuesToWrite[] = {10, 20, 30, 40, 50};
    size_t numValues = sizeof(valuesToWrite) / sizeof(int);

    // Write integers to the file
    writeIntegersToFile(filename, valuesToWrite, numValues);

    // Read integers from the file
    int *readValues = readIntegersFromFile(filename, numValues);

    // Print the read integers
    if (readValues)
    {
        std::cout << "Values read from file:" << std::endl;
        for (size_t i = 0; i < numValues; ++i)
        {
            std::cout << readValues[i] << std::endl;
        }
        delete[] readValues; // Free allocated memory
    }

    return 0;
}
