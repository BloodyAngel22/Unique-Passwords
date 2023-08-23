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
	int check = rand() % 2 + 1;
	// cout << check << " ALL  | ";
	switch (check) {
		case 1:
			return randomSymbolLow();
			break;
		case 2:
			return randomSymbolUp();
			break;
	}
}

void storage(array<unsigned char, 24> password){
	ofstream file;
	file.open("secret_password.txt", ofstream::app);
	if (!file.is_open())
		cout << "Error. File doesn't open" << endl;
	for (int i = 0; i < password.size(); i++)
		file << password[i];
	file << " - ";
	file << "\n";
}

void mainProgramm(array<unsigned char, 24>& password){
	for (int i = 0; i < password.size(); i++){
		if ((i >= 0 and i <= 5) or (i >= 7 and i <= 12))
			password[i] = randomALL();
		if (i >= 13 and i <= 21 or i == 23)
			password[i] = randomNumber();
		if (i == 6 or i == 13 or i == 22)
			password[i] = specialSymbol();
	}

	for (int i = 0; i < password.size(); i++){
		cout << password[i];	
	}
	cout << endl;

	storage(password);
}

