#pragma once
#include <string>
#include <ctime>
class Passport
{
protected:
	long number;
	std::string series;
	std::string name;
	std::string surname;
public:
	Passport();
	Passport(std::string name, std::string surname, long number, std::string series);
	long getNumber() const;
	std::string getName() const;
	std::string getSeries() const;
	std::string getSurname() const;
	void setNumber(long number);
	void setSeries(std::string series);
	void setName(std::string name);
	void setSurname(std::string surname);
	void output() const;
	void input();
};

