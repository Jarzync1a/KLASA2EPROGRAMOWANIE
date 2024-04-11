#include <iostream>

// kwadrat trapez prostokat

class Quadrangle
{
protected:
	double sideA, sideB, sideC, sideD;
public:

	Quadrangle(double a, double b, double c, double d):Quadrangle(a,b,c,d)
	{
		//sideA = a;
		//sideB = b;
		//sideC = c;
		//sideD = d;
	}

	double GetPerimeter()
	{
		return sideA + sideB + sideC + sideD;
	} 
};

class square : public Quadrangle
{
protected:
	

public:
	square(double a) :Quadrangle(a, a, a, a)
	{

	}
};

class Trapeze : public Quadrangle
{
protected:
	

public:
	Trapeze(double a, double b, double c, double d)
	{

	}
};

class Recktangle : public Quadrangle
{
protected:
	

public:
	Recktangle(double a, double b):Quadrangle(a,b,a,b)
	{
		//sideA = a;
		//sideB = b;
		//sideC = a;
		//sideD = b;
	}

	double GetArea()
	{
		return sideA * sideB;
	}
};


int main()
{
	Recktangle r(1, 2);
	std::cout << "Obwód Prostokata: " << r.GetPerimeter() << "\n";

	Trapeze 
}
