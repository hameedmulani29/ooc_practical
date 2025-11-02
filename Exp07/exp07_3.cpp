#include<iostream>
using namespace std;

class Vehicle{
    public:
        Vehicle(){
            cout << "This is Vehicle" << endl;
        }
};

class Fare {
    public:
        Fare(){
            cout << "This vehicle has fare" << endl;
        }
};

class Bus : public Vehicle, public Fare{
    public:
        Bus(){
            cout << "This Vehicle is Bus and has Fare" << endl;
        }
};

int main(){

    Bus obj;
    return 0;
}
