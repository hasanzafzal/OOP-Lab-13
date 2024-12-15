#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("OOP Lab 13 task1.txt");

    if (!file.is_open()) {
        cout << "Error: Could not open file." << endl;
        return 0;
    }

    char ch;
    while (file.get(ch)) {
        cout << ch;
    }

    file.close();
    return 0;
}