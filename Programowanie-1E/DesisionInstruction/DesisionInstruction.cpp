#include <iostream>

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

		int quotient;

		quotient = firstNumber / SecondNumber;

		std::cout << "Iloraz: " << quotient << "\n";
}

int main()
{
	task1();
}