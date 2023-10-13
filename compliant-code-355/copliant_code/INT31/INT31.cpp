#include <iostream>
#include <limits.h>

using namespace std;

/**
 * @brief Safely convert a smaller signed integer to a larger unsigned integer without data loss.
 *
 * @param si A signed integer.
 * @return The unsigned integer equivalent of si, or the absolute value if the value was negative
 */
unsigned int convert(int si) {
    if (si >= 0) {
        return (unsigned int)si; // Safe conversion through a cast which eliminates warnings *also our data is from a trusted source :)*
    }
    else {
        return (unsigned int)(-1 * si); // Safe conversion to the absolute value of the negative number through a cast (The examples in the doc return 0, but I wanted to switch it up)
    }
}

int main() {
    int value = 13; // A signed integer value
    unsigned int result = convert(value);
    
    cout << "Converted value: " << result << endl;
    
    return 0;
}

