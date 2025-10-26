#include<iostream>
using namespace std;

class Student{
    private:
        char name[30];
        int rollNo;
        float marks;
    public:

        void inputDetails(){
            cout << "Enter Student Name: ";
            cin >> name;
            cout << "Enter roll number";
            cin >> rollNo;
            cout << "Enter marks: ";
            cin >> marks;
        }

        void displayDetails(){
            cout << "Student Name: " << name << endl;
            cout << "Roll Number: " << rollNo << endl;
            cout << "Marks: " << marks << endl;
        }
};


int main(){
    Student s1;
    s1.inputDetails();
    cout << "\n Students Details: \n";
    s1.displayDetails();

    return 0;
}