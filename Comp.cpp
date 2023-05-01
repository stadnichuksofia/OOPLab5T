#include "Comp.h"

TProcessor::TProcessor() {}

TProcessor::TProcessor(double pow) : power(pow) {}

TProcessor::~TProcessor() {}

double TProcessor::GetPower()
{
	return this->power;
}





TComputer::TComputer(string br, double pr, TProcessor proc) : brand(br), price(pr), processor(proc) {}

TComputer::~TComputer() {}

string TComputer::getBrand()
{
	return this->brand;
}

double TComputer::getPrice()
{
	return this->price;
}

double TComputer::getProcessor()
{
	return this->processor.GetPower();
}





TDesktopComputer::TDesktopComputer(string brand, double price, TProcessor proc, int ms) : TComputer(brand, price, proc)
{
	this->MonitorSize = ms;
}

TDesktopComputer::~TDesktopComputer() {}

void TDesktopComputer::PrintAll()
{
	cout << "Brand: " << getBrand() << endl;
	cout << "Price: " << getPrice() << "$" << endl;
	cout << "Processor power: " << getProcessor() << " MHz" << endl;
	cout << "Monitor size: " << this->MonitorSize << " inches" << endl;
}