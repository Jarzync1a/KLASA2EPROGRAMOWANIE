﻿#include <iostream>

void task1()
{
	int a;
	int tab[50];//0,1,2

	a = 5;
	tab[0] = 5;
	tab[1] = 3;
	tab[2] = 87;

	a = a * tab[1];


	int x, y, z;
	std::cin >> x;
	std::cin >> y;
	std::cin >> z;

	std::cin >> tab[0];
	std::cin >> tab[1];
	std::cin >> tab[2];

	for (int i = 0; i < 3; i++)
	{
		std::cin >> tab[i];
	}

}

/*
Wyświetl największą liczbę ze zbioru
*/
void task2()
{
	const int size = 10;

	int tabOfNumbers[size];

	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		tabOfNumbers[i] = rand() % 10 + 1;
	}

	std::cout << "Liczby w tablicy:\n";
	for (int i = 0; i < size; i++)
	{
		std::cout << tabOfNumbers[i] << "\n";
	}

	//szukanie największej
	int max = tabOfNumbers[0];
	for (int i = 1; i < size; i++)
	{
		if (max < tabOfNumbers[i])
			max = tabOfNumbers[i];
	}
	std::cout << "Największa liczba w zbiorze to " << max << "\n";

	//szukanie najmniejszej
	int min = tabOfNumbers[0];
	for (int i = 1; i < size; i++)
	{
		if (min > tabOfNumbers[i])
			min = tabOfNumbers[i];
	}

	std::cout << "Najmniejsza liczba w zbiorze to " << min << "\n";

	float sum = 0;
	for (int i = 0; i < size; i++)
		sum = sum + tabOfNumbers[i];

	std::cout << "Suma liczb: " << sum << "\n";
	std::cout << "Średnia liczb:" << sum / size << "\n";

	int count = 0;
	float average = sum / size;
	for (int i = 0; i < size; i++)
		if (tabOfNumbers[i] > average)
			count++;
	std::cout << "Ilość liczb większa od średniej " << count << "\n";
}

/*Zaimplementuj algorytm sortowania przez wybór*/
void task3()
{
	const int size = 10;

	int tabOfNumbers[size];

	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		tabOfNumbers[i] = rand() % 10 + 1;
	}

	std::cout << "Liczby w tablicy:\n";
	for (int i = 0; i < size; i++)
	{
		std::cout << tabOfNumbers[i] << ", ";
	}
	std::cout << "\n";

	for (int i = 0; i < size; i++)
	{
		int min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (tabOfNumbers[min] > tabOfNumbers[j])
				min = j;
		}
		int tmp = tabOfNumbers[i];
		tabOfNumbers[i] = tabOfNumbers[min];
		tabOfNumbers[min] = tmp;
	}

	std::cout << "Liczby w tablicy po posortowaniu:\n";
	for (int i = 0; i < size; i++)
	{
		std::cout << tabOfNumbers[i] << ", ";
	}
	std::cout << "\n";

}

/*Zaimplementuj algorytm sortowania bąbelkowego*/
void task4()
{
	const int size = 10;

	int tabOfNumbers[size];

	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		tabOfNumbers[i] = rand() % 10 + 1;
	}

	std::cout << "Liczby w tablicy:\n";
	for (int i = 0; i < size; i++)
	{
		std::cout << tabOfNumbers[i] << ", ";
	}
	std::cout << "\n";

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (tabOfNumbers[j] > tabOfNumbers[j + 1])
			{
				int tmp = tabOfNumbers[j];
				tabOfNumbers[j] = tabOfNumbers[j + 1];
				tabOfNumbers[j + 1] = tmp;
			}
		}
	}

	std::cout << "Liczby w tablicy po posortowaniu:\n";
	for (int i = 0; i < size; i++)
	{
		std::cout << tabOfNumbers[i] << ", ";
	}
	std::cout << "\n";

}

