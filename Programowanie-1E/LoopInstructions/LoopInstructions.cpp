#include <iostream>

/*
Napisz funkcje która pobierze liczbe dodatnia do skutku.
*/

void task1()
{
	int number;

	do
	{
		std::cout << "podaj liczbê dodatni¹:\n ";
		std::cin >> number;
	} while (number <= 0);

	std::cout << "poda³eœ liczbe dodatni¹: " << number << "\n";
}

int main()
{
	setlocale(LC_CTYPE, "polish");

	task1();
}
