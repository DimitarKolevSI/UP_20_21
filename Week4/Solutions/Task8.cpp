#include<iostream>
using namespace std;
int task8() {
	int n;
	cout << "N: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) {
				cout << "1 ";
			}
			else {
				cout << "0 ";
			}
		}
		cout << endl;
	}
	system("pause");
	return 0;
}