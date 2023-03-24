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

bool checkPESELlength(std::string stringPESEL, std::string& errorMessage)
{
//11 znaków
	if (stringPESEL.length() != 11)
	{
		errorMessage = "Pesel powinien mieć 11 znaków\n";
			return false;
	}
	return true;
}

bool checkPESEL(std::string stringPESEL, std::string & errorMessage)
{
	if (checkPESELlength(stringPESEL, errorMessage) == false)
		return false;


	//tylko cyfry
	for (int i = 0; i < 11; i++)
	{
		if (stringPESEL[i] < '0'
			|| stringPESEL[i] > '9')
		{
			errorMessage = "Pesel powinien składać sie z samych cyfr\n";
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
	std::string errorMessage = "";

	std::string stringPESEL = getPESEL();

	if (checkPESEL(stringPESEL, errorMessage) == true)
	{
		//pesel poprawny
	}
	else {
		//pesel niepoprawny
		std::cout << "Pesel jest niepoprawny \n";
		std::cout << "Komunikat: " << errorMessage << "\n";
	}
}

