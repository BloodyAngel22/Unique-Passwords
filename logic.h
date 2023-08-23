#include <cstddef>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <array>
#include <iterator>

using namespace std;

extern const int length;

unsigned char randomNumber();
unsigned char randomSymbolLow();
unsigned char randomSymbolUp();
unsigned char randomSymbol();
unsigned char specialSymbol();
unsigned char randomALL();
void storage(array<unsigned char, 40> password, int length);
void mainProgramm(array<unsigned char, 40>& password, int length);

