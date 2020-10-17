#include <iostream>
using namespace std;
int task3() {
	double firstNumber, secondNumber;
	cout << "First number: ";
	cin >> firstNumber;
	cout << "Second number: ";
	cin >> secondNumber;
	if (secondNumber == 0) {
		cout << "Wrong input! You cannot divide a number by 0!" << endl;
		system("pause");
		return 0;
	}
	double addition = firstNumber + secondNumber;
	double diff = firstNumber - secondNumber;
	double mult = firstNumber * secondNumber;
	double division = firstNumber / secondNumber;
	if (addition > diff && addition > mult && addition > division) {
		cout << addition << " from addition" << endl;
	}
	else if (diff > addition && diff > mult && diff > division) {
		cout << diff << " from difference" << endl;
	}
	else if (mult > addition && mult > diff && mult > division) {
		cout << mult << " from multiplication" << endl;
	}
	else if (division > addition && division > diff && division > mult) {
		cout << mult << " from division" << endl;
	}
	else {
		cout << "There is no clear winner" << endl;
	}
	system("pause");
	return 0;
}