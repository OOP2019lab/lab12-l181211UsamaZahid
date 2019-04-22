#include "Shape.h"

shape::shape()
{
	color = "";
	type = "";
}

shape::shape(string clr, string tp)
{
	color = clr;
	type = tp;
}

float shape::area()const
{
	return 0;
}

shape::~shape()
{
	cout << "~shape() called." << endl;
}