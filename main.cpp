#include "logic.h"

int main(){
	srand(time(NULL));
	array<unsigned char, 24> password;

	int counter;
	do {
	cout << "Enter the number of passwords" << endl;
	cin >> counter;
	} while (counter <= 0);

	for (int i = 0; i < counter; i++)
		mainProgramm(password);

	return 0;
}
