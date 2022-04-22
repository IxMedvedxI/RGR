#include "Student.h"
int Student::getNumber()//пишем как работает функция(метод)
{
	return number;
}

Student::Student()//пишем как выглядит стандартный конструктор
{
	name = "";
	number = 0;
	usp.setKol(5);
}
Student::Student(string p, int n, Arr<int> u) {//пишем как выглядит  конструктор
	name = p;
	number = n;
	usp = u;

}
Student::Student(const Student& a) {//пишем как выглядит  конструктор
	name = a.name;
	number = a.number;
	usp = a.usp;
	
}
