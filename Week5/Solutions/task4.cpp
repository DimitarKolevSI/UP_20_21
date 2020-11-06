#include <iostream>
using namespace std;
int task4() {
	const int n = 10;
	int numbers[n];
	for (int i = 0; i < n; i++) {
		cout << "Enter a number: ";
		cin >> numbers[i];
	}
	int reversed[n];
	for (int i = 0; i < n; i++) {
		reversed[i] = numbers[n - i - 1];
	}
	for (int i = 0; i < n; i++) {
		cout << reversed[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}