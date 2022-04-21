
#include "array.h"
#include "Student.h"

int main()
{
	int xin;
	Arr<Student> facultet;
	ifstream in("Text1.txt");
	ofstream out("Text2.txt");
	in >> facultet;
	facultet.sort(Student::compName);
	out << facultet;
	int fg = 1;
	for (int i = 0; i < facultet.getkol(); i++) {
		Arr<int> mas = facultet[i].getusp();
		fg = 1;
		for (int j = 0; j < 5; j++) {
			if ((mas[j] == 4 || mas[j] == 5) && fg) {
				fg = 0;
				cout<<facultet[i];
			}
		}
	}

	
}