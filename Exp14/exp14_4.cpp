#include <iostream>
#include <vector>
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
    
    // Initialize a vector of int type
    vector<int> numbers = {1, 100, 10, 70, 100};

    // Print the vector
    cout << "Numbers are: ";
    for (auto& num : numbers) {
        cout << num << " ";
    }

    return 0;
}