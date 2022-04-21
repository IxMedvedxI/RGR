#pragma once
template <class T>

void booble(T* arr, int n, bool (*comp)(const T&, const T&)) {
	T buf;
	int f = 1;
	while (f) {
		f = 0;
		for (int i = 0; i < n - 1; i++) {
			if (comp(arr[i],arr[i + 1])) {
				buf = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = buf;
				f = 1;
			}
		}
	}
}

template <class T>
int  del(T* arr, T xin,int lg,int rg) {
	int fg = 0;
	while (rg >= lg) {
		int midle = (lg + rg) / 2;
		if (arr[midle] == xin) {
			return midle;
			/*fg = 0;
			cout << arr[midle];
			break;*/
		}
		else {
			if (arr[midle] > xin) {
				rg = midle - 1;
			}
			else {
				lg = midle + 1;
			}
		}
	}
	return -1;
	
}