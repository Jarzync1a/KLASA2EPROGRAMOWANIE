#include <iostream> 

class Person
{
private:
	std::string name;
	//std::string secondName;
	std::string surname;
	//short height;
	short age;
	//char sex; //'M' - male; 'F' - female
public:

	Person()
	{
		name = "Jan";
		surname = "Kowalski";
		age = 25;
	}

	~Person()
	{
		std::cout << "Teraz dzia³a destruktor imie: " << name << "\n";
	}

	void showInfo()
	{
		std::cout << "Info o osobie:\n";
		std::cout << "Imiê: " << name << "\n";
		std::cout << "Nazwisko: " << surname << "\n";
		std::cout << "Wiek: " << age << "\n";
	}

	bool isLegalAge()
	{
		return age >= 18;
	}

	void setAge(short a)
	{
		if (a > 0 && a < 130)
		{
			age = a;
		}
		else
		{
			std::cout << "B³edna wartosc\n";
		}
	}

	short GetAge()
	{
		return age;
	}
};

int main()
{
	setlocale(LC_CTYPE, "polish");

	Person firstPerson;
	//firstPerson.name = "Jan";
	//firstPerson.surname = "Kowalski";
	//firstPerson.age = 5;
	firstPerson.setAge(500);
	std::cout << "Wiek: " << firstPerson.GetAge() << "\n";

	firstPerson.showInfo();

	if (firstPerson.isLegalAge())
		std::cout << "Jesteœ pe³noletni\n";

	Person secondPerson;
	//secondPerson.name = "Pawe³";
	//secondPerson.surname = "Nowak";
	//   secondPerson.age = 49;

	secondPerson.showInfo();
	if (firstPerson.isLegalAge())
		std::cout << "Jesteœ pe³noletni\n";
}