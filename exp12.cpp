#include <iostream>
#include <fstream>
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
    
    // Creation of ofstream class object
    ofstream fout;
    string line;

    // by default ios::out mode automatically deletes
    // the content of file. To append the content, open in ios::app
    fout.open("sample.txt", ios::app);
    fout.open("sample.txt");

    // Execute a loop if file successfully opened
    while (fout) {
        // Read a line from standard input
        getline(cin, line);

        // Press -1 to exit
        if (line == "-1")
            break;

        // Write line in file
        fout << line << endl;
    }

    // Close the file
    fout.close();

    // Creation of ifstream class object to read the file
    ifstream fin;
    fin.open("sample.txt");

    // Execute a loop until EOF (End of File)
    while (getline(fin, line)) {
        cout << line << endl;
    }

    // Close the file
    fin.close();
    return 0;
}
