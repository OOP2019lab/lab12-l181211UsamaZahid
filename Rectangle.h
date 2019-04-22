#pragma once
#include <iostream>
#include "Shape.h"
using namespace std;

class rectangle : public shape
{
private:
	float height;
	float width;
public:
	rectangle(float, float, string);
	float area()const;
	~rectangle();
};