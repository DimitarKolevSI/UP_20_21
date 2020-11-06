#include <iostream>
using namespace std;
int task3() {
	const int n = 20;
	int numbers[n];
	for (int i = 0; i < n; i++) {
		cout << "Enter a number: ";
		cin >> numbers[i];
	}
	int positives = 0, negatives = 0, zeroes = 0, odd = 0, even = 0;
	for (int i = 0; i < n; i++) {

		if (numbers[i] > 0) {
			positives++;
		}
		else if (numbers[i] < 0) {
			negatives++;
		}
		else {
			zeroes++;
		}

		if (numbers[i] % 2 == 0) {
			even++;
		}
		else {
			odd++;
		}
	}

	cout << "Positive numbers: " << positives << endl;
	cout << "Negative numbers: " << negatives << endl;
	cout << "Zeroes: " << zeroes << endl;
	cout << "Odd numbers: " << odd << endl;
	cout << "Even numbers: " << even << endl;
	system("pause");
	return 0;
}