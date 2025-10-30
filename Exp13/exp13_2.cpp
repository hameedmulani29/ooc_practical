#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception {
public:
    const char* what() const throw() {
        return "Attempted to divide by zero!\n";
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
    
    int x, y;
    cout << "Enter the two numbers: " << endl;
    cin >> x >> y;

    try {
        if (y == 0) {
            MyException z;
            throw z;
        }
        else {
            cout << "x / y = " << x / y << endl;
        }
    }
    catch (exception& e) {
        cout << e.what();
    }

    return 0;
}