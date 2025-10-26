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
    Distance d1(8, 9);
    --d1;
    return 0;
}
// Output: Feet Inches Decrement 7 8
