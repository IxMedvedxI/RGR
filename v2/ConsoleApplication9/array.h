#pragma once
#include <iostream>
#include <fstream>
#include "Sortirovky.h"
using namespace std;
template <class T>

class Arr {//обьявляем переменые которые будем использовать в класе
private:
	T* mas;
	int kol;

public:

	int len() {//функция для получения длины массива
		return kol;
	}

	void sort(bool (*comp)(const T&a,const T& b)) {//функция сортировки (bool (*comp)(const T&, const T&))- для того чтобы мы могли передать функцию сортировки
		T buf;
		booble(mas, kol,comp);
	}
	//след. 2 функции сделаны для того чтобы установить в класс то что нам надо
	void setMas(T* m) { //передаем в клас массив
		mas = m;
	}
	void setKol(int k) {//передаем в класс размер
		kol = k;
		mas = new T[kol];
	}
	int getkol() {//функция для получения длинны массива аналогича len()
		return kol;
	}

	Arr() {//стандартный конструктор
		mas = NULL;
		kol = 0;
	}

	Arr(int n) {//конструктор чтобы создать массив длиной n
		kol = n;
		mas = new T[kol];
	}

	Arr(T* a, int n) {//конструктор чтобы создать массив копия массива а длиной n
		kol = n;
		mas = new T[kol];
		for (int i = 0; i < kol; i++) {
			mas[i] = a[i];
		}
	}

	Arr(const Arr& a) {//конструктор чтобы создать массив копия массива а 
		kol = a.kol;
		mas = new T[kol];
		for (int i = 0; i < kol; i++) {
			mas[i] = a.mas[i];
		}
	}

	~Arr() {//деструктор

	}

	Arr& operator=(const Arr& a) {//перегружаем оператор = чтобы мы могли приравнять два обьекта
		kol = a.kol;
		mas = new T[kol];
		for (int i = 0; i < kol; i++) {
			mas[i] = a.mas[i];
		}
		return *this;
	}
	T& operator[](int n) {//перегружаем оператор [] чтобы получит n-ий элемент массива
		if (n >= 0 && n < kol) {
			return mas[n];
		}
		else {
			throw 1;
		}
	}

	friend ostream& operator<<(ostream& os, const Arr& a) {//перегружаем оператор << чтобы выводить класс так как нам надо
		for (int i = 0; i < a.kol; i++) {
			os << a.mas[i] << " \n";
		}
		return os;
	}

	friend istream& operator>>(istream& os, Arr& a) {//перегружаем оператор>> чтобы описать как в класс будет вводится информация
		os >> a.kol;
		if (a.mas != NULL)a.~Arr();
		a.mas = new T[a.kol];
		for (int i = 0; i < a.kol; i++) {
			os >> a.mas[i];
		}
		return os;
	}

};