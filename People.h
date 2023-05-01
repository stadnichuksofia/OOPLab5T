#pragma once

#include <iostream>
using namespace std;
class CppPerson
{
protected:
	string firstname;
	string lastname;
	int age;
	int height;
	double weight;
public:
	CppPerson();
	CppPerson(const CppPerson& per);
	~CppPerson();

	CppPerson operator=(const CppPerson& per);

	friend istream& operator>>(istream& is, CppPerson& per);
	friend ostream& operator<<(ostream& os, const CppPerson& per);
};

class CppEmployee : public CppPerson
{
private:
	int salary;
public:
	CppEmployee();
	CppEmployee(const CppEmployee& emp);
	~CppEmployee();

	CppEmployee operator=(const CppEmployee& emp);

	friend istream& operator>>(istream& is, CppEmployee& emp);
	friend ostream& operator<<(ostream& os, const CppEmployee& emp);
};
