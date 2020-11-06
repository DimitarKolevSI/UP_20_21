#include <iostream>
using namespace std;
int task10() {
	const int n = 10;
	int numbers[n];
	for (int i = 0; i < n; i++) {
		cout << "Enter a number: ";
		cin >> numbers[i];
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (numbers[j] > numbers[j + 1]) {
				swap(numbers[j], numbers[j + 1]);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << numbers[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}