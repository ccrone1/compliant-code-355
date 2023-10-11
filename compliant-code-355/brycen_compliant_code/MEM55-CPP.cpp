//MEM55-CPP Brycen Fulscher

/**
 * @file MEM55-CPP.cpp
 *
 * @brief This code demonstrates custom memory allocation and deallocation using custom 'new' and 'delete' operators.
 */

#include <iostream>
#include <new>

/**
 * @brief A custom memory allocation function.
 *
 * This function simulates custom memory allocation (you can implement it elsewhere) and returns a pointer to the allocated memory.
 *
 * @param size The size of memory to allocate.
 * @return A pointer to the allocated memory.
 */
void* customAllocateMemory(std::size_t size) {
    // Simulate custom memory allocation (you can implement it elsewhere)
    void* memory = std::malloc(size);
    return memory;
}

/**
 * @brief A custom memory deallocation function.
 *
 * This function simulates custom memory deallocation (you can implement it elsewhere) for the given pointer.
 *
 * @param ptr A pointer to the memory to deallocate.
 */
void customDeallocateMemory(void* ptr) {
    // Simulate custom memory deallocation (you can implement it elsewhere)
    std::free(ptr);
}

/**
 * @brief Custom 'new' operator.
 *
 * This custom 'new' operator allocates memory using the custom allocation function and throws a 'std::bad_alloc' exception if allocation fails.
 *
 * @param size The size of memory to allocate.
 * @return A pointer to the allocated memory.
 */
void* customNew(std::size_t size) {
    if (void* ret = customAllocateMemory(size)) {
        return ret;
    }
    throw std::bad_alloc();
}

/**
 * @brief Custom 'delete' operator.
 *
 * This custom 'delete' operator deallocates memory using the custom deallocation function. It does not consider the size of the allocated memory.
 *
 * @param ptr A pointer to the memory to deallocate.
 */
void customDelete(void* ptr) noexcept {
    customDeallocateMemory(ptr);
}

/**
 * @brief Custom 'delete' operator with size.
 *
 * This custom 'delete' operator deallocates memory using the custom deallocation function and considers the size of the allocated memory. However, the size is not used in this implementation.
 *
 * @param ptr A pointer to the memory to deallocate.
 * @param size The size of the allocated memory (not used in this implementation).
 */
void customDelete(void* ptr, std::size_t size) noexcept {
    customDeallocateMemory(ptr);
}

/**
 * @brief The main function.
 *
 * This function demonstrates custom memory allocation and deallocation using custom 'new' and 'delete' operators. It allocates, initializes, and deallocates memory for an integer.
 *
 * @return 0 to indicate successful execution.
 */
int main() {
    std::cout << "Custom Memory Allocation and Deallocation Example:" << std::endl;

    // Allocate memory using the custom 'new' operator
    int* integerPtr = static_cast<int*>(customNew(sizeof(int)));

    // Initialize the allocated memory
    *integerPtr = 42;

    // Display the value
    std::cout << "Value: " << *integerPtr << std::endl;

    // Deallocate memory using the custom 'delete' operator
    customDelete(integerPtr);

    return 0;
}
