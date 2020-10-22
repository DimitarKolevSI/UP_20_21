#include <iostream>
#include <cmath>
using namespace std;
int task2() {
	int n;
	cout << "N: ";
	cin >> n;
	if (n < 0) {
		cout << "The number is not positive!\n";
	}
	else {
		bool isPrime = true;
		for (int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			cout << "The number is prime!\n";
		}
		else {
			cout << "The number is not prime!\n";
		}
	}
	system("pause");
	return 0;
}