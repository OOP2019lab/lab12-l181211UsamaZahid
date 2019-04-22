#pragma once
#include <iostream>
#include<string>
using namespace std;

class shape
{
protected:
	string type;
public:
	shape();
	shape(string, string="");
	virtual float area()const;
	string color;
	virtual ~shape();
};