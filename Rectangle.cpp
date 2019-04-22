#include"Rectangle.h"

rectangle::rectangle(float h,float w,string clr): shape(clr,"Rectangle")
{
	height = h;
	width = w;
}

float rectangle::area()const
{
	return width*height;
}

rectangle::~rectangle()
{
	cout << "~rectangle() called." << endl;
}