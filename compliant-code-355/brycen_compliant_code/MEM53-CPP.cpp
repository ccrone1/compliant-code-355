//MEM53-CPP Brycen Fulscher

/**
 * @file MEM53-CPP.cpp
 *
 * @brief This code simulates a customer using a 'Customer' class.
 */

#include <iostream>
#include <cstdlib>
#include <new>

/**
 * @class Customer
 *
 * @brief A class representing a customer.
 */
class Customer {
public:
    Customer(); ///< Constructor for the 'Customer' class.
    void purchase(); ///< Member function to simulate a purchase by the customer.
};

/**
 * @brief Constructor for the 'Customer' class.
 *
 * This constructor prints a message when a customer is created.
 */
Customer::Customer() {
    std::cout << "Customer created" << std::endl;
}

/**
 * @brief Member function to simulate a customer making a purchase.
 *
 * This function prints a message when a customer makes a purchase.
 */
void Customer::purchase() {
    std::cout << "Customer made a purchase" << std::endl;
}

/**
 * @brief Function to simulate a customer.
 *
 * This function allocates memory for a 'Customer' object, creates the customer,
 * simulates a purchase, and then deallocates the memory.
 */
void simulateCustomer() {
    void *ptr = std::malloc(sizeof(Customer));
    Customer *customer = new (ptr) Customer;
    customer->purchase();
    customer->~Customer();
    std::free(ptr);
}

/**
 * @brief The main function.
 *
 * This function prints a message for simulating a customer and calls the 'simulateCustomer' function.
 *
 * @return 0 to indicate successful execution.
 */
int main() {
    std::cout << "Simulation of a customer:" << std::endl;
    simulateCustomer();
    return 0;
}
