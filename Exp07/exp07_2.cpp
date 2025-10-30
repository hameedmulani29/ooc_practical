#include<iostream>
using namespace std;

class Person{
    public:
        Person(){
            cout << "Person's constructor called";
        }
};

class Faculity : public Person{
    public:
        Faculity() {
            cout << "Faculity's constructor called" << endl;
        }
};

class Student : public Person{
    public:
        Student(){
            cout << "Student's constructor called" << endl;
        }
};

class TA : public Faculity , public Student{
    public:
        TA(){
            cout << "TA's constructor called" <<  endl;
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
    
    TA ta;
    return 0;
}