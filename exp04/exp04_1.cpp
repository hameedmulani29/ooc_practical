#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor with default values
    Rectangle() : length(1.0), width(1.0) {}

    // Constructor with custom values
    Rectangle(double len, double wid) : length(len), width(wid) {}

    // Destructor
    ~Rectangle() {
        cout << "Rectangle object destroyed." << endl;
    }

    // Getter methods
    double getLength() const { return length; }
    double getWidth() const { return width; }

    // Setter methods
    void setLength(double len) { length = len; }
    void setWidth(double wid) { width = wid; }

    // Calculate and return the area
    double calculateArea() const { return length * width; }

    // Calculate and return the perimeter
    double calculatePerimeter() const { return 2 * (length + width); }
};

int main() {

    string name = "Hameed Samir Mulani";
    string className = "SY - B";
    int rollNo = 29;
    string academicYear = "2024-25";

    cout << name << endl;
    cout << className << endl;
    cout << rollNo << endl;
    cout << academicYear << endl;
    
    // Create a rectangle with custom values
    Rectangle rect(4.0, 40.0);

    // Display properties
    cout << "Rectangle properties:" << endl;
    cout << "Length: " << rect.getLength() << endl;
    cout << "Width: " << rect.getWidth() << endl;
    cout << "Area: " << rect.calculateArea() << endl;
    cout << "Perimeter: " << rect.calculatePerimeter() << endl;

    return 0;
}
