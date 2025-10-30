#include<iostream>
using namespace std;

class Vehicle{
    public:
        Vehicle() {
            cout << "This is a Vehicle" << endl;
        }
};

class FourWheeler{
    public:
        FourWheeler(){
            cout << "This is 4 wheeler" << endl;
        }
};

class Car : public Vehicle, public FourWheeler{
    public:
        Car() {
            cout << "This 4 Wheeler Vehicle is Car" << endl;
        }
};


int main(){

    string name = "Hameed Samir Mulani";
    string className = "SY - B";
    int rollNo = 29;
    string academicYear = "2024-25";

    cout << name << endl;
    cout << className << endl;
    cout << rollNo << endl;
    cout << academicYear << endl;
    
    Car obj;
    return 0;
}