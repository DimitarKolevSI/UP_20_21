#include<iostream>
using namespace std;
int task6() {
	int zero = 0, one = 0, two = 0, three = 0,
		four = 0, five = 0, six = 0,
		seven = 0, eight = 0, nine = 0;
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
	while (n != 0) {
		switch (n % 10)
		{
		case 0:
			zero++;
			break;
		case 1:
			one++;
			break;
		case 2:
			two++;
			break;
		case 3:
			three++;
			break;
		case 4:
			four++;
			break;
		case 5:
			five++;
			break;
		case 6:
			six++;
			break;
		case 7:
			seven++;
			break;
		case 8:
			eight++;
			break;
		case 9:
			nine++;
			break;
		default:
			cout << "Error!\n";
			break;
		}
		n /= 10;
	}
	cout << "Zeroes: " << zero << endl;
	cout << "Ones: " << one << endl;
	cout << "Twos: " << two << endl;
	cout << "Threes: " << three << endl;
	cout << "Fours: " << four << endl;
	cout << "Fives: " << five << endl;
	cout << "Sixes: " << six << endl;
	cout << "Sevens: " << seven << endl;
	cout << "Eights: " << eight << endl;
	cout << "Nines: " << nine << endl;
	system("pause");
	return 0;
}