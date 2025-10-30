#include <iostream>
#include <list>
using namespace std;

int main() {
    string name = "Hameed Samir Mulani";
    string className = "SY - B";
    int rollNo = 29;
    string academicYear = "2024-25";

    cout << name << endl;
    cout << className << endl;
    cout << rollNo << endl;
    cout << academicYear << endl;

    // Defining list
    list<int> gqList = {12, 45, 8, 6};

    for (auto i : gqList) {
        cout << i << " ";
    }

    return 0;
}