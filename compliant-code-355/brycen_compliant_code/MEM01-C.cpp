//MEM01-C Brycen Fulscher

/**
 * @file MEM01-C.cpp
 *
 * @brief This code demonstrates proper memory deallocation and preventing dangling pointers.
 */

#include <iostream>

/**
 * @brief The main function.
 *
 * This function allocates memory for an integer, assigns a value to it,
 * and then properly deallocates the memory to prevent a dangling pointer.
 *
 * @return 0 to indicate successful execution.
 */
int main() {
    int *data = new int;

    // Assign a value to the allocated memory
    *data = 42;
    std::cout << "Value before freeing: " << *data << std::endl;

    // Free the memory and set the pointer to nullptr to prevent dangling
    delete data;
    data = nullptr;

    // Attempting to access the pointer now should not lead to a dangling pointer
    if (data == nullptr) {
        std::cout << "Pointer is set to nullptr after freeing" << std::endl;
    } else {
        std::cout << "Dangling pointer! This should not be reached." << std::endl;
    }

    return 0;
}
