#pragma once

#include <iostream>
using namespace std;
class TPerson
{
protected:
	string firstname;
	string lastname;
	int age;
	int height;
	double weight;
public:
	TPerson();
	TPerson(const TPerson& per);
	~TPerson();

	TPerson operator=(const TPerson& per);

	friend istream& operator>>(istream& is, TPerson& per);
	friend ostream& operator<<(ostream& os, const TPerson& per);
};

class TEmployee : public TPerson
{
private:
	int salary;
public:
	TEmployee();
	TEmployee(const TEmployee& emp);
	~TEmployee();

	TEmployee operator=(const TEmployee& emp);

	friend istream& operator>>(istream& is, TEmployee& emp);
	friend ostream& operator<<(ostream& os, const TEmployee& emp);
};
