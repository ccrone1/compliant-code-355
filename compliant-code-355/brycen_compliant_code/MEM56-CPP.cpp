//MEM56-CPP Brycen Fulscher

/**
 * @file MEM56-CPP.cpp
 *
 * @brief This code demonstrates the use of std::shared_ptr to share ownership of an integer.
 */

#include <iostream>
#include <memory>

/**
 * @brief Function to share ownership of an integer using std::shared_ptr.
 *
 * This function creates two shared_ptr objects, sharedPtr1 and sharedPtr2, that share ownership of an integer.
 * It modifies the value of the integer through sharedPtr1 and prints the values held by both shared_ptr objects for demonstration.
 */
void shareIntegers() {
    std::shared_ptr<int> sharedPtr1 = std::make_shared<int>();
    std::shared_ptr<int> sharedPtr2(sharedPtr1);

    // Modify the value through one of the shared_ptr
    *sharedPtr1 = 42;

    // Print the values (for demonstration)
    std::cout << "Value held by sharedPtr1: " << *sharedPtr1 << std::endl;
    std::cout << "Value held by sharedPtr2: " << *sharedPtr2 << std::endl;
}

/**
 * @brief The main function.
 *
 * This function prints a message for sharing integers with std::shared_ptr and calls the 'shareIntegers' function.
 *
 * @return 0 to indicate successful execution.
 */
int main() {
    std::cout << "Sharing Integers with shared_ptr:" << std::endl;
    shareIntegers();

    return 0;
}
