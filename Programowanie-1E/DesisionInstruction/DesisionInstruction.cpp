#include <iostream>

/*
DRY - Don't Repeat Yourself
*/


/*
	Operatory porównania:
*równoœci ==
* róznoœci !=
* wiêkszoœci >
* mniejszoœci <
* wieksze lub róne >=
* mniejsze lub równe <=
*/


/*
Napisz funkcje ktora wczyta dwie liczby i wykona dzielenie na nich 
*/

void task1()
{
		int firstNumber, SecondNumber;

		std::cout << "Podaj pierwsza liczbe:\n";
		std::cin >> firstNumber;

		std::cout << "Podaj druga liczbe:\n";
		std::cin >> SecondNumber;

		int quotient = 0;

		if (SecondNumber != 0)
			quotient = firstNumber / SecondNumber;

		if (SecondNumber != 0)
			std::cout << "Iloraz: " << quotient << "\n";

		else
			std::cout << "Dzielenie przez zero!!!\n";

		std::cout << "koniec programu";
}

/*
Napisz funkcje ktora czyta licxzbe i wyswietli czy jest dodatia czy nie.
*/

void task2()
{
	int NumberToCheck;

	std::cout << "Podaj liczbe do sprawdzenia:\n";
	std::cin >> NumberToCheck;

	if (NumberToCheck > 0)
		std::cout << "liczba wieksza od zera\n";
	else
		std::cout << "liczba równa lub mniejsza od zera\n";
}

/*
Napisz funkcje, która wczsyta liczbe i wyswietli informacje czy jest ona w zakresie <10, 25>
*/

void task3()
{
	int NumberToCheck2;

	std::cout << "Podaj liczbe do sprawdzenia:\n";
	std::cin >> NumberToCheck2;

	if (NumberToCheck2 )
		std::cout << "liczba znajduje sie w zakresie\n";
	else
		std::cout << "liczba nie znajduje sie w zakresie\n";
}
int main()
{
	//task1();
	//task2();
	task3();
}