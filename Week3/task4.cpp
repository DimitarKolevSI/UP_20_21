#include <iostream> 
#include <stdlib.h>
#include <time.h>
using namespace std;
int task4() {
	srand(time(NULL));
	int random = rand() % 100 + 1;
	int counter = 0;
	int guess;
	do {
		cout << "Guess the number: ";
		cin >> guess;
		counter++;
		if (random > guess) {
			cout << "Go higher!" << endl;
		}
		else if (random < guess) {
			cout << "Go lowwer!" << endl;
		}
	} while (random != guess);
	cout << "Congratulations! Your needed " << counter << " atempt(s)" << endl;
	system("pause");
	return 0;
}