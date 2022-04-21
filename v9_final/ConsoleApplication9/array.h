#pragma once
#include <iostream>
#include <fstream>
#include "Sortirovky.h"
using namespace std;
template <class T>

class Arr {
private:
	T* mas;
	int kol;

public:

	int len() {
		return kol;
	}

	void sort(bool (*comp)(const T&a,const T& b)) {
		booble(mas, kol,comp);
	}

	Arr() {
		mas = NULL;
		kol = 0;
	}

	Arr(int n) {
		kol = n;
		mas = new T[kol];
	}

	Arr(T* a, int n) {
		kol = n;
		mas = new T[kol];
		for (int i = 0; i < kol; i++) {
			mas[i] = a[i];
		}
	}

	Arr(const Arr& a) {
		kol = a.kol;
		mas = new T[kol];
		for (int i = 0; i < kol; i++) {
			mas[i] = a.mas[i];
		}
	}

	~Arr() {

	}

	Arr& operator=(const Arr& a) {
		kol = a.kol;
		mas = new T[kol];
		for (int i = 0; i < kol; i++) {
			mas[i] = a.mass[i];
		}
	}
	T& operator[](int n) {
		if (n >= 0 && n < kol) {
			return mas[n];
		}
		else {
			throw 1;
		}
	}

	friend ostream& operator<<(ostream& os, const Arr& a) {
		for (int i = 0; i < a.kol; i++) {
			os << a.mas[i] << " \n";
		}
		return os;
	}

	friend istream& operator>>(istream& os, Arr& a) {
		os >> a.kol;
		if (a.mas != NULL)a.~Arr();
		a.mas = new T[a.kol];
		for (int i = 0; i < a.kol; i++) {
			os >> a.mas[i];
		}
		return os;
	}
	int poisk(T& t) {
		
		return  del(mas, t, 0, kol);
	}
	

};