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

    string name = "Hameed Samir Mulani";
    string className = "SY - B";
    int rollNo = 29;
    string academicYear = "2024-25";

    cout << name << endl;
    cout << className << endl;
    cout << rollNo << endl;
    cout << academicYear << endl;
    
    Bus obj;
    return 0;
}
