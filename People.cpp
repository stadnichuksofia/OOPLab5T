#include "People.h"

CppPerson::CppPerson() : firstname("Bob"), lastname("Kirilyuk"), age(20), height(180), weight(70) {};

CppPerson::CppPerson(const CppPerson& per)
{
	this->firstname = per.firstname;
	this->lastname = per.lastname;
	this->age = per.age;
	this->height = per.height;
	this->weight = per.weight;
}

CppPerson::~CppPerson() {}

CppPerson CppPerson::operator=(const CppPerson& per)
{
	this->firstname = per.firstname;
	this->lastname = per.lastname;
	this->age = per.age;
	this->height = per.height;
	this->weight = per.weight;
	return *this;
}

istream& operator>>(istream& is, CppPerson& per)
{
	is >> per.firstname;
	is >> per.lastname;
	is >> per.age;
	is >> per.height;
	is >> per.weight;
	return is;
}

ostream& operator<<(ostream& os, const CppPerson& per)
{
	os << "Firstname: " << per.firstname << endl;
	os << "Lastname: " << per.lastname << endl;
	os << "Age: " << per.age << endl;
	os << "Height: " << per.height << endl;
	os << "Weight: " << per.weight << endl;
	return os;
}

istream& operator>>(istream& is, CppEmployee& emp)
{
	is >> emp.firstname;
	is >> emp.lastname;
	is >> emp.age;
	is >> emp.height;
	is >> emp.weight;
	is >> emp.salary;
	return is;
}

ostream& operator<<(ostream& os, const CppEmployee& emp)
{
	os << "Firstname: " << emp.firstname << endl;
	os << "Lastname: " << emp.lastname << endl;
	os << "Age: " << emp.age << endl;
	os << "Height: " << emp.height << endl;
	os << "Weight: " << emp.weight << endl;
	os << "Salary: " << emp.salary << endl;
	return os;
}



CppEmployee::CppEmployee() : CppPerson()
{
	this->salary = 2000;
}

CppEmployee::CppEmployee(const CppEmployee& emp)
{
	this->firstname = emp.firstname;
	this->lastname = emp.lastname;
	this->age = emp.age;
	this->height = emp.height;
	this->weight = emp.weight;
	this->salary = emp.salary;
}

CppEmployee::~CppEmployee() {}

CppEmployee CppEmployee::operator=(const CppEmployee& emp)
{
	this->firstname = emp.firstname;
	this->lastname = emp.lastname;
	this->age = emp.age;
	this->height = emp.height;
	this->weight = emp.weight;
	this->salary = emp.salary;
	return *this;
}
