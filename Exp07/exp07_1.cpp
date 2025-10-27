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
    Car obj;
    return 0;
}