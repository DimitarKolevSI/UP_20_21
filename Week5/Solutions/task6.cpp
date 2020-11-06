#include <iostream>
#include <climits> // for the INT_MAX and INT_MIN
using namespace std;
int task6() {
	const int n = 20;
	int numbers[n];
	for (int i = 0; i < n; i++) {
		cout << "Enter a number: ";
		cin >> numbers[i];
	}
	int sum = 0;
	int min = INT_MAX;
	int max = INT_MIN;
	for (int i = 0; i < n; i++) {
		sum += numbers[i];
		if (min > numbers[i]) {
			min = numbers[i];
		}
		if (max < numbers[i]) {
			max = numbers[i];
		}
	}
	double average = sum / n;
	cout << "Average is " << average << endl;
	cout << "The max is " << max << endl;
	cout << "The min is " << min << endl;
	system("pause");
	return 0;
}