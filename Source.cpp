#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Shape.h"
#include <iostream>
#include <string>
#include<conio.h>
using namespace std;

int sumArea(shape& Shape1, shape& Shape2)
{
	int sumArea;
	sumArea = Shape1.area() + Shape2.area();
	return sumArea;
}

int main()
{
	triangle t1(1, 9, "Red");
	circle c1(2, "Blue");
	rectangle r1(6, 2, "Orange");
	cout << t1.area() << endl;
	cout << t1.color << endl;
	cout << c1.area() << endl;
	cout << r1.area() << endl;

	shape *sptr1 = &t1;
	shape &sref = r1;
	cout << sptr1->area() << endl;
	cout << sptr1->color << endl;
	cout << sref.color << endl;
	cout << sref.area() << endl;

	shape s1("Purple");
	cout << sumArea(t1, c1) << endl;
	cout << sumArea(s1, r1) << endl;
	cout << sumArea(s1, t1) << endl;

	int count = 5;
	shape**shapesArray = new shape*[count];
	for (int i = 0; i < count;)
	{
		cout << "Press 1 for a triangle, 2 for rectangle and 3 for a circle." << endl;
		switch (_getch())
		{
		case '1':
		{
			int b, h;
			string clr;
			cout << "Base: ";
			cin >> b;
			cout << "Height: ";
			cin >> h;
			cout << "Color: ";
			cin >> clr;
			shapesArray[i] = new triangle(b, h, clr);
			i++;
			cout << endl;
			break;
		}
		case '2':
		{
			int l, w;
			string clr;
			cout << "Length: ";
			cin >> l;
			cout << "Width: ";
			cin >> w;
			cout << "Color: ";
			cin >> clr;
			shapesArray[i] = new rectangle(l, w, clr);
			i++;
			cout << endl;
			break;
		}
		case '3':
		{
			int r;
			string clr;
			cout << "Radius: ";
			cin >> r;
			cout << "Color: ";
			cin >> clr;
			shapesArray[i] = new circle(r, clr);
			i++;
			cout << endl;
			break;
		}
		default:
		{
			cout << "Invalid input. Enter again." << endl << endl;
			break;
		}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		cout << shapesArray[i]->area() << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		delete shapesArray[i];
	}
	delete[]shapesArray;

	shape *s2 = new triangle(1.0, 9.0, "Red");
	delete[]s2;

	system("pause");
}