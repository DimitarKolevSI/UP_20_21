#include <iostream>
using namespace std;
int task10() {
	int n;
	cout << "N: ";
	cin >> n;
	int counter = 0;
	long long number = 1;
	long long answer;
	long sum = 0;
	while (counter < n) {
		long long temp = number;
		while (temp != 0) {
			sum += temp % 10;
			temp /= 10;
		}
		if (sum == 10) {
			answer = number;
			counter++;
		}
		sum = 0;
		number++;
	}
	cout << answer << endl;
	system("pause");
	return 0;
}