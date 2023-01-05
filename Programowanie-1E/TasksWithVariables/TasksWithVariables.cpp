#include <iostream>
#include <cmath>

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

/*\
Napisz funkcje ktora obliczy pole trojkata. (calculate the area of ​​the triangle) a*h/2
*/

void task3()
{
	float sideA, Height;
	std::cout << "podaj podstawe trojkata:\n";
	std::cin >> sideA;
	
	std::cout << "podaj wysokosc trojkata:\n";
	std::cin >> Height;

	float area;
	area = 0.5 * sideA * Height;

	std::cout << "pole trojkata wynosi: " << area << "\n";
}
/*
Napisz funkcje ktora obliczy przekatną kwadratu\
*/

void task4()
{
	float side;
	std::cout << "podaj bok trojkata:\n";
	std::cin >> side;
	
	float diagonal = side * sqrt(2);
	std::cout << "oprzekatna kwadratu wynosi: " << diagonal << "\n";
}
int main()
{
	//task1();
	//task2();
	//task3();
	//task4();
}
