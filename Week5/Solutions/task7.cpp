#include <iostream>
using namespace std;
int task7() {
	const int n = 10;
	int numbers[n];
	for (int i = 0; i < n; i++) {
		cout << "Enter a number: ";
		cin >> numbers[i];
	}
	const int half = n / 2;
	int firstHalf[half];
	int secondHalf[half];
	for (int i = 0; i < half; i++) {
		firstHalf[i] = numbers[i];
		secondHalf[i] = numbers[i + half];
	}
	for (int i = 0; i < half; i++) {
		cout << firstHalf[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < half; i++) {
		cout << secondHalf[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}