#include <iostream>
using namespace std;
int task5() {
	const int n = 10;
	int numbers[n];
	for (int i = 0; i < n; i++) {
		cout << "Enter a number: ";
		cin >> numbers[i];
	}
	int sum = 0;
	int mult = 1;
	for (int i = 0; i < n; i++) {
		sum += numbers[i];
		mult *= numbers[i];
	}
	cout << "Sum is " << sum << endl;
	cout << "Product is " << mult << endl;
	system("pause");
	return 0;
}