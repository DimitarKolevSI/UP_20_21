#include <iostream>
using namespace std;
int task4() {
	double firstSide;
	double secondSide;
	double thirdSide;
	cout << "First side: ";
	cin >> firstSide;
	cout << "Second side: ";
	cin >> secondSide;
	cout << "Third side: ";
	cin >> thirdSide;
	bool isValid = firstSide < secondSide + thirdSide &&
		secondSide < firstSide + thirdSide &&
		thirdSide < firstSide + secondSide;
	if (isValid) {
		cout << "This is valid triangle" << endl;
	}
	else {
		cout << "This is not valid triangle" << endl;
	}
	system("pause");
	return 0;
}