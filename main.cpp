#include "logic.h"

int main(){
	srand(time(NULL));
	int length;
	do {
	cout << "Enter password length" << endl;
	cin >> length;
	} while(length < 6 or length > 40);

	array<unsigned char, 40> password;

	int counter;
	do {
	cout << "Enter the number of passwords" << endl;
	cin >> counter;
	} while (counter <= 0);

	for (int i = 0; i < counter; i++)
		mainProgramm(password, length);

	return 0;
}