//Napisz program/funkcje która dla tablicy z liczbami pseudolosowymi policzy średnią arytmetyczną tych liczb
void task5()
{
	const int size = 5;
	int tab[size];
	float averageOfNumbers;
	float sumOfNumbers = 0;

	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		tab[i] = rand() % 10 + 1;
		sumOfNumbers = sumOfNumbers + tab[i];
	}
	
	averageOfNumbers = sumOfNumbers / size;
	                                                            
	for (int i = 0; i < size; i++)
	{
		std::cout << tab[i] << ", ";
	}
	std::cout << "\n" << "średnia = " << averageOfNumbers;


}


// Napisz funkcję, która dla kolekcji danych liczbowych policzy ile jest liczb większych od średniej arytmetycznej.
void task6()
{
	const int size = 5;
	int tab[size];
	float averageOfNumbers;
	float sumOfNumbers = 0;

	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		tab[i] = rand() % 10 + 1;
		sumOfNumbers = sumOfNumbers + tab[i];
	}

	averageOfNumbers = sumOfNumbers / size;

	for (int i = 0; i < size; i++)
	{
		std::cout << tab[i] << ", ";
	}
	std::cout << "\n" << "średnia = " << averageOfNumbers;
	
	int amountOfNumbersBiggerThanAverage = 0;

		for (int i = 0; i < size; i++)
		{
			if (tab[i] > averageOfNumbers)
			{
				amountOfNumbersBiggerThanAverage = amountOfNumbersBiggerThanAverage + 1;
			}
		}
		std::cout << "\n" "liczb wiekszych od średniej jest: " << amountOfNumbersBiggerThanAverage;
}

// Napisz funkcje, która dla kolekcji danych liczbowych przeniesie te liczby do innej kolekcji w odwrotnej kolejności.
void task7()
{
	const int size = 5;
	int tab[size];
	int secondtab[size];
	float sumOfNumbers = 0;

	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		tab[i] = rand() % 10 + 1;
		sumOfNumbers = sumOfNumbers + tab[i];
	}

	for (int i = 0; i < size; i++)
	{
		std::cout << tab[i] << ", ";
	}

	for (int i = 0, j = size - 1; i < size; i++, j--)
	{
		secondtab[j] = tab[i];
	}
	std::cout << "\n";
	for (int i = 0; i < size; i++)
	{
		std::cout << secondtab[i] << ", ";
	}
}

// Napisz funkcje, która dla kolekcji danych liczbowych obliczy częstotliwość występowania danej liczby.
void task8()
{
	const int size = 5;
	int tab[size];

	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		tab[i] = rand() % 10 + 1;
		std::cout << tab[i] << ", ";
	}

	std::cout << "\n";

	for (int i = 0, j = size, c = 0; i < 9; i++)
	{
		if (tab[j] == i)
			c++;
		else
			i++;
	}
/*
	for (int i = 0, j = 0; i < size; i++)
	{
		
		std::cout << "ta liczba: " << tab[i] << " Powtarza sie: " << i << " razy\n";
	}
	*/
}

// Napisz funkcję, która dla kolekcji danych liczbowych znajdzie najdłuższy rosnący podciąg.
void task9()
{
	const int size = 5;
	int tab[size];

	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		tab[i] = rand() % 10 + 1;
		std::cout << tab[i] << ", ";
	}

	std::cout << "\n";


}

// Napisz funkcję, która dla kolekcji danych liczbowych przeniesie te liczby do osobnych kolekcji liczb parzystych i nieparzystych.
void task10()
{
	const int size = 5;
	int tab[size];

	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		tab[i] = rand() % 10 + 1;
	}

	for (int i = 0; i < size; i++)
	{
		if (tab[i] % 2 == 0) {
			std::cout << "Ta liczba jest parzysta: " << tab[i] << "\n";
		}
		else
			std::cout << "Ta liczba nie jest parzysta: " << tab[i] << "\n";
	}
}
int main()
{
	task8();
}