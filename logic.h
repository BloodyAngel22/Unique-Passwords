#include <cstddef>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <array>
#include <iterator>

using namespace std;

unsigned char randomNumber();
unsigned char randomSymbolLow();
unsigned char randomSymbolUp();
unsigned char specialSymbol();
unsigned char randomALL();
void storage(array<unsigned char, 24> password);
void mainProgramm(array<unsigned char, 24>& password);

