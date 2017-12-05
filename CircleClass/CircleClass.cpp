#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <math.h>
#include <conio.h>
#include <string>
#include "Circle.h"

using namespace std;

int displayCircleInfo(Circle, string);

int main()
{
	Circle circle01, circle02(5.7), circle03, circle04;

	cout << endl;

	circle01.displayCircleInfo("circle01");
	
	circle02.displayCircleInfo("circle02");
	
	circle03.setRadius(9.75);
	circle03.displayCircleInfo("circle03");
	
	circle04 = circle02;
	circle04.displayCircleInfo("cirlce04");
	
	cout << endl << endl;
	cout << "Press any of the keys to continue...";
	getch();
	
	return 0;
}