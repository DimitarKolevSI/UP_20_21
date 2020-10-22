#include <iostream>
using namespace std;
int task5() {
	long long factoriel = 1;
	int n;
	cout << "N: ";
	cin >> n;
	for (int i = n; i >= 1; i--) {
		factoriel *= i;
	}
	cout << n << "! is " << factoriel << endl;
	system("pause");
	return 0;
}