#pragma once
#include <string>

using namespace std;

class Circle
{
public:
	Circle();
	Circle(double initialRadius);
	~Circle();
	double getRadius() const;
	double getDiameter() const;
	double getArea() const;
	double getCircumference() const;
	void setRadius(double newRadius);
	void displayCircleInfo(string) const;

private:
	double radius;
};

