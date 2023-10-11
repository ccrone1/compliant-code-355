//MEM57-CPP Brycen Fulscher

/**
 * @file MEM57-CPP.cpp
 *
 * @brief This code demonstrates the use of a custom 'new' and 'delete' operator for an aligned vector class.
 */

#include <iostream>
#include <cstdlib>
#include <new>

/**
 * @struct AlignedVector
 *
 * @brief A struct representing an aligned vector with custom 'new' and 'delete' operators.
 */
struct AlignedVector {
    alignas(32) char elems[32];

    /**
     * @brief Custom 'new' operator for AlignedVector.
     *
     * This operator allocates memory using 'std::aligned_alloc' to ensure alignment and throws 'std::bad_alloc' on failure.
     *
     * @param nbytes The size of memory to allocate.
     * @return A pointer to the allocated memory.
     */
    static void* operator new(size_t nbytes) {
        void* p = std::aligned_alloc(alignof(AlignedVector), nbytes);
        if (p) {
            return p;
        }
        throw std::bad_alloc();
    }

    /**
     * @brief Custom 'delete' operator for AlignedVector.
     *
     * This operator deallocates memory using 'free'.
     *
     * @param p A pointer to the memory to deallocate.
     */
    static void operator delete(void* p) {
        free(p);
    }
};

/**
 * @brief Function to create and return a new AlignedVector.
 *
 * This function creates a new AlignedVector using the custom 'new' operator and returns a pointer to it.
 *
 * @return A pointer to the allocated AlignedVector.
 */
AlignedVector* createAlignedVector() {
    AlignedVector* alignedVector = new AlignedVector;
    return alignedVector;
}

/**
 * @brief The main function.
 *
 * This function prints a message for the custom aligned vector example, creates an aligned vector,
 * displays information about the aligned vector (for demonstration), and deallocates it using the custom 'delete' operator.
 *
 * @return 0 to indicate successful execution.
 */
int main() {
    std::cout << "Custom Aligned Vector Example:" << std::endl;

    // Create an aligned vector using the custom 'new' operator
    AlignedVector* vector = createAlignedVector();

    // Display information about the aligned vector (for demonstration)
    std::cout << "Size of AlignedVector: " << sizeof(AlignedVector) << " bytes" << std::endl;

    // Deallocate the aligned vector using the custom 'delete' operator
    delete vector;

    return 0;
}
