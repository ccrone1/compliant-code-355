#include <iostream>
#include <string>

using namespace std;

/**
 * @brief A simple class that represents a person with a name.
 */
class Person {
    string name;
    
public:
    /**
     * @brief constructor that initializes the name of a Person to an empty string
     */
    Person() : name("") {}
    
    /**
     * @brief Overloaded = operator to make the name of this equal to the name the param's name
     * @param other address on another Person object that will be the goal name
     */
    Person& operator=(const Person& other) {
        if (this != &other) {
            name = other.name; // Reset the name
        }
        return *this;
    }
    
    /**
     * @brief Constructor to initialize the Person with a name.
     * @param setName a string representing the name of the person.
     */
    Person(const string& setName) : name(setName) {}
    
    /**
     * @return Returns the name of the person.
     */
    string getName() const {
        return name;
    }
    
    /**
     * @brief Resets the name of the person.
     * @param newName a string representing the new name.
     */
    void resetName(const string& newName) {
        name = newName;
    }
};

int main() {
    Person person1("Cameron");
    Person person2("Alex");
    
    cout << "Name of person1: " << person1.getName() << endl; // Should be Cameron
    cout << "Name of person2: " << person2.getName() << endl; // Should be Alex
    
    person2 = person1; // compliant conversion since the original object (person1 is in no way changed)
    
    cout << "Name of person1: " << person1.getName() << endl; // Should be Cameron
    cout << "Name of person2: " << person2.getName() << endl; // Should be Cameron
    
    return 0;
}
