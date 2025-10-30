#include<iostream>
#include<stdio.h>
using namespace std;

class Student{
    int roll;
    char name[25];

    public: 
        void getData(){
            cout << "\n-----------------------------------";
            cout <<"\n Enter Roll No:" << endl;
            cin >> roll;
            cout << "Enter Student Name: "<< endl;
            cin >> name;
        }

        void putData(){
            cout << "\n------------------------------------" << endl;
            cout << "*********** Students Marklist ***********";
            cout << "\n------------------------------------" << endl;
            cout << "\n Roll No: " << roll;
            cout << "\n Student Name: " << name << endl;
        }
};


class StudentExam : public Student {
    public:
        int sub1, sub2, sub3, sub4, sub5, sub6;
        float per;

    public:
        void accept_data(){
            getData();
            cout << "Enter marks for subject 1 : " << endl;
            cin >> sub1;
            cout << "Enter marks for subject 2 : " << endl;
            cin >> sub2;
            cout << "Enter marks for subject 3 : " << endl;
            cin >> sub3;
            cout << "Enter marks for subject 4 : " << endl;
            cin >> sub4;
            cout << "Enter marks for subject 5 : " << endl;
            cin >> sub5;
            cout << "Enter marks for subject 6 : " << endl;
            cin >> sub6;
        }

        void display_data(){
            putData();
            cout << "Marks of Subject 1: " << sub1 << endl;
            cout << "Marks of Subject 2: " << sub2 << endl;
            cout << "Marks of Subject 3: " << sub3 << endl;
            cout << "Marks of Subject 4: " << sub4 << endl;
            cout << "Marks of Subject 5: " << sub5 << endl;
            cout << "Marks of Subject 6: " << sub6 << endl;
            
        }
};

class StudentResult : public StudentExam {
    public:
        void calculate(){
            per = (sub1 + sub2 + sub3 + sub4 + sub5 + sub6)/ 6.0;
            cout << "\n Total Percentage : " << per;
            cout << "\n-----------------------------\n";
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
    
    StudentResult str;
    int count, i;
    cout << "Enter No. of Student You Want?: ";
    cin >> count;

    for(i = 0; i < count; i++){
        str.accept_data();
        str.display_data();
        str.calculate();
    }

    return 0;
}