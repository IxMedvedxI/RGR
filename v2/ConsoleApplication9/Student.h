#pragma once
#include <string>
#include <fstream>
#include "array.h"
using namespace std;
class Student
{
private:
	string name;
	int number;
	Arr<int>usp;
public:
	int getNumber();
	Student();
	Student(string p, int n, Arr<int>u);
	Student(const Student& a);
	Arr<int> getusp() {
		return usp;
	}


	Student& operator=(const Student& a) {
		name = a.name;
		number = a.number;
		usp = a.usp;
		return *this;
	}

	~Student() {};

	friend ostream& operator<<(ostream& os, const Student& a) {
		
		os << a.name<<"	" << a.number<<	"	\nusp:\n" << a.usp;
		return os;
	}

	friend istream& operator>>(istream& os, Student& a) {
		os >> a.name >> a.number >> a.usp;
		return os;
	}

	static bool compName(const Student& a, const Student& b) {
		return a.name.compare(a.name)>0;
	}
	static bool compNumber(const Student& a, const Student& b) {
		return a.number>b.number;
	}
	

};

