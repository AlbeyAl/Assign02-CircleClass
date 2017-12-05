#include "stdafx.h"
#include "Circle.h"
#include <math.h>
#include <iostream>
#include <iomanip>

using namespace std;

Circle::Circle()
{
	Circle::radius = 1;
}

Circle::Circle(double initialRadius)
{
	Circle::radius = initialRadius;
}

double Circle::getRadius() const
{
	return Circle::radius;
}

double Circle::getDiameter() const
{
	return Circle::getRadius() * 2.0;
}

double Circle::getArea() const
{
	return pow(Circle::getRadius(), 2.0);
}

double Circle::getCircumference() const
{
	return Circle::getDiameter() * 3.14159;
}

void Circle::setRadius(double newRadius)
{
	Circle::radius = newRadius;
}

void Circle::displayCircleInfo(string header) const
{
	cout << setprecision(2) << header << ":  Radius -" << setw(8) << Circle::getRadius() << "    Diameter      -" << setw(8) << Circle::getDiameter() << endl;
	cout << string(header.length(), ' ') << "   Area   -" << setw(8) << Circle::getArea() << "    Circumference -" << setw(8) << Circle::getCircumference() <<  endl << endl;
}

Circle::~Circle()
{
}
