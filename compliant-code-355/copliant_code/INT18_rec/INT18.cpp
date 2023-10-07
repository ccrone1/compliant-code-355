#include <iostream>

using namespace std;

/**
 * @brief Calculate the sum of two numbers safely.
 * This function takes two integers, `num1` and `num2`, and calculates their sum.
 * It ensures that the calculation is performed in a larger integer size
 * to prevent potential overflow
 */

int main() {
    int num1 = 2147483647;  // Maximum value for an int
    int num2 = 1;
    
    // Calculate the sum safely.
    long result = static_cast<long>(num1) + num2;
    
    cout << "Result after the cast in the addition: " << result << endl;
    
    return 0;
}

