#include<iostream>
using namespace std;
int task9() {
	long long binary;
	int decimal = 0;
	int mult = 1;
	cout << "Binary number: ";
	cin >> binary;
	while (binary != 0) {
		decimal += (binary % 10) * mult;
		mult *= 2;
		binary /= 10;
	}
	cout << decimal << endl;
	system("pause");
	return 0;
}