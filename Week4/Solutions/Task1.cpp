#include<iostream>
using namespace std;
int task1() {
	int n;
	cout << "N: ";
	cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i * i;
	}
	cout << sum << endl;
	system("pause");
	return 0;
}