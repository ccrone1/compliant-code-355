#include <iostream>

using namespace std;

/**
 * @brief A simple class representing a Rectangle.
 */
class Rectangle {
public:
    /**
     * @brief Constructor to initialize the Rectangle.
     * @param width The width of the rectangle.
     * @param height The height of the rectangle.
     */
    Rectangle(double width, double height) : width(width), height(height) {}
    
    /**
     * @brief Calculate the area of the rectangle.
     * @return The area of the rectangle.
     */
    double CalculateArea() const {
        return width * height;
    }
    
private:
    double width;  // Width of the rectangle.
    double height; // Height of the rectangle.
};

int main() {
    Rectangle rect(5.0, 3.0);
    
    // Correct usage to calculate area directly, since we are not messing around with .* or ->*
    double area = rect.CalculateArea();
    cout << "Area of the rectangle: " << area << endl;
    
    return 0;
}
