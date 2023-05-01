#include "Dot.h"

#include <iostream>
using namespace std;

TDot::TDot() {}

TDot::TDot(double x) : x(x), y(x) {}

TDot::TDot(double x, double y) : x(x), y(y)
{
	/*this->x = x;
	this->y = y;*/
}

TDot::~TDot() {}

void TDot::PrintAll()
{
	cout << "Print All:" << endl;
	cout << "Dot x: " << this->x << endl;
	cout << "Dot y: " << this->y << endl;
}




TColorDot::TColorDot() {}

TColorDot::TColorDot(double x) :TDot(x) {}

TColorDot::TColorDot(double x, double y) : TDot(x, y) {}

TColorDot::TColorDot(double x, double y, unsigned long color) :TDot(x, y), color(color) {}

TColorDot::~TColorDot() {}

void TColorDot::SetX(double val)
{
	this->x = val;
}

double TColorDot::GetX()
{
	return this->x;
}

void TColorDot::SetY(double val)
{
	this->y = val;
}

double TColorDot::GetY()
{
	return this->y;
}

void TColorDot::SetColor(unsigned long val)
{
	this->color = val;
}

unsigned long TColorDot::GetColor()
{
	return this->color;
}

void TColorDot::PrintCoordinates()
{
	cout << "Dot x: " << this->x << endl;
	cout << "Dot y: " << this->y << endl;
}

void TColorDot::PrintAll()
{
	cout << '\t' << '\t' << '\t' << "Print All: " << endl;
	PrintCoordinates();
	cout << "Dot color: " << this->color << endl;
	cout << endl << endl;
}