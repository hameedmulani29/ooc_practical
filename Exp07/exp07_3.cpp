#include<iostream>
using namespace std;

class Vehicle{
    public:
        Vehicle(){
            cout << "This is Vehicle" << endl;
        }
};

class Fourwheeler {
    public:
        Fourwheeler(){
            cout << "This is 4 wheeler" << endl;
        }
};

class Car : public Vehicle, public Fourwheeler{
    public:
        Car(){
            cout << "This 4 wheeler is car" << endl;
        }
};

int main(){

    Car c;
    return 0;
}