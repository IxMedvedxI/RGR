#include "Aeroflot.h"

string Aeroflot::getP()
{
	return punkt;
}

int Aeroflot::getN()
{
	return number;
}

string Aeroflot::getT()
{
	return type;
}

Aeroflot::Aeroflot()
{
	punkt = "";
	number = 0;
	type = "";
}
Aeroflot::Aeroflot(string p, int n, int t) {
	punkt = p;
	number = n;
	type = t;
}
Aeroflot::Aeroflot(const Aeroflot& a) {
	punkt = a.punkt;
	number = a.number;
	type = a.type;
}
