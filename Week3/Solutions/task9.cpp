#include <iostream>
using namespace std;
int task9() {
	int n;
	cout << "N: ";
	cin >> n;
	if (n == 0) {
		cout << "0";
	}
	else if (n == 1) {
		cout << "0 1";
	}
	else {
		long long first = 0;
		long long second = 1;
		long long curr;
		cout << first << " " << second << " ";
		for (int i = 2; i < n; i++) {
			curr = first + second;
			cout << curr << " ";
			first = second;
			second = curr;
		}
	}
	cout << endl;
	system("pause");
	return 0;
}