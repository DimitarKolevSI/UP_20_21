#include <iostream>
using namespace std;
int task7() {
	double firstNumber, secondNumber;
	char signOperator;
	cout << "Enter what you want to calculate: ";
	cin >> firstNumber >> signOperator >> secondNumber;
	if (signOperator == '/' && secondNumber == 0) {
		cout << "You cannnot divide by zero!" << endl;
	}
	else {
		double result;
		if (signOperator == '+') {
			result = firstNumber + secondNumber;
		}
		else if (signOperator == '-') {
			result = firstNumber - secondNumber;
		}
		else if (signOperator == '*') {
			result = firstNumber * secondNumber;
		}
		else if (signOperator == '/') {
			result = firstNumber / secondNumber;
		}
		cout << firstNumber << signOperator << secondNumber << "=" << result << endl;
	}
	system("pause");
	return 0;
}