
#include "ForeignPassport.h"
#include <iostream>

ForeignPassport::ForeignPassport(std::string name, std::string surname, long number, std::string series) : Passport(name, surname, number, series)
{
}

void ForeignPassport::input()
{
    __super::input();
    bool answer = false;
    do
    {
        std::cout << "Do you want to add visa (true(1)/false(0))?";
        std::cin >> answer;
        if (answer)
        {
            std::cout << "Enter title for visa";
            std::string visa;
            addVisas(visa);
        }
    } while (answer);
}

void ForeignPassport::output() const
{
    __super::output();
    showAllVisas();
}

void ForeignPassport::addVisas(std::string title)
{
	this->visas.push_back(title);
}

void ForeignPassport::deleteVisas(std::string title)
{
    for (auto it = visas.begin(); it != visas.end(); it++) {
        if (*it == title) {
            visas.erase(it);
        }
    }
}

void ForeignPassport::showAllVisas() const
{
    int i = 0;
    while (!visas.empty() && i!=visas.size())
    {
        std::cout << visas.at(i) << std::endl;
        i++;
    }
}
