#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename, content;
    cout << "Enter the filename: ";
    cin >> filename;
    cout << "Enter the content to write: ";
    getline(cin.ignore(), content);
    ofstream file(filename);
    if (!file.is_open()) {
        cout << "Error: Could not open file." << endl;
        return 1;
    }
    file << content;
    file.close();
    cout << "Content written to " << filename << endl;
    return 0;
}