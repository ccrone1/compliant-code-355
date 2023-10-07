#include <limits.h> //C library that can also be used in C++
#include <iostream>

using namespace std;

/**
 * @brief Safely add two unsigned integers without wrap.
 *
 * @param ui_a First unsigned integer.
 * @param ui_b Second unsigned integer.
 * @return The sum of uia and uib granted there is no overflow
 * This is similar to the example in the documenation, but I expanded upon it and am demonstrating it with strictly addition
 */
unsigned int add_without_wrap(unsigned int ui_a, unsigned int ui_b) {
    // Check if the sum would exceed the maximum representable value
    if (UINT_MAX - ui_a < ui_b) { //We have an overflow
        return 0;
    }
    else { //no overflow
        return ui_a + ui_b;
    }
}

int main() {
    unsigned int result1 = add_without_wrap(4294967275, 20); // Should NOT overflow (The additon results in the highest number for an unsigned int in C++)
    
    unsigned int result2 = add_without_wrap(4294967276, 20); // SHOULD overflow (The additon results one more than the highest number for an unsigned int in C++)
    
    if (result1 == 0) {
        cout << "Overflow detected for result1." << endl;
    }
    else {
        cout << "Sum for result1: " << result1 << endl;
    }
    
    if (result2 == 0) {
        cout << "Overflow detected for result2." << endl;
    }
    else {
        cout << "Sum for result1: " << result2 << endl;
    }
    
    return 0;
}
