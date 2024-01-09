#include <iostream>

struct book
{
	std::string title;
	std::string author;
	short publicationYear;
	unsigned short numberOfPages;
};

void showAllBooks(book books[], int currentNumberOfBooks)
{
	system("cls");
	std::cout << "Wyswietlenie wszystkich pozycji: \n";
	for (int i = 0; i <= currentNumberOfBooks; i++)
	{
		std::cout << "-----------------------------------------------\n";
		std::cout << "Tytu³ " << books[i].title << "\n";
		std::cout << "Autor " << books[i].author << "\n";
		std::cout << "Rok wydania " << books[i].publicationYear << "\n";
		std::cout << "Ilosc stron " << books[i].numberOfPages << "\n";
	}
	system("pause");
}

void menu()
{
	system("cls");
	std::cout << "BIBLIOTEKA\n";
	std::cout << "1. Dodanie nowej ksiazki \n";
	std::cout << "2. Wyswietlenie wszystkich ksiazek \n";

	std::cout << "0. koniec programu\n";
}

int getOption()
{
	std::cout << "Wybierz opcje: ";
	int option;
	std::cin >> option;
	return option;
}

void addNewBook(book books[], int &currentNumberOfBooks)
{
	currentNumberOfBooks++;
	std::cout << "Podaj tytu³:\n";
	std::cin >> books[currentNumberOfBooks].title;
	std::cout << "Podaj autora:\n";
	std::cin >> books[currentNumberOfBooks].author;
	std::cout << "Podaj date wydania:\n";
	std::cin >> books[currentNumberOfBooks].publicationYear;
	std::cout << "Podaj ilosc stron:\n";
	std::cin >> books[currentNumberOfBooks].numberOfPages;
}

int main()
{
	setlocale(LC_CTYPE, "polish");
	const int BOOK_SIZE = 100;
	book colectionOfBooks[BOOK_SIZE];
	int    currentNumberOfBooks = -1;

	while (true)
	{
		menu();
		int chosenOption = getOption();

		if (chosenOption == 0)
			break;

		switch (chosenOption)
		{
		case 1:
			addNewBook(colectionOfBooks, currentNumberOfBooks);
			break;
		
		case 2:
			showAllBooks(colectionOfBooks, currentNumberOfBooks);
			break;
		}
	}
}
