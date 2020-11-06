#include <iostream>
using namespace std;
int task2() {
	const int n = 10;
	int numbers[n];
	for (int i = 0; i < n; i++) {
		cout << "Enter a number: ";
		cin >> numbers[i];
	}
	int number;
	cout << "Enter a number to check: ";
	cin >> number;
	bool isPresent = false;
	for (int i = 0; i < n; i++) {
		if (numbers[i] == number) {
			isPresent = true;
			break;
		}
	}
	if (isPresent) {
		cout << "The number is present";
	}
	else {
		cout << "The number is not present";
	}
	cout << endl;
	system("pause");
	return 0;
}