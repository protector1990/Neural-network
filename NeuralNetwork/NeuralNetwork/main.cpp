#include <iostream>
#include "BinNumNetwork.h"

using namespace std;

int main() {
	int choice = 1, userInput;
	BinNumNetwork bnNetwork{};

	while (choice) {
		cout << "1. Prepoznaj\n2. Treniraj\n3. Kraj\n";
		cin >> choice; cout << "\n";
		switch (choice)
		{
		case 1:
			cout << "Broj za prepoznavanje(0 - 255)? ";
			cin >> userInput; cout << "\n";
			cout << bnNetwork.output(userInput) << "\n";
			break;
			
		case 2:
			cout << "Do koliko procenta tacnosti zelite da trenirate(50 - 500/500)? ";
			cin >> userInput; cout << "\n";

			if (userInput < 50 || 500 < userInput)
				break;

			bnNetwork.train(userInput);
			break;

		default:
			choice = 0;
			break;
		}
	}

	return 0;
}