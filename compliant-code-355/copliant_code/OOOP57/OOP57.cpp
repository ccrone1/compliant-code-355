#include <iostream>

using namespace std;

/**
 * @brief A simple class that simply holds a value
 */
class ValueClass{
    int value;
    
public:
    ValueClass() : value(0) {}
    
    /**
     * @brief Overloaded = operator to reset an object of type ValueClass
     */
    ValueClass& operator=(const ValueClass& copy) {
        if (this != &copy) {
            value = 0; // Reset the value
        }
        return *this;
    }
    
    /**
     * @return returns the value of a ValueClass object
     */
    int getValue() const {
        return value;
    }
    
    /**
     * @brief Constructor to initialize the Rectangle.
     * @param setValue and integer which will make the value of the ValueClass the input value
     */
    void setValue(int setValue) {
        value = setValue;
    }
};

int main() {
    ValueClass value1;
    value1.setValue(20); //sets the value to 20
    std::cout << "Value: " << value1.getValue() << endl; //should be 20
    value1 = ValueClass(); // Reinitialize value1 using the overloaded assignment operator which is compliant since we are not using any memory copies of a new ValueClass object
    std::cout << "Value: " << value1.getValue() << endl; //shoudl have copied the value 0 from the constructor
    
    return 0;
}
