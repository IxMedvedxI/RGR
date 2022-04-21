#pragma once
#include <iostream>
#include <fstream>
#include "Sortirovky.h"
using namespace std;
template <class T>

class MyArr {
private:
	T* mas;
	int kol;

public:

	int len() {
		return kol;
	}

	void sort(bool (*comp)(const T&, const T&)) {
		booble(mas, kol, comp);
	}

	MyArr() {
		mas = NULL;
		kol = 0;
	}

	MyArr(int n) {
		kol = n;
		mas = new T[kol];
	}

	MyArr(T* a, int n) {
		kol = n;
		mas = new T[kol];
		for (int i = 0; i < kol; i++) {
			mas[i] = a[i];
		}
	}

	MyArr(const MyArr& a) {
		kol = a.kol;
		mas = new T[kol];
		for (int i = 0; i < kol; i++) {
			mas[i] = a.mas[i];
		}
	}

	~MyArr() {

	}

	MyArr& operator=(const MyArr& a) {
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

	friend ostream& operator<<(ostream& os, const MyArr& a) {
		for (int i = 0; i < a.kol; i++) {
			os << a.mas[i] << " \n";
		}
		return os;
	}

	friend istream& operator>>(istream& os, MyArr& a) {
		os >> a.kol;
		if (a.mas != NULL)a.~MyArr();
		a.mas = new T[a.kol];
		for (int i = 0; i < a.kol; i++) {
			os >> a.mas[i];
		}
		return os;
	}

};