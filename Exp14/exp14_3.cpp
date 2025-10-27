#include <iostream>
#include <list>
using namespace std;

int main() {
    // Defining list
    list<int> gqList = {12, 45, 8, 6};

    for (auto i : gqList) {
        cout << i << " ";
    }

    return 0;
}