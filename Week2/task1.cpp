#include <iostream>
using namespace std;
int task1() {
	double firstNumber;
	double secondNumber;
	cout << "First number: ";
	cin >> firstNumber;
	cout << "Second number: ";
	cin >> secondNumber;
	if (firstNumber > secondNumber) {
		cout << "The first number is larger\n";
	}
	else if (firstNumber < secondNumber) {
		cout << "The second number is larger\n";
	}
	else {
		cout << "The numbers are equal\n";
	}
	system("pause");
	return 0;
}