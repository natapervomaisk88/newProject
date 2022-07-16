#pragma once
#include "Passport.h"
#include <string>
#include <vector>
class ForeignPassport :
    public Passport
{
	std::vector<std::string> visas;
public:
	ForeignPassport() : Passport() {}
	ForeignPassport(std::string name, std::string surname, long number, std::string series);
	void input();
	void output() const;
	void addVisas(std::string title);
	void deleteVisas(std::string title);
	void showAllVisas() const;
};

