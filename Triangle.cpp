#include "Triangle.h"

triangle::triangle(float b,float h, string clr) :shape(clr, "Triangle")
{
	base = b;
	height = h;
}

float triangle::area()const
{
	return (base*height) / 2;
}

triangle::~triangle()
{
	cout << "~triangle() called." << endl;
}