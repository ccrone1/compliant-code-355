//MEM54-CPP Brycen Fulscher

/**
 * @file MEM54-CPP.cpp
 *
 * @brief This code demonstrates the use of std::aligned_storage for memory allocation and deallocation.
 */

#include <iostream>
#include <new>

/**
 * @brief Function to allocate and use a long.
 *
 * This function demonstrates memory allocation for a long using std::aligned_storage,
 * sets a value to the allocated long, and uses it (printing for demonstration).
 * It also deallocates the memory when done.
 */
void allocateAndUseLong() {
    char character; // Placeholder character, used elsewhere in the function

    // Allocate memory for a long using std::aligned_storage
    std::aligned_storage<sizeof(long), alignof(long)>::type storage;
    long *longPointer = ::new (&storage) long;

    // Set a value to the allocated long
    *longPointer = 42;

    // Use the allocated long (printing for demonstration)
    std::cout << "Value of long: " << *longPointer << std::endl;

    // Deallocate the memory
    ::operator delete(longPointer);
}

/**
 * @brief The main function.
 *
 * This function prints a message for allocating and using a long, and then calls the 'allocateAndUseLong' function.
 *
 * @return 0 to indicate successful execution.
 */
int main() {
    std::cout << "Allocating and using a long:" << std::endl;
    allocateAndUseLong();

    return 0;
}
