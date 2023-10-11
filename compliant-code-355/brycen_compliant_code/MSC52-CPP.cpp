//MSC52-CPP Brycen Fulscher

/**
 * @file MSC52-CPP.cpp
 *
 * @brief This code calculates the absolute value of an integer and displays the result.
 */

#include <iostream>

/**
 * @brief Function to calculate the absolute value of an integer.
 *
 * This function takes an integer as input and returns its absolute value.
 *
 * @param number The integer for which the absolute value should be calculated.
 * @return The absolute value of the input integer.
 */
int calculateAbsoluteValue(int number) {
    if (number < 0) {
        return -number;
    }
    return number;
}

/**
 * @brief The main function.
 *
 * This function displays a message, takes an integer as input, calculates its absolute value using the 'calculateAbsoluteValue' function,
 * and then displays the result.
 *
 * @return 0 to indicate successful execution.
 */
int main() {
    std::cout << "Absolute Value Calculator" << std::endl;

    int inputNumber;
    std::cout << "Enter an integer: ";
    std::cin >> inputNumber;

    int absValue = calculateAbsoluteValue(inputNumber);

    std::cout << "The absolute value of " << inputNumber << " is " << absValue << std::endl;

    return 0;
}
