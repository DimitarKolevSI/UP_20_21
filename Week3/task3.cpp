#include <iostream> 
using namespace std;
int task3() {
	char command;
	cout << "Start hacking? (y/n) ";
	cin >> command;
	if (command == 'y') {
		cout << "Start hacking NASA\n";
		for (int i = 1; i < 100; i++) {
			for (int j = 0; j < 10000000; j++);
			cout << "Progress: " << i << "%\n";
		}
		cout << "NASA hacked successfuly!\n";
	}
	else {
		cout << "Bye\n";
	}
	system("pause");
	return 0;
}