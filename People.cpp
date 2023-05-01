#include "People.h"

TPerson::TPerson() : firstname("Bob"), lastname("Kirilyuk"), age(20), height(180), weight(70) {};

TPerson::TPerson(const TPerson& per)
{
	this->firstname = per.firstname;
	this->lastname = per.lastname;
	this->age = per.age;
	this->height = per.height;
	this->weight = per.weight;
}

TPerson::~TPerson() {}

TPerson TPerson::operator=(const TPerson& per)
{
	this->firstname = per.firstname;
	this->lastname = per.lastname;
	this->age = per.age;
	this->height = per.height;
	this->weight = per.weight;
	return *this;
}

istream& operator>>(istream& is, TPerson& per)
{
	is >> per.firstname;
	is >> per.lastname;
	is >> per.age;
	is >> per.height;
	is >> per.weight;
	return is;
}

ostream& operator<<(ostream& os, const TPerson& per)
{
	os << "Firstname: " << per.firstname << endl;
	os << "Lastname: " << per.lastname << endl;
	os << "Age: " << per.age << endl;
	os << "Height: " << per.height << endl;
	os << "Weight: " << per.weight << endl;
	return os;
}

istream& operator>>(istream& is, TEmployee& emp)
{
	is >> emp.firstname;
	is >> emp.lastname;
	is >> emp.age;
	is >> emp.height;
	is >> emp.weight;
	is >> emp.salary;
	return is;
}

ostream& operator<<(ostream& os, const TEmployee& emp)
{
	os << "Firstname: " << emp.firstname << endl;
	os << "Lastname: " << emp.lastname << endl;
	os << "Age: " << emp.age << endl;
	os << "Height: " << emp.height << endl;
	os << "Weight: " << emp.weight << endl;
	os << "Salary: " << emp.salary << endl;
	return os;
}



TEmployee::TEmployee() : TPerson()
{
	this->salary = 2000;
}

TEmployee::TEmployee(const TEmployee& emp)
{
	this->firstname = emp.firstname;
	this->lastname = emp.lastname;
	this->age = emp.age;
	this->height = emp.height;
	this->weight = emp.weight;
	this->salary = emp.salary;
}

TEmployee::~TEmployee() {}

TEmployee TEmployee::operator=(const TEmployee& emp)
{
	this->firstname = emp.firstname;
	this->lastname = emp.lastname;
	this->age = emp.age;
	this->height = emp.height;
	this->weight = emp.weight;
	this->salary = emp.salary;
	return *this;
}
