#include "Dot.h"

#include <iostream>
using namespace std;

CppDot::CppDot() {}

CppDot::CppDot(double x) : x(x), y(x) {}

CppDot::CppDot(double x, double y) : x(x), y(y)
{
	this->x = x;
	this->y = y;
}

CppDot::~CppDot() {}

void CppDot::PrintAll()
{
	cout << "Print all information: " << endl;
	cout << "Abscissa x: " << this->x << endl;
	cout << "Ordinate y: " << this->y << endl;
}




CppColorDot::CppColorDot() {}

CppColorDot::CppColorDot(double x) :CppDot(x) {}

CppColorDot::CppColorDot(double x, double y) : CppDot(x, y) {}

CppColorDot::CppColorDot(double x, double y, unsigned long color) :CppDot(x, y), color(color) {}

CppColorDot::~CppColorDot() {}

void CppColorDot::SetX(double val)
{
	this->x = val;
}

double CppColorDot::GetX()
{
	return this->x;
}

void CppColorDot::SetY(double val)
{
	this->y = val;
}

double CppColorDot::GetY()
{
	return this->y;
}

void CppColorDot::SetColor(unsigned long val)
{
	this->color = val;
}

unsigned long CppColorDot::GetColor()
{
	return this->color;
}

void CppColorDot::PrintCoordinates()
{
	cout << "Abscissa x: " << this->x << endl;
	cout << "Ordinate y: " << this->y << endl;
	cout << "Dot (" << this->x << ", " << this->y << ")" << endl;
}

void CppColorDot::PrintAll()
{
	cout << "Print All: " << endl;
	PrintCoordinates();
	cout << "Dot color: " << this->color << endl;
	cout << endl << endl;
}