#include <iostream>
using namespace std;
int task12() {
	int n;
	cout << "N: ";
	cin >> n;
	if (cin.fail() || n % 2 == 0) {
		cout << "Wrong input!" << endl;
	}
	else {
		int num_rows = n / 2 + 1;
		for (int i = 0; i < num_rows; i++) {
			for (int spaces = 0; spaces < i; spaces++) {
				cout << " ";
			}
			for (int stars = 0; stars < n - 2 * i; stars++) {
				cout << "*";
			}
			cout << endl;
		}
	}
	system("pause");
	return 0;
}