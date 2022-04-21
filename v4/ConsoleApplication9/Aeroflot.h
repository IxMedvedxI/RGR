#pragma once
#include <string>
#include <fstream>
using namespace std;
class Aeroflot
{
private:
	string punkt;
	int number;
	string type;
public:
	string getP();
	int getN();
	string getT();
	Aeroflot();
	Aeroflot(string p, int n, int t);
	Aeroflot(const Aeroflot& a);

	Aeroflot& operator=(const Aeroflot& a) {
		punkt = a.punkt;
		number = a.number;
		type = a.type;
		return *this;
	}

	~Aeroflot() {};

	friend ostream& operator<<(ostream& os, const Aeroflot& a) {
		
		os << a.punkt<<"	" << a.number<<	"	" << a.type;
		return os;
	}

	friend istream& operator>>(istream& os, Aeroflot& a) {
		os >> a.punkt >> a.number >> a.type;
		return os;
	}
	static bool compP(const Aeroflot& a, const Aeroflot& b) {
		return a.punkt.compare(a.punkt) > 0;
	}
	static bool compN(const Aeroflot& a, const Aeroflot& b) {
		return a.number > b.number;
	}
	static bool compT(const Aeroflot& a, const Aeroflot& b) {
		return a.type.compare(a.type) > 0;
	}
	static bool compAll(const Aeroflot& a, const Aeroflot& b) {
		if (a.punkt.compare(b.punkt) == 0) {
			if (a.number == b.number) {
				return a.type.compare(a.type) > 0;
			}
			else {
				return a.number > b.number;
			}
		}
		else {
			return a.punkt.compare(b.punkt) > 0;
		}
	}
};

