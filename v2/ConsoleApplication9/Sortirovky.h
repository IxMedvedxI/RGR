#pragma once
template <class T>

void booble(T* arr, int n, bool (*comp)(const T&, const T&)) {//������� ���������� (bool (*comp)(const T&, const T&))- ��� ���� ����� �� ����� �������� ������� ����������
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