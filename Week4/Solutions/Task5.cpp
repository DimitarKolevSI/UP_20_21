#include<iostream>
using namespace std;
int task5() {
	int n;
	cout << "N: ";
	cin >> n;
	while (true) {
		if (cin.fail() || n <= 0)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "N should be positive integer!\nN: ";
			cin >> n;
		}
		else break;
	}
	int prod = 1;
	while (n != 0) {
		prod *= n % 10;
		n /= 10;
	}
	cout << prod << endl;
	system("pause");
	return 0;
}