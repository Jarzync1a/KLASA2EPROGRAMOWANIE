//Zasady:
/*
	DRY - don't reapeat yourself
	KISS - keep it simple stupid
	SOLID - S:  single responsibility
*/

#include <iostream>

int convertCharsToInt(char firstChar, char secondChar)
{
	return (firstChar - 48) * 10 + (secondChar - 48) * 1;
}

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
bool checkPESELAllDigits(std::string stringPESEL, std::string& errorMessage)
{

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
	return true;
}

bool checkPESELMonth(std::string stringPESEL, std::string& errorMessage)
{
	/*
	1900-1999 1-12
	2000-2099 21-32
	2100-2199 41-52
	2200-2299 61-72
	1800-1899 81-92
	*/


	//stringPESEL[2] stringPESEL[3]
	
	int monthV4 = convertCharsToInt(stringPESEL[2], stringPESEL[3]);
	monthV4 = monthV4 % 20;
	if (monthV4 >= 1 && monthV4 <= 12)
		return true;

	errorMessage = "Miesiąć w numerze jest nie poprawny";
	return false;

}

bool checkPESELDay(std::string stringPESEL, std::string& errorMessage)
{
	int day = convertCharsToInt(stringPESEL[4], stringPESEL[5]);
	int month = convertCharsToInt(stringPESEL[2], stringPESEL[3]);
	errorMessage = "Dzień w numerze PESEl jest niepoprawny";
	
	if (day = 0 || day > 31)
		return false;

	if (day = 31 &&(month == 2, month == 4, month == 6, month == 9, month == 11))
		return false;

	if (month == 2 && day > 29)
		return false;

	bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;

	if (month == 2 && day > 29 && !isLeapYear)
		return false;

	errorMessage = "";
	return true;
}

bool checkPESEL(std::string stringPESEL, std::string & errorMessage)
{
	if (checkPESELlength(stringPESEL, errorMessage) == false)
		return false;

	if (checkPESELAllDigits(stringPESEL, errorMessage) == false)
		return false;

	if (checkPESELMonth(stringPESEL, errorMessage) == false)
		return false;

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

