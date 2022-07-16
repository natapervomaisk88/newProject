#include "Passport.h"
#include <iostream>
#include <string>

Passport::Passport()
{
	std::cout << "Passport()\n";
}

Passport::Passport(std::string name, std::string surname, long number, std::string series)
{
	this->name = name;
	this->surname = surname;
	this->number = number;
	this->series = series;
}
long Passport::getNumber() const
{
	return number;
}
std::string Passport::getName() const
{
	return name;
}
std::string Passport::getSeries() const
{
	return series;
}
std::string Passport::getSurname() const
{
	return surname;
}
void Passport::setNumber(long number)
{
	this->number = number;
}
void Passport::setSeries(std::string series)
{
	this->series = series;
}
void Passport::setName(std::string name)
{
	this->name = name;
}
void Passport::setSurname(std::string surname)
{
	this->surname = surname;
}

void Passport::input()
{
	std::cout << "Enter name";
	std::cin >> name;
	std::cout << "Enter surname";
	std::cin >> surname;
	std::cout << "Enter number";
	std::cin >> number;
	std::cout << "Enter series";
	std::cin >> series;
}
void Passport::output() const
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Surname: " << surname << std::endl;
	std::cout << "Number: " << number << std::endl;
	std::cout << "Series: " << series << std::endl;
}
