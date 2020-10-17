#include <iostream>
using namespace std;
int task2() {
	int age;
	const int ageNeeded = 18;
	cout << "How old are you?\nI am: ";
	cin >> age;
	if (age >= ageNeeded) {
		cout << "Old enought\n";
	}
	else {
		cout << "Not old enough\n";
	}
	system("pause");
	return 0;
}