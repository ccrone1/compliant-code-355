#include <iostream>

using namespace std;

/**
 * @brief A simple class that simply holds a value
 */
class ValueClass{
    int value;
    
public:
    ValueClass() : value(0) {}

    ValueClass(int valueGiven) : value(valueGiven) {}
    
    /**
     * @brief Overloaded = operator to reset an object of type ValueClass
     */
    ValueClass& operator=(const ValueClass& copy) {
        if (this != &copy) {
            value = copy.value;
        }
        return *this;
    }
    
    /**
     * @return returns the value of a ValueClass object
     */
    int getValue() const {
        return value;
    }
};

int main() {
    ValueClass value1(20); //sets the value to 20
    cout << "Value: " << value1.getValue() << endl; //should be 20
    value1 = ValueClass(10); // Reinitialize value1 using the overloaded assignment operator which is compliant since we are not using any memory copies of a new ValueClass object
    cout << "Value: " << value1.getValue() << endl; //should have copied the value 0 from the constructor
    
    return 0;
}
