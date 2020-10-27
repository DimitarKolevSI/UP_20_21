#include<iostream>
using namespace std;
int task7() {
	char symbol;
	while (true) {
		cout << "Symbol: ";
		cin >> symbol;
		if (symbol >= 65 && symbol <= 90) {
			cout << "Upper\n";
		}
		else if (symbol >= 97 && symbol <= 122) {
			cout << "Lower\n";
		}
		else {
			break;
		}
	}
	system("pause");
	return 0;
}