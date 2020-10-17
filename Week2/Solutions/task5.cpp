#include <iostream>
using namespace std;
int task5() {
	short a, b, c;
	cout << "First digit: ";
	cin >> a;
	cout << "Second digit: ";
	cin >> b;
	cout << "Third digit: ";
	cin >> c;
	if (a == b && b == c) {
		cout << a << b << c << endl;
	}
	else if (a >= b && a >= c) {
		if (b >= c) {
			cout << a << b << c;
		}
		else {
			cout << a << c << b;
		}
	}
	else if (b >= a && b >= c) {
		if (a >= c) {
			cout << b << a << c;
		}
		else {
			cout << b << c << a;
		}
	}
	else if (c >= b && c >= a) {
		if (b >= a) {
			cout << c << b << a;
		}
		else {
			cout << c << a << b;
		}
	}
	cout << endl;
	system("pause");
	return 0;
}