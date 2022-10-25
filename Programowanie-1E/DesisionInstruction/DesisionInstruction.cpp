#include <iostream>

/*
DRY - Don't Repeat Yourself
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

int main()
{
	task1();
}