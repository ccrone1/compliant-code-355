//MEM52-CPP Brycen Fulscher

/**
 * @file MEM52-CPP.cpp
 *
 * @brief This code defines two structs, Person and Address, and a function to print their information.
 */

#include <iostream>
#include <string>

/**
 * @struct Person
 *
 * @brief A struct representing a person with a name and age.
 */
struct Person {
    std::string name; ///< The name of the person.
    int age; ///< The age of the person.
    
    /**
     * @brief Constructor for the Person struct.
     * @param n The name of the person.
     * @param a The age of the person.
     */
    Person(const std::string& n, int a) : name(n), age(a) {}
};

/**
 * @struct Address
 *
 * @brief A struct representing an address with street, city, and zip code.
 */
struct Address {
    std::string street; ///< The street of the address.
    std::string city; ///< The city of the address.
    std::string zipCode; ///< The zip code of the address.
    
    /**
     * @brief Constructor for the Address struct.
     * @param s The street of the address.
     * @param c The city of the address.
     * @param z The zip code of the address.
     */
    Address(const std::string& s, const std::string& c, const std::string& z) : street(s), city(c), zipCode(z) {}
};

/**
 * @brief Function to print person and address information.
 * @param person The Person object to print.
 * @param address The Address object to print.
 */
void printPersonAndAddress(const Person &person, const Address &address) {
    std::cout << "Person Information:" << std::endl;
    std::cout << "Name: " << person.name << std::endl;
    std::cout << "Age: " << person.age << std::endl;
    std::cout << "\nAddress Information:" << std::endl;
    std::cout << "Street: " << address.street << std::endl;
    std::cout << "City: " << address.city << std::endl;
    std::cout << "Zip Code: " << address.zipCode << std::endl;
}

/**
 * @brief The main function.
 *
 * This function creates a Person and an Address object,
 * and then calls the printPersonAndAddress function to display their information.
 *
 * @return 0 to indicate successful execution.
 */
int main() {
    // Create a Person object
    Person person("John Doe", 30);
    
    // Create an Address object
    Address address("123 Main St", "Anytown", "12345");
    
    // Call the function to print person and address information
    printPersonAndAddress(person, address);

    return 0;
}
