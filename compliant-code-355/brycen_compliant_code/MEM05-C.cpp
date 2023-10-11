//MEM05-C Brycen Fulscher

/**
 * @file MEM05-C.cpp
 *
 * @brief This code demonstrates dynamic memory allocation for a large array and proper memory deallocation.
 */

#include <iostream>
#include <cstdlib>  // Include for malloc and free

/**
 * @brief Allocate a large heap array.
 *
 * This function allocates memory for a large character array, checks for errors,
 * processes the array, and ensures the allocated memory is freed when done.
 */
void allocateLargeHeapArray() {
  char* largeArray = static_cast<char*>(std::malloc(1000000));
  if (largeArray == nullptr) {
    std::cerr << "Error: Memory allocation failed" << std::endl;
    exit(1);  // Return an error code to indicate failure
  }

  // Continue processing the largeArray here

  // Don't forget to free the allocated memory
  free(largeArray);
}

/**
 * @brief The main function.
 *
 * This function calls the allocateLargeHeapArray function and returns 0 to indicate success.
 *
 * @return 0 to indicate successful execution.
 */
int main() {
  allocateLargeHeapArray();
  return 0;  // Return 0 to indicate success
}
