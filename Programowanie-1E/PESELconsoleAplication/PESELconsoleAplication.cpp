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

int corectYear(int month, int year)
{
	if (month >= 1 && month <= 12)
		return 1900 + year;

	if (month >= 21 && month <= 32)
		return 2000 + year;

	if (month >= 41 && month <= 52)
		return 2100 + year;

	if (month >= 61 && month <= 72)
		return 2200 + year;

	if (month >= 81 && month <= 92)
		return 1800 + year;
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

	errorMessage = "Miesiąć w numerze PESEL jest nie poprawny";
	return false;

}

bool checkPESELDay(std::string stringPESEL, std::string& errorMessage)
{
	int day = convertCharsToInt(stringPESEL[4], stringPESEL[5]);
	int month = convertCharsToInt(stringPESEL[2], stringPESEL[3]);
	int year = convertCharsToInt(stringPESEL[0], stringPESEL[1]);
	year = corectYear(month, year);
	errorMessage = "Dzień w numerze PESEl jest niepoprawny";
	
	if (day = 0 || day > 31)
		return false;

	if (day = 31 &&(month == 2 || month == 4 || month == 6 || month == 9 || month == 11))
		return false;

	if (month == 2 && day > 29)
		return false;

	bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;

	if (month == 2 && day > 29 && !isLeapYear)
		return false;

	errorMessage = "";
	return true;
}

bool checkPESELControlDigit(std::string stringPESEL, std::string& errorMessage)
{
	int d0 = convertCharsToInt('0', stringPESEL[0]);
	int d1 = convertCharsToInt('0', stringPESEL[1]);
	int d2 = convertCharsToInt('0', stringPESEL[2]);
	int d3 = convertCharsToInt('0', stringPESEL[3]);
	int d4 = convertCharsToInt('0', stringPESEL[4]);
	int d5 = convertCharsToInt('0', stringPESEL[5]);
	int d6 = convertCharsToInt('0', stringPESEL[6]);
	int d7 = convertCharsToInt('0', stringPESEL[7]);
	int d8 = convertCharsToInt('0', stringPESEL[8]);
	int d9 = convertCharsToInt('0', stringPESEL[9]);
	int d10 = convertCharsToInt('0', stringPESEL[10]);

	int sum = d0 * 1 + d1 * 3 + d2 * 7 + d3 * 9
	    	+ d4 * 1 + d5 * 3 + d6 * 7 + d7 * 9
		    + d8 * 1 + d9 * 3 + d10 * 1;

	if (sum % 10 == 0)
		return true;

	errorMessage = "Błędny PESEL - sprawdzanie liczby kontrolnej";
		return false;
}

bool checkPESEL(std::string stringPESEL, std::string & errorMessage)
{
	if (checkPESELlength(stringPESEL, errorMessage) == false)
		return false;

	if (checkPESELAllDigits(stringPESEL, errorMessage) == false)
		return false;

	if (checkPESELMonth(stringPESEL, errorMessage) == false)
		return false;

	if (checkPESELDay(stringPESEL, errorMessage) == false)
		return false;

	if (checkPESELControlDigit(stringPESEL, errorMessage) == false)
		return false;

	return true;
}

void showPESELInfo(std::string stringPESEL)
{
	int day = convertCharsToInt(stringPESEL[4], stringPESEL[5]);
	int month = convertCharsToInt(stringPESEL[2], stringPESEL[3]);
	int year = convertCharsToInt(stringPESEL[0], stringPESEL[1]);
	year = corectYear(month, year);
	month = month % 20;

	std::cout << "Data urodzenia: " << day << "-" << month << "-" << year << "\n";

	int gender = convertCharsToInt('0', stringPESEL[9]);
	if (gender % 2 == 0)
		std::cout << "Płeć żeźska\n";
	else
		std::cout << "Płeć męska\n";
}

int main()
{
	std::string stringPESEL = getPESEL();
	std::string errorMessage = "";

	if (checkPESEL(stringPESEL, errorMessage) == true)
	{
		//pesel poprawny
		std::cout << "Pesel poprawny\n";
		showPESELInfo(stringPESEL);
	}
	else {
		//pesel niepoprawny
		std::cout << "Pesel jest niepoprawny \n";
		std::cout << "Komunikat: " << errorMessage << "\n";
	}
}

