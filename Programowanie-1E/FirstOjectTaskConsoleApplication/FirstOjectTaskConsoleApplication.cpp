#include <iostream>

/*
Zdefiniuj klase opisuj�cy punkt na przestrzeni kartezja�skiej. Mo�liwo�ci klasy:
* konstruktory
* metoda kt�ra zw�rci odleg�o�� tego punktu od poczatku uk�adu wsp�rzednych
* metoda kt�ra zwr�ci odleg�o�� od innego punktu
* metoda kt�ra zwr�ci informacj� w kt�rej �wiartce uk�adu wsp�rzednych si� znajduje punkt
* metod� kt�ra poka�e informacje o punkcie.

Napisz program kt�ry zaprezentuje mo�liwo�ci obiektu na podstawie tej klasy.

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
		y = 6;
	}

	Point2D(double xx, double yy)
	{
		x = xx;
		y = yy;
	}

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
	
	std::cout << "Odleg�o�� od �rodka wynosi: " << firstPoint2D.DistanceFromCenter() << "\n";

	Point2D secondPoint2D(2, 8.5);

	std::cout << "Odleg�o�c pomiedzy punktami: " << firstPoint2D.DistanceBetweenTwoPoints() << "\n";
}