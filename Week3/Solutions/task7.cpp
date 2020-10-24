#include <iostream>
using namespace std;
int task7() {
	int thousands, hundreds, decimal, digit, sumOfDigits;
	for (int i = 1000; i < 10000; i += 2) {
		thousands = i / 1000;
		hundreds = (i % 1000) / 100;
		decimal = (i % 100) / 10;
		digit = i % 10;
		sumOfDigits = thousands + hundreds + decimal + digit;
		if (sumOfDigits % 3 == 0 || sumOfDigits % 5 == 0 || sumOfDigits % 7 == 0) {
			cout << i << endl;
		}
	}
	system("pause");
	return 0;
}