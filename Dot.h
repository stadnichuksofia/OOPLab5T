#pragma once

class CppDot
{
protected:
	double x = 0;
	double y = 0;
public:
	CppDot();
	CppDot(double x);
	CppDot(double x, double y);
	~CppDot();
	void PrintAll();
};

class CppColorDot : CppDot
{
private:
	unsigned long color = 0;
public:
	CppColorDot();
	CppColorDot(double x);
	CppColorDot(double x, double y);
	CppColorDot(double x, double y, unsigned long color);
	~CppColorDot();

	void SetX(double val);
	double GetX();
	void SetY(double val);
	double GetY();
	void SetColor(unsigned long val);
	unsigned long GetColor();

	void PrintCoordinates();
	void PrintAll();
};