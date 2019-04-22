#pragma once
#include"Shape.h"

class triangle :public shape
{
private:
	float base;
	float height;
public:
	triangle(float, float, string);
	float area()const;
	~triangle();
};