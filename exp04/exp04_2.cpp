#include <iostream>
using namespace std;

class construct {
public:
    float area;

    // Constructor with no parameters
    construct() {
        area = 0;
    }

    // Constructor with two parameters
    construct(int a, int b) {
        area = a * b;
    }

    void disp() {
        cout << area << endl;
    }
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
    
    // Constructor overloading with two different constructors
    construct o1;
    construct o2(10, 20);

    o1.disp();
    o2.disp();

    return 1;
}
