#include <iostream>
#include "Passport.h"
#include "ForeignPassport.h"
using namespace std;

int main()
{
	Passport p("Natalya", "Babenko", 1234, "KM");
	p.output();
	ForeignPassport fp;
	fp.setName("Oleg");
	fp.setSurname("Ivanenko");
	fp.setNumber(786);
	fp.setSeries("PK");
	fp.addVisas("visa 1");
	fp.addVisas("visa 2");
	fp.output();
	ForeignPassport fp2("Bogdan", "Petrenko", 234, "lp");
	fp2.output();
}