#include <iostream>

struct book
{
	std::string title;
	std::string author;
	short publicationYear;
	unsigned short numberOfPages;
};

void menu()
{
	system("cls");
	std::cout << "BIBLIOTEKA";
	std::cout << "1. \n";

	std::cout << "0. koniec programu\n";
}

int getOption()
{
	std::cout << "Wybierz opcje: ";
	int option;
	std::cin >> option;
	return option;
}

int main()
{
	const int BOOK_SIZE = 100;
	book colectionOfBooks[BOOK_SIZE];
	int currentNumberOfBooks;

	while (true)
	{
		menu();
		int chosenOption = getOption();

		if (chosenOption == 0)
			break;
	}
}
