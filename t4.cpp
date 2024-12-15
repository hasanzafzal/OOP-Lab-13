#include <iostream>
using namespace std;

void test(int num) {
    try {
        if (num > 0) {
            throw num;
        }
        else {
            throw 'W';
        }
    }
    catch (int num) {
        cout << "Caught an integer: " << num << endl;
    }
    catch (char ch) {
        cout << "Caught a character: " << ch << endl;
    }
}
int main() {
    int x;
	cout << "Enter a number: ";
    cin >> x;
    test(x);
    return 0;
}