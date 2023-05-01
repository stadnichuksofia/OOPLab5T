#pragma once
#include <iostream>
using namespace std;
class CppProcessor
{
protected:
	double power = 5; 
public:
	CppProcessor();
	CppProcessor(double power);

	~CppProcessor();

	double GetPower();
};

class CppComputer
{
protected:
	double price = 2000;
	string brand = "ASUS";
	CppProcessor processor;
public:
	CppComputer(string brand, double price, CppProcessor proc);

	~CppComputer();

	string getBrand();
	double getPrice();
	double getProcessor();
};

class CppDesktopComputer : public CppComputer
{
private:
	int MonitorSize = 17;
public:
	CppDesktopComputer(string brand, double price, CppProcessor proc, int ms);
	~CppDesktopComputer();

	void PrintAll();
};
