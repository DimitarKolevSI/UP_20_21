#include<iostream>
using namespace std;
int task3() {
	int lowerbound, upperbound;
	cout << "Lower bound: ";
	cin >> lowerbound;
	cout << "Upper bound: ";
	cin >> upperbound;
	bool isPrime;
	for (int i = lowerbound + 1; i < upperbound; i++) {
		isPrime = true;
		for (int j = 2; j <= sqrt(i); j++) {
			if (i%j == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			cout << i << " ";
		}
	}
	cout << endl;
	system("pause");
	return 0;
}