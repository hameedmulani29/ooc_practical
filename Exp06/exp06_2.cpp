#include<iostream>
using namespace std;

class Vehicle {
    public:
        Vehicle() {
            cout << "This is vehicle" << endl;
        }
};

class Car : public Vehicle{
    public:
        Car() {
            cout << "This Vehicle is Car" << endl;
        }
};

class Bus : public Vehicle{
    public: 
        Bus() {
            cout << "This Vehicle is Bus "<< endl;
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
    
    Car obj1;
    Bus obj2;
    return 0;
}