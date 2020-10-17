#include <iostream>
using namespace std;
int task8() {
	int day, month, year;
	cout << "Days: ";
	cin >> day;
	cout << "Month: ";
	cin >> month;
	cout << "Year: ";
	cin >> year;
	if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10) && day == 31) {
		day = 1;
		month++;
	}
	else if (month == 12 && day == 31) {
		day = 1;
		month = 1;
		year++;
	}
	else if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 30) {
		day = 1;
		month++;
	}
	else if (month == 2)
	{
		bool isLeap = (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0));
		if (isLeap && day == 29) {
			day = 1;
			month++;
		}
		else if (!isLeap && day == 28) {
			day = 1;
			month++;
		}
		else {
			day++;
		}
	}
	else {
		day++;
	}
	cout << day << "." << month << "." << year << endl;
	system("pause");
	return 0;
}