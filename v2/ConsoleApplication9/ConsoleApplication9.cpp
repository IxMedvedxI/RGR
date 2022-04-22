
#include "array.h"
#include "Student.h"

int main()
{
	int xin;
	Arr<Student> facultet;//создаем массив студентов 
	ifstream in("Text1.txt");//открываем файл для чтения
	ofstream out("Text2.txt");//открываем файл для написания
	in >> facultet;//читаем файл1 и записываем его в факультет
	facultet.sort(Student::compName);//сортируем массив студентов по именам студентов
	out << facultet;//записываем факультет в файл2
	for (int i = 0; i < facultet.getkol(); i++) {//ищем студентов с 4 или 5 и выводим на экран
		Arr<int> mas = facultet[i].getusp();
		for (int j = 0; j < 5; j++) {
			if (mas[j] == 4 || mas[j] == 5) {
				j = 5;//нашли у студента 4 или 5 ,дальше нет смысла смотреть его оценки пишем его и переходим к следующему студенту
				cout<<facultet[i];
			}
		}
	}

	
}