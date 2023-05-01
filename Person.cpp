#include "Person.h"

CppPerson::CppPerson() : firstname("Harry"), lastname("Styles"), age(29), height(183), weight(76) {}; 

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

istream& operator>>(istream& is, CppPerson& per) //потоки вводу
/*Визначає шаблон класу basic_istream, який медіатує вилучення для iostreams, а також шаблон класу basic_iostream, який медіатує 
як вставки, так і вилучення. Заголовок також визначає пов'язаний маніпулятор.Цей заголовок файлу зазвичай автоматично включається
іншим заголовком iostreams, його рідко доводиться включати безпосередньо.*/
{
	is >> per.firstname;
	is >> per.lastname;
	is >> per.age;
	is >> per.height;
	is >> per.weight;
	return is;
}

ostream& operator<<(ostream& os, const CppPerson& per) //потоки виводу
/*Об'єкт типу ostream отримує значення різних типів,
перетворює їх у послідовність символів і передає їх через буфер у певне місце для виведення*/
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
	this->salary = 50000;
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
