#include <iostream>
#include <cstdlib>
#include <ctime>
/*
Zadanie 1:
Stw�rz klas� Licz z :

� prywatnym polem wartosc przechowuj�cym warto�� liczbow�.

� metod� Dodaj przyjmuj�c� jeden parametr i dodaj�c� przekazan� warto�� do warto�ci trzymanej w polu wartosc.

� analogiczn� operacj� odejmij

� dodaj konstruktor bezparametrowy kt�ry ustawi warto�� pocz�tkow� na 0

� dodaj konstruktor z jednym parametrem - kt�ry inicjuje pole wartosc na liczb� przekazan� w parametrze.

W Main utw�rz kilka obiekt�w klasy Licz i wykonaj r�ne operacje.


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
Stw�rz klas� Sumator z :

� prywatnym polem Liczby b�d�cym tablic� liczb

� dodaj konstruktor domy�lny kt�ry uzupe�ni tablic� warto�ciami 0

� dodaj konstruktor z jednym parametrem kt�ry uzupe�ni tablic� warto�ciami pseudolosowymi z zakresu od 0 do warto�ci tego parametru.

� metod� Suma zwracaj�c� sum� liczb z pola Liczby

� metod� SumaPodziel3 zwracaj�c� sum� liczb z tablicy, kt�re s� podzielne przez 3

� metod� wypisuj�c� wszystkie elementy tablicy

� metod� przyjmuj�c� dwa parametry : lowIndex oraz highIndex, kt�ra wypisze elementy o indeksach >= lowIndex oraz <= highIndex.Metoda powinna zadzia�a�
poprawnie, gdy lowIndex lub highIndex wykraczaj� poza zakres tablicy(pomin�� te elementy).
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
			std::cout << "Podana liczba jest nie oprawid�owa \n";
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
