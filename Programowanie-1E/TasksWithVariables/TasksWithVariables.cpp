#include <iostream>

void task1()
{
	int firstNumber, SecondNumber;
	
	std::cout << "Podaj pierwsza liczbe:\n";
	std::cin >> firstNumber;

	std::cout << "Podaj druga liczbe:\n";
	std::cin >> SecondNumber;

	int sum, difference, product, quotient;

	sum = firstNumber + SecondNumber; 
	difference = firstNumber - SecondNumber;
	product = firstNumber * SecondNumber;
	quotient = firstNumber / SecondNumber;
	
	std::cout << "Suma " << sum << "\n";
	std::cout << "Roznica " << difference << "\n";
	std::cout << "Iloczyn " << product << "\n";
	std::cout << "Iloraz " << quotient << "\n";

}
int main()
{
	
	task1();

}
