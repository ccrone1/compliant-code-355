//MEM50-CPP Brycen Fulscher

/**
 * @file MEM50-CPP.cpp
 *
 * @brief This code demonstrates the use of a struct and dynamic memory allocation.
 */

#include <iostream>

/**
 * @struct MyStruct
 *
 * @brief A simple struct with a member function to print a message.
 */
struct MyStruct {
  /**
   * @brief Print a message from MyStruct.
   */
  void printMessage() {
    std::cout << "Hello from MyStruct!" << std::endl;
  }
};

/**
 * @brief The main function.
 *
 * This function demonstrates dynamic memory allocation for a MyStruct object,
 * performs some operations with the object, and deallocates the memory when done.
 *
 * @return 0 to indicate successful execution.
 */
int main() {
  MyStruct *myStructPointer = new MyStruct;

  // Do something with MyStruct (you can add your logic here)

  myStructPointer->printMessage();

  // Delete the dynamically allocated object when done
  delete myStructPointer;

  return 0;
}
