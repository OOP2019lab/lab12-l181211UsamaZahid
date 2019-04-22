#pragma once
#include "Shape.h"

class circle :public shape
{
private:
	float radius;
public:
	circle(float, string);
	float area()const;
	~circle();
};