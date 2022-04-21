
#include "array.h"
#include "Train.h"

void print(MyArr<Train> vokzal, int xin) {
	int fg = 1;
	for (int i = 0; i < vokzal.len(); i++) {
		if (xin == vokzal[i].getNumber()) {
			cout << vokzal[i]<<"\n";
			fg = 0;
		}
	}
	if (fg) {
		cout << "Not Trains this number";
	}
}

int main()
{
	int xin;
	MyArr<Train> vokzal;
	ifstream in("Text1.txt");
	ofstream out("Text2.txt");
	in >> vokzal;
	vokzal.sort(Train::compAll);
	out << vokzal;
	cin >> xin;
	print(vokzal,xin);

}