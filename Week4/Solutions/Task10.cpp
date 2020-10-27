#include<iostream>
#include<iomanip>
using namespace std;
int task10() {
	int n;
	cout << "N: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << setw(4) << i * j;
		}
		cout << endl;
	}
	system("pause");
	return 0;
}