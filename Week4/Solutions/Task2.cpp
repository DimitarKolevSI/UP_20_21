#include<iostream>
using namespace std;
int task2() {
	int n;
	cout << "N: ";
	cin >> n;
	int sum = 0;
	int helpingSum = 0;
	for (int i = 1; i <= n; i++) {
		helpingSum += i;
		sum += helpingSum;
	}
	cout << sum << endl;
	system("pause");
	return 0;
}