#include <iostream>
using namespace std;
int task11() {
	int n, m;
	cout << "N: ";
	cin >> n;
	cout << "M: ";
	cin >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "* ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}