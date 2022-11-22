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
	Operatory Logiczne
			and		      or		not
A	B	  A && B		A || B	    !A
F	F		F			  F			T
F	T	    F			  T			T
T	F	    F			  T			F
T	T		T			  T			F
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

	/*if (NumberToCheck2 >= 10)
	{
		if (NumberToCheck2 <= 25)
		{
			std::cout << "liczba znajduje sie w zakresie\n";
		}
		else
		{
			std::cout << "liczba nie znajduje sie w zakresie\n";
		}
	}
	else
	{
		std::cout << "liczba nie znajduje sie w zakresie\n";
	}
}*/
	if (NumberToCheck2 <= 10 && NumberToCheck2 >= 25)
	{
		std::cout << "liczba znajduje sie w zakresie\n";
	}
	else
	{
		std::cout << "liczba nie znajduje sie w zakresie\n";
	}
}
/*
Napisz funkcje która wczyta liczb i wyswietli infomacje czy jest ona parzysta czy nie
*/

void task4()
{
	int EvenNumber;

	std::cout << "Podaj liczbe do sprawdzenia:\n";
	std::cin >> EvenNumber;

	if (EvenNumber % 2 == 0)
	{
		std::cout << "liczba jest parzysta";
	}
	else
	{
		std::cout << "liczba nie jest parzysta";
	}
}

/*
Napisz funkcje która wczyta liczbe która bedzie bokiem kwadratu i wyswitli informacje o polu i obwodzie
*/

void task5()
{
	int sideOfSquare;

	std::cout << "Podaj bok kwadratu:\n";
	std::cin >> sideOfSquare;
	if (sideOfSquare > 0)
	{
		int area;
		area = sideOfSquare * sideOfSquare;

		int circuit;
		circuit = 4 * sideOfSquare;

		std::cout << "pole kwadratu wynosi: " << area << "\n";
		std::cout << "obwod kwadratu wynosi: " << circuit;
	}
	else
	{
		std::cout << "liczba jest ujemna lub rowna 0";
	}
}

/*
Napisz funkcje która wczyta dwie liczny i wyswietli wieksz¹ z nich
*/

void task6()
{
	int firstNumber2, secondNumber2;

	std::cout << "podaj pierwsza liczbe: ";
	std::cin >> firstNumber2;

	std::cout << "podaj druga liczbe: ";

	std::cin >> secondNumber2;

	if (firstNumber2 > secondNumber2)
	{
		std::cout << "wieksza liczba jest: " << firstNumber2;
	}
	else
	{
		std::cout << "wieksza liczba jest: " << secondNumber2;
	}
}

/*
napisz funkcje która wczyta trzy liczby i wyœwitli najwieksz¹  z nich
*/

void task7()
{
	int oneNumber, twoNumber, threeNumber;

	std::cout << "Podaj pierwsza liczbe: ";
	std::cin >> oneNumber;

	std::cout << "Podaj druga liczbe: ";
	std::cin >> twoNumber;

	std::cout << "Podaj trzecia liczbe: ";
	std::cin >> threeNumber;

	if (oneNumber > twoNumber && oneNumber > threeNumber)
	{
		std::cout << "Nawieksza liczba to: " << oneNumber;
	}
	else
	{
		if (twoNumber > oneNumber && twoNumber > threeNumber)
		{
			std::cout << "Nawieksza liczba to: " << twoNumber;
		}
		else
		{
			if (threeNumber > oneNumber && threeNumber > twoNumber)

				std::cout << "Nawieksza liczba to: " << threeNumber;
		}
	}
}

/*
Napisz funkcje która wczyta dwie liczby i wyswietli je w koolejnosci rosn¹cej
*/

void task8()
{
	int IncreasingNumber1, IncreasingNumber2;

	std::cout << "podaj pierwsza liczbe: ";
	std::cin >> IncreasingNumber1;

	std::cout << "podaj druga liczbe: ";
	std::cin >> IncreasingNumber2;

	if (IncreasingNumber1 > IncreasingNumber2)
	{
		std::cout << "liczby w kolejnosci rosnacej: " << IncreasingNumber2 << "," << IncreasingNumber1;
	}
	else
	{
		std::cout << "liczy w koljenosci rosnacej: " << IncreasingNumber1 << "," << IncreasingNumber2;
	}
}
/*
Napisz funkcjê, która wczyta trzy liczby i wyœwietli je w kolejnoœci rosn¹cej.
*/

void task9()
{

}

/*
Napisz funkcjê, która wczyta numer dnia tygodnia i wyœwietli nazwê tego dnia.
*/

void task10()
{
	int dayNumber;

	std::cout << "Podaj liczbe zeby wyswietlic dzien tygodnia: ";
	std::cin >> dayNumber;

		switch (dayNumber)
		{
		case 1:
			std::cout << "Poniedzialek";
			break;
		case 2:
			std::cout << "Wtorek";
			break;
		case 3:
			std::cout << "Sroda";
			break;
		case 4:
			std::cout << "Czwartek";
			break;
		case 5:
			std::cout << "Piatek";
			break;
		case 6:
			std::cout << "Sobota";
			break;
		case 0:
		case 7:
			std::cout << "Niedizela";
			break;
		default: std::cout << "Bledny Dzien";
			break;
		}
}


/*
Napisz funkcjê, która wczyta wspó³czynniki równania kwadratowego i wyœwietli pierwiastki tego równania
*/

void task11()
{

}

/*
Napisz funkcjê, która wyœwietli komunikaty "gor¹co", "ciep³o", "zimno", "bardzo zimno"
w zale¿noœci od wczytanej temperatury
Zakresy : powy¿ej 30, 15 - 30, 0 - 15 i poni¿ej 0.
*/

void task12()
{
	int temperature;
		std::cout << "Podaj temperaturê do sprawdzenia: ";
		std::cin >> temperature;

		if (temperature > 30)
			std::cout << "gor¹co";
		else if (temperature >= 15 && temperature <= 30)
			std::cout << "ciep³o";
		else if (temperature < 15 && temperature >= 0)
			std::cout << "zimno";
		else if (temperature < 0)
		std::cout << "bardzo zimno";
}

int main()
{

	setlocale(LC_CTYPE, "polish");
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	//task8();
	//task9();
	//task10();
	//task11();
	//task12();
}