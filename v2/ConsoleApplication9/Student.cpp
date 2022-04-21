#include "Student.h"
int Student::getNumber()
{
	return number;
}

Student::Student()
{
	name = "";
	number = 0;
	usp.setKol(5);
}
Student::Student(string p, int n, Arr<int> u) {
	name = p;
	number = n;
	usp = u;

}
Student::Student(const Student& a) {
	name = a.name;
	number = a.number;
	usp = a.usp;
	
}
