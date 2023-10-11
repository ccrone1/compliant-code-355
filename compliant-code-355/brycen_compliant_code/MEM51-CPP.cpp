//MEM51-CPP Brycen Fulscher

/**
 * @file MEM51-CPP.cpp
 *
 * @brief This code demonstrates dynamic memory allocation and release using the new operator with std::nothrow.
 */

#include <new>      // Include for new and std::nothrow
#include <iostream>

/**
 * @brief Allocate and release memory for an integer.
 *
 * This function uses the new operator with std::nothrow to allocate memory for an integer,
 * checks for allocation failure, performs operations with the allocated memory (if successful),
 * and releases the memory when done.
 */
void allocateAndReleaseMemory() {
    int* intPointer = new (std::nothrow) int;
    
    if (intPointer == nullptr) {
        // Handle allocation failure
        std::cout << "Memory allocation failed!" << std::endl;
    }
    else {
        // Memory allocation was successful
        // Do something with the allocated memory (e.g., store a value)
        
        // Release the allocated memory when done
        delete intPointer;
    }
}

/**
 * @brief The main function.
 *
 * This function calls the allocateAndReleaseMemory function and returns 0 to indicate successful execution.
 *
 * @return 0 to indicate successful execution.
 */
int main() {
    allocateAndReleaseMemory();
    return 0;
}
