#include "logic.h"

unsigned char randomNumber(){
	return rand() % (57 - 48 + 1) + 48;
}

unsigned char randomSymbolLow(){ //lower case
	return rand() % (122 - 97 + 1) + 97;
}

unsigned char randomSymbolUp(){ //upper case
	return rand() % (90 - 65 + 1) + 65;
}

unsigned char specialSymbol(){
	int check = rand() % 2 + 1;
	// cout << check << " SPECSYM | ";
	switch (check) {
		case 1:
			return rand() % (38 - 35 + 1) + 35;
		case 2:
			return 64;
			break;
	}
	return 48;
}

unsigned char randomALL(){
	int check = rand() % 4 + 1;
	// cout << check << " ALL  | ";
	switch (check) {
		case 1:
			return randomSymbolLow();
			break;
		case 2:
			return randomSymbolUp();
			break;
		case 3:
			return specialSymbol();
			break;
		case 4:
			return randomNumber();
			break;
	}
}

unsigned char randomSymbol(){
	int check = rand() % 2 + 1;
	switch (check) {
		case 1:
			return randomSymbolLow();
			break;
		case 2:
			return randomSymbolUp();
			break;
	}
}

void storage(array<unsigned char, 40> password, int length){
	ofstream file;
	file.open("secret_password.txt", ofstream::app);
	if (!file.is_open())
		cout << "Error. File doesn't open" << endl;
	for (int i = 0; i < length; i++)
		file << password[i];
	file << " - ";
	file << "\n";
}

void mainProgramm(array<unsigned char, 40>& password, int length){
	for (int i = 0; i < length; i++){
		if (i != 0)
			password[i] = randomALL();
		else
			password[i] = randomSymbol();
	}

	for (int i = 0; i < length; i++){
		cout << password[i];	
	}
	cout << endl;

	storage(password, length);
}

