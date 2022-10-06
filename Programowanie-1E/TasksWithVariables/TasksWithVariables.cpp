#include <iostream>

void task1()
{
	int firstNumber, SecondNumber;
	
	std::cout << "Podaj pierwsza liczbe:\n";
	std::cin >> firstNumber;

	std::cout << "Podaj druga liczbe:\n";
	std::cin >> SecondNumber;

	int sum, difference, product, quotient, rest;

	sum = firstNumber + SecondNumber; 
	difference = firstNumber - SecondNumber;
	product = firstNumber * SecondNumber;
	quotient = firstNumber / SecondNumber;
	rest = firstNumber % SecondNumber;
	
	std::cout << "Suma: " << sum << "\n";
	std::cout << "Roznica: " << difference << "\n";
	std::cout << "Iloczyn: " << product << "\n";
	std::cout << "Iloraz: " << quotient << "\n";
	std::cout << "Reszta z dzielenia: " << rest << "\n";

}

void task2()
{
	std::cout << "15 / 4 = " << 15 / 4 << "\n";
	std::cout << "15.0 / 4 = " << 15.0 / 4 << "\n";
	std::cout << "15 / 4.0 = " << 15 / 4.0 << "\n";
	std::cout << "15.0 / 4.0 = " << 15.0 / 4.0 << "\n";


}


int main()
{
	
	//task1();
	task2();

}
