#pragma once
#include <string>
#include <fstream>
using namespace std;
class Train
{
private:
	string punkt;
	int number;
	int time;
public:
	int getNumber();
	Train();
	Train(string p, int n, int t);
	Train(const Train& a);


	Train& operator=(const Train& a) {
		punkt = a.punkt;
		number = a.number;
		time = a.time;
		return *this;
	}
	bool operator==(const Train& a) {
		return number == a.number;
	}
	bool operator==(const int a) {
		return number == a;
	}
	bool operator>(const Train& a) {
		return number > a.number;
	}
	bool operator>(const int a) {
		return number > a;
	}
	bool operator<(const Train& a) {
		return number < a.number;
	}
	bool operator<(const int a) {
		return number < a;
	}

	~Train() {};


	friend ostream& operator<<(ostream& os, const Train& a);

	friend istream& operator>>(istream& os, Train& a) {
		os >> a.punkt >> a.number >> a.time;
		return os;
	}

	static bool compP(const Train& a, const Train& b) {
		return a.punkt.compare(a.punkt)>0;
	}
	static bool compN(const Train& a, const Train& b) {
		return a.number>b.number;
	}
	static bool compT(const Train& a, const Train& b) {
		return a.time>b.time;
	}
	static bool compAll(const Train& a, const Train& b) {
		if (a.punkt.compare(b.punkt) == 0) {
			if (a.number == b.number) {
				return a.time > b.time;
			}
			else {
				return a.number > b.number;
			}
		}
		else {
			return a.punkt.compare(b.punkt)>0;
		}
	}

};

