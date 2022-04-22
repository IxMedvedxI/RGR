#pragma once
#include <string>
#include <fstream>
#include "array.h"
using namespace std;
class Student
{
private://обьявляем переменые которые будем использовать в класе
	string name;
	int number;
	Arr<int>usp;//я использовал собственый клас массив чтобы было больше возможностей и просто удобней
public:
	int getNumber();//обьявляем функцию для получения number из класса
	Student();//обьявляем стандартный конструктор
	Student(string p, int n, Arr<int>u);//обьявляем конструктор с параметрами
	Student(const Student& a);//еще один конструктор
	Arr<int> getusp() {//функция для получения успеваемости
		return usp;
	}


	Student& operator=(const Student& a) {//перегружаем оператор = чтобы мы могли приравнять два обьекта
		name = a.name;
		number = a.number;
		usp = a.usp;
		return *this;
	}

	~Student() {};

	friend ostream& operator<<(ostream& os, const Student& a) {//перегружаем оператор << чтобы выводить класс так как нам надо
		
		os << a.name<<"	" << a.number<<	"	\nusp:\n" << a.usp;
		return os;
	}

	friend istream& operator>>(istream& os, Student& a) {//перегружаем оператор>> чтобы описать как в класс будет вводится информация
		os >> a.name >> a.number >> a.usp;
		return os;
	}

	static bool compName(const Student& a, const Student& b) {//фунция стравнения сравнивает name функция сортировки нужна чтобы сортировать файл по тем переменым по которым мы хотим
		return a.name.compare(a.name)>0;
	}
	static bool compNumber(const Student& a, const Student& b) {//фунция стравнения сравнивает number
		return a.number>b.number;
	}
	

};

