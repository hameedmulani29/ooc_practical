#include<iostream>
using namespace std;

int area(int);
int area(int , int);
float area(float);
float area(float, float);

int main(){
    string name = "Hameed Samir Mulani";
    string className = "SY - B";
    int rollNo = 29;
    string academicYear = "2024-25";

    cout << name << endl;
    cout << className << endl;
    cout << rollNo << endl;
    cout << academicYear << endl;

    int s,l,b;
    float r,bs,ht;

    cout << "Enter side of square: ";
    cin >> s;
    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;
    cout << "Enter radius of circle: ";
    cin >> r;
    cout  << "Enter base and height of triangle: ";
    cin >> bs >> ht;
    cout << "Area of Square is: " << area(s);
    cout << "Area of rectangle is: " << area(l,b);
    cout << "Area of circle is: " << area(r);
    cout << "Area of triangle is: " << area(bs, ht);
}

int area(int s){
    return s*s;
}
int area(int l, int b){
    return l*b;
}
float area(float r){
    return (3.14 * r * r);
}
float area(float bs, float ht){
    return (bs*ht)/2;
}

