#include <iostream>
#include <cstdlib>
#include <ctime>
/*
Zadanie 1:
Stwórz klasê Licz z :

• prywatnym polem wartosc przechowuj¹cym wartoœæ liczbow¹.

• metod¹ Dodaj przyjmuj¹c¹ jeden parametr i dodaj¹c¹ przekazan¹ wartoœæ do wartoœci trzymanej w polu wartosc.

• analogiczn¹ operacjê odejmij

• dodaj konstruktor bezparametrowy który ustawi wartoœæ pocz¹tkow¹ na 0

• dodaj konstruktor z jednym parametrem - który inicjuje pole wartosc na liczbê przekazan¹ w parametrze.

W Main utwórz kilka obiektów klasy Licz i wykonaj ró¿ne operacje.


class Licz
{
private:
	int number;
public:
	Licz()
	{
		number = 0;
	}

	Licz(int a)
	{
		number = a;
	}

	void increseNumber(int a)
	{
		number += a;
	}

	void decreseNumber(int a)
	{
		number -= a;

	}

};


int main()
{
	Licz a;
	Licz b(5);

	a.decreseNumber(2);
	b.increseNumber(1);
}
*/

/*
Zadanie 2:
Stwórz klasê Sumator z :

• prywatnym polem Liczby bêd¹cym tablic¹ liczb

• dodaj konstruktor domyœlny który uzupe³ni tablicê wartoœciami 0

• dodaj konstruktor z jednym parametrem który uzupe³ni tablicê wartoœciami pseudolosowymi z zakresu od 0 do wartoœci tego parametru.

• metod¹ Suma zwracaj¹c¹ sumê liczb z pola Liczby

• metodê SumaPodziel3 zwracaj¹c¹ sumê liczb z tablicy, które s¹ podzielne przez 3

• metod¹ wypisuj¹c¹ wszystkie elementy tablicy

• metod¹ przyjmuj¹c¹ dwa parametry : lowIndex oraz highIndex, która wypisze elementy o indeksach >= lowIndex oraz <= highIndex.Metoda powinna zadzia³aæ
poprawnie, gdy lowIndex lub highIndex wykraczaj¹ poza zakres tablicy(pomin¹æ te elementy).
*/

class Sumator
{
private:
	int table[10];

public:
	Sumator()
	{
		for (int i = 0; i < 10; i++)
		{
			table[i] = 0;
		}
	}

	Sumator(int a)
	{
		for (int i = 0; i < 10; i++)
		{
			table[i] = rand() % 10;
		}
	}

	void sumOfNumbers()
	{
		int sum = 0;
		for (int i = 0; i < 10; i++)
		{
			sum = table[i] + sum;
		}
		std::cout << "suma podanych liczb wynosi = " << sum << "\n";
	}

	void SumaPodziel3()
	{
		int sumOfNumbersDivisibleBy3 = 0;
		for (int i = 0; i < 10; i++)
		{
			if (table[i] % 3 == 0)
			{
				sumOfNumbersDivisibleBy3 = table[i] + sumOfNumbersDivisibleBy3;
			}
		}
		std::cout << "suma liczb podzielnych przez 3 = " << sumOfNumbersDivisibleBy3 << "\n";
	}

	void showAllNumbers()
	{
		for (int i = 0; i < 10; i++)
		{
			std::cout << (i + 1) << " liczba z tabeli = " << table[i] << "\n";
		}
	}

	void zakresLiczb(int lowIndex, int highIndex)
	{
		if (lowIndex >= 0 && highIndex <= 10)
		{
			for (int i = lowIndex; i < highIndex; i++)
			{
				std::cout << (i + 1) << " low i high index liczba z tabeli = " << table[i] << "\n";
			}
		}
		else {
			std::cout << "Podana liczba jest nie oprawid³owa \n";
		}

	}

};


int main()
{
	srand(time(NULL));
	Sumator a(10);
	a.sumOfNumbers();
	a.SumaPodziel3();
	a.showAllNumbers();
	a.zakresLiczb(2, 6);

}
