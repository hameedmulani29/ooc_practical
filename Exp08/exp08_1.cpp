#include<iostream>
using namespace std;

class Distance {
    public:
        int feet, inch;
        Distance(int f, int i) {
            feet = f;
            inch = i;
        }
        void operator--() {
            feet--;
            inch--;
            cout << "Inches Decrement " << feet << " " << inch;
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
    
    Distance d1(8, 9);
    --d1;
    return 0;
}
// Output: Feet Inches Decrement 7 8
