#include "Computer.h"

CppProcessor::CppProcessor() {}

CppProcessor::CppProcessor(double pow) : power(pow) {}

CppProcessor::~CppProcessor() {}

double CppProcessor::GetPower()
{
	return this->power;
}



CppComputer::CppComputer(string br, double pr, CppProcessor proc) : brand(br), price(pr), processor(proc) {}

CppComputer::~CppComputer() {}

string CppComputer::getBrand()
{
	return this->brand;
}

double CppComputer::getPrice()
{
	return this->price;
}

double CppComputer::getProcessor()
{
	return this->processor.GetPower();
}



CppDesktopComputer::CppDesktopComputer(string brand, double price, CppProcessor proc, int ms) : CppComputer(brand, price, proc)
{
	this->MonitorSize = ms;
}

CppDesktopComputer::~CppDesktopComputer() {}

void CppDesktopComputer::PrintAll()
{
	cout << "Brand: " << getBrand() << endl;
	cout << "Price: " << getPrice() << "$" << endl;
	cout << "Processor power: " << getProcessor() << " MHz" << endl;
	cout << "Monitor size: " << this->MonitorSize << " inches" << endl;
}