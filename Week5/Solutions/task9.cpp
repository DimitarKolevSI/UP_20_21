#include <iostream>
using namespace std;
int task9() {
	const int n = 10;
	int numbers[n];
	for (int i = 0; i < n; i++) {
		cout << "Enter a number: ";
		cin >> numbers[i];
	}
	//Initialize the array with zeroes
	int frequency[100]{};
	for (int i = 0; i < n; i++) {
		frequency[numbers[i] - 1]++;
	}
	int maxFrequencyIndex = -1;
	int number;
	for (int i = 0; i < 100; i++) {
		if (frequency[i] > maxFrequencyIndex) {
			maxFrequencyIndex = frequency[i];
			number = i + 1;
		}
	}
	cout << "The most frequent number is " << number << " and is met "
		<< maxFrequencyIndex << " in the array.\n";
	system("pause");
	return 0;
}