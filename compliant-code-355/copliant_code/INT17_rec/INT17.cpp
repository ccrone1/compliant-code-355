#include <limits.h>
#include <iostream>

using namespace std;

// Calculate a bitmask to set all bits to 1 for unsigned long
#define ULONG_BITMASK ((unsigned long)(-1)) //macro that uses -1 to set  to represent all bits set to 1 and explicitly casts it to unsigned long to ensure that the result is of the correct type of unsinged longs. I was a little confued on this recommendaiton and macro, so I took help from the documentation and the internet

int main() {
    const unsigned long mask = ULONG_BITMASK;
    
    // Use the mask for bit operaions
    unsigned long value = 0xABCD1234;
    unsigned long result = value | mask;
    
    // Show the results
    cout << "Original value: " << value << endl;
    cout << "Masked value: " << result << endl;
    
    return 0;
}

