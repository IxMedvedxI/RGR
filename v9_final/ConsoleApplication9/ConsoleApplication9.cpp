
#include "array.h"
#include "Train.h"
#include "Sortirovky.h"

int main()
{
	int xin;
	Arr<Train> vokzal;
	ifstream in("Text1.txt");
	ofstream out("Text2.txt");
	in >> vokzal;
	vokzal.sort(Train::compN);
	out << vokzal;
	cin >> xin;
	Train t("", xin, 0);
	cout << "\n"<<xin<<" " <<vokzal[vokzal.poisk(t)];



}