//Zasady:
/*
	DRY - don't reapeat yourself
	KISS - keep it simple stupid
	SOLID - S:  single responsibility
*/


#include <iostream>

std::string getPESEL()
{
	std::string stringPESEL;
	std::cout << "Podaj numer PESEL: \n";
	std::cin >> stringPESEL;
	return stringPESEL;
}

bool checkPESEL(std::string stringPESEL)
{
	//11 znaków
	if (stringPESEL.length() != 11)
		return false;

	//tylko cyfry
	for (int i = 0; i < 11; i++)
	{
		if (stringPESEL[i] < '0' || stringPESEL > '9')
		{
				return false;
		}
	}

	//sprawdzenie poprawnosci miesiaca
	//sprawdzenie poprawnosci dnia
	//sprawdzenie cyfry kontrolnej

	return true;
}

int main()
{
	std::string stringPESEL = getPESEL();

	if (checkPESEL(stringPESEL) == true)
	{
		//pesel poprawny
	}
	else {
		//pesel niepoprawny
		std::cout << "Pesel jest niepoprawny \n";
	}
}

