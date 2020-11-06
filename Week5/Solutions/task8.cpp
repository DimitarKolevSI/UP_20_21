#include <iostream>
using namespace std;
int task8() {
	const int n = 10;
	int numbers[n];
	for (int i = 0; i < n; i++) {
		cout << "Enter a number: ";
		cin >> numbers[i];
	}
	int begin, end;
	cout << "Begining index: ";
	cin >> begin;
	cout << "Ending index: ";
	cin >> end;
	if (begin < 0 || begin >= n) {
		cout << "Invalid begin index!" << endl;
	}
	else if (end < 0 || end >= n) {
		cout << "Invalid end index!" << endl;
	}
	else if (begin >= end) {
		cout << "Begin index should be lowwer than end index!" << endl;
	}
	else {
		for (int i = begin; i <= end; i++) {
			cout << numbers[i] << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}