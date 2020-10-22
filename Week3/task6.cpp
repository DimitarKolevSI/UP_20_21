#include <iostream>
using namespace std;
int task6() {
	int first, second;
	cout << "First number: ";
	cin >> first;
	cout << "Second number: ";
	cin >> second;
	if (first > second) {
		int temp = first;
		first = second;
		second = temp;
	}
	for (int i = first + 1; i < second; i++) {
		cout << i << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}