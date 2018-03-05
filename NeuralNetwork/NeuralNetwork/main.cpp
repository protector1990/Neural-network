#include <iostream>
#include "programs.h"
#include <map>

using namespace std;

map<string, void(*)()> programs{
	{ { "bn" }, binaryNumberRecognitorMainLoop },
	{ { "mn" }, minstNumbersRecognitorMainLoop }
};

void main() {
	char* input = "mn";
	cout << "Unesite ime programa koji zelite da izvrsite\n";
	//cin >> input;
	string g(input);
	programs[g]();
}