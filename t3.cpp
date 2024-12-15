#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c;
	try {
		if (a - b != 0) {
			cout << "Value of a = " << a << endl;
			cout << "Value of b = " << b << endl;
			cout << "Value of c = " << c << endl;
			d = (a * c) / (a - b);
			cout << "Value of d = " << d << endl;
		}
		else {
			throw 0;
		}
	}
	catch (int d) {
		cout << "Answer is infinite because a - b = 0";
	}
}