#include <iostream>

/*
ZADANIE 1
Zdefiniuj klase opisuj¹cy punkt na przestrzeni kartezjañskiej. Mo¿liwoœci klasy:
* konstruktory
* metoda która zwórci odleg³oœæ tego punktu od poczatku uk³adu wspó³rzednych
* metoda która zwróci odleg³oœæ od innego punktu
* metoda która zwróci informacjê w której æwiartce uk³adu wspó³rzednych siê znajduje punkt
* metodê która poka¿e informacje o punkcie.

Napisz program który zaprezentuje mo¿liwoœci obiektu na podstawie tej klasy.

*/

/*
* ZADANIE 2
Zdefiniuj klase opisuj¹ce konto bankowe. Mo¿liwoœci klasy:
* konstruktory
* metoda która dokona wp³aty na konto
* metoda która wyp³aty z konta
* metoda która wykona przelew na inne konto
* metodê która poka¿e informacje o koncie.

Napisz program który zaprezentuje mo¿liwoœci obiektu na podstawie tej klasy.
*/

/*
ZADANIE 3
Zdefiniuj klase opisuj¹c¹ prostok¹t. Mo¿liwoœci klasy:
* konstruktory
* metoda która zwórci obwód prostok¹ta
* metoda która pole prostok¹ta
* metodê która poka¿e informacje o prostok¹cie.

Napisz program który zaprezentuje mo¿liwoœci obiektu na podstawie tej klasy.
*/

class Point2D
{
private:
	double x; 
	double y;

public:	
	Point2D()
	{
		x = 10;
		y = 6;
	}

	Point2D(double xx)
	{
		x = xx; 
	double DistanceFromCenter(Point2D SecondPoint)
	{
		double distance = sqrt(x * x + y * y);
		return distance;
	}

	double DistanceBetweenTwoPoints(Point2D secondpoint)
	{
		double distance = sqrt((x - secondpoint.x) * (x - secondpoint.x) + (y - secondpoint.y) * (y - secondpoint.y);
		return distance;
	}
};

int main()
{
	setlocale(LC_CTYPE, "polish");

	Point2D firstPoint2D;
	
	std::cout << "Odleg³oœæ od œrodka wynosi: " << firstPoint2D.DistanceFromCenter() << "\n";

	Point2D secondPoint2D(2, 8.5);

	std::cout << "Odleg³oœc pomiedzy punktami: " << firstPoint2D.DistanceBetweenTwoPoints() << "\n";
}