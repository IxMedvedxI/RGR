#pragma once
#include <iostream>
#include <fstream>
#include "Sortirovky.h"
using namespace std;
template <class T>

class Array {
private:
	T* mas;
	int kol;

public:

	int len() {
		return kol;
	}

	void sort(bool (*comp)(const T&, const T&)) {
		booble(mas, kol,comp);
	}

	Array() {
		mas = NULL;
		kol = 0;
	}

	Array(int n) {
		kol = n;
		mas = new T[kol];
	}

	Array(T* a, int n) {
		kol = n;
		mas = new T[kol];
		for (int i = 0; i < kol; i++) {
			mas[i] = a[i];
		}
	}

	Array(const Array& a) {
		kol = a.kol;
		mas = new T[kol];
		for (int i = 0; i < kol; i++) {
			mas[i] = a.mas[i];
		}
	}

	~Array() {

	}

	Array& operator=(const Array& a) {
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

	friend ostream& operator<<(ostream& os, const Array& a) {
		for (int i = 0; i < a.kol; i++) {
			os << a.mas[i] << " \n";
		}
		return os;
	}

	friend istream& operator>>(istream& os, Array& a) {
		os >> a.kol;
		if (a.mas != NULL)a.~Array();
		a.mas = new T[a.kol];
		for (int i = 0; i < a.kol; i++) {
			os >> a.mas[i];
		}
		return os;
	}

};