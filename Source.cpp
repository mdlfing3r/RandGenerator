#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string>
#include <random>
#include <vector>

char getpass(int, bool, bool);

void get_symbols(int, int);

int main()
{
	
	srand(time(NULL));

	//unsigned seed1;
	//seed1 = time(NULL);

	//std:uniform_int_distribution<
	//generator.min();
	//generator.max() = 127;

	char symb = rand() % 127 + 33;
	int pass_length = 0;
	bool IsSymbolsNeed;
	bool IsDigitNeed;
	//std::cout << symb;
	//get_symbols(33, 127);

	std::cout << "It is a pass generator prog" << std::endl;
	//getchar();
	std::cout << "Enter a length of pass" << std::endl;
	std::cin >> pass_length;
	system("CLS");

	std::cout << "Symbols is nedeed ? [1/0]" << std::endl;
	std::cin >> IsSymbolsNeed;
	system("CLS");

	std::cout << "Digit is nedeed ? [1/0]" << std::endl;
	std::cin >> IsDigitNeed;
	system("CLS");

	getpass(pass_length, IsSymbolsNeed, IsDigitNeed);

	getchar();
	getchar();
	return 0;
}

void get_symbols(int min, int max) //пределы char 33 - 127
{
	
	char randSymbol = 0;
	for (int i = min; i < max; i++) 
	{
		randSymbol = i;
		std::cout << i << ") " << randSymbol << "     ";
	}
}

char getpass(int length, bool IsSymbolsAdded, bool IsDigitAdded) {
	std::vector <char> vectr;
		
	
	//pntr = &length;

	//std::string str[pntr];
	char symb = 0;
	while (length != 0)
	{

		switch (IsSymbolsAdded)
		{
		case 1:
			switch (IsDigitAdded)
			{
			case 1:
				symb = rand() % 127 + 33;
				break;

			case 0:
				while (symb >= 47 && symb <= 57)
				{
					symb = rand() % 127 + 33;
				}
				break;
			}

			break;

		case 0:
			switch (IsDigitAdded)
			{

			case 1:
				symb = rand() % 127 + 33;
				break;

			case 0:
				symb = rand() % 127 + 33;
				while (symb <= 64 && symb >= 91 || symb <= 96 && symb >= 123)
				{
					symb = rand() % 127 + 33;
				}
				break;
			}
			break;
		}
		vectr.push_back(symb);
		std::cout << symb;
		--length;
	}
	//while (pass != std::string::npos) {
	//
	//}
	//return 0;
		std::cout << symb;
		//std::string str;
		//str = std::string(symb);
		return symb;
}