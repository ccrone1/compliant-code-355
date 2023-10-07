#include <iostream>

using namespace std;

/**
 *@brief class for a Parent function (since we are making a polymorphic class)
 */
class Parent {
public:
    /**
     *@brief function that simply prints out "Parent class"
     */
    virtual void print() {
        cout << "Parent class" << endl;
    }
};

/**
 *@brief class for a Child function that inherits Parent (since we are making a polymorphic class)
 */
class Child : public Parent {
public:
    /**
     *@brief function that simply prints out "Child class"
     */
    void print() override { //override is a keyword that will make a Child object use this print instead of the Parent print which helps us avoid pointer arithmetic
        cout << "Child class" << endl;
    }
};

int main() {
    Parent* objects[] = {new Parent(), new Child()};
    
    for (Parent* obj : objects) {
        obj->print(); // Calls the appropriate overridden function (Since we used override, we do not have to worry about pointer arithmetic)
    }
    
    // Clean up dynamically allocated objects
    for (Parent* obj : objects) {
        delete obj;
    }
    
    return 0;
}


