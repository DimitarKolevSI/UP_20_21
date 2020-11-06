#include <iostream>
using namespace std;
int task1() {
	const int n = 10;
	int numbers[n];
	for (int i = 0; i < n; i++) {
		cout << "Enter a number: ";
		cin >> numbers[i];
	}
	for (int i = 0; i < n; i++) {
		cout << numbers[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}