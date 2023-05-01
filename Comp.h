#pragma once
#include <iostream>
using namespace std;
class TProcessor
{
protected:
	double power = 5; //���
public:
	TProcessor();
	TProcessor(double power);

	~TProcessor();

	double GetPower();
};

class TComputer
{
protected:
	double price = 2000;
	string brand = "ASUS";
	TProcessor processor;
public:
	TComputer(string brand, double price, TProcessor proc);

	~TComputer();

	string getBrand();
	double getPrice();
	double getProcessor();
};

class TDesktopComputer : public TComputer
{
private:
	int MonitorSize = 17;
public:
	TDesktopComputer(string brand, double price, TProcessor proc, int ms);
	~TDesktopComputer();

	void PrintAll();
};
