#include "Circle.h"

circle::circle(float r, string clr) :shape(clr, "Circle")
{
	radius = r;
}

float circle::area()const
{
	return 3.142*radius*radius;
}

circle::~circle()
{
	cout << "~circle() called." << endl;
}