#include <iostream>

struct person
{
    std::string name;
    //std::string secondName;
    std::string surname;
    short height;
    short age;
    //char sex; //'M' - male; 'F' - female
};

int main()
{
    person firstPerson;
    
    firstPerson.name = "Jan";
    firstPerson.surname = "kOWALSKI";
    firstPerson.age = 5;

    std::cout << "Info o sobie:\n";
    std::cout << "imie: " << firstPerson.name << "\n";
    std::cout << "Nazwisko: " << firstPerson.surname << "\n";
    std::cout << "Wiek: " << firstPerson.age << "\n";
}
