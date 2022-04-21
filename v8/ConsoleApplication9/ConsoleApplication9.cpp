
#include "array.h"
#include "Train.h"
bool xout(Array<Train> vok, string xin) {
	int fg = 0;
	for (int i = 0; i < vok.len(); i++) {
		if (xin == vok[i].getP()) {
			cout << vok[i];
			fg = 1;
		}
	}
	return fg;
}


int main()
{
	string xin;
	Train bufer;
	Array<Train> vok;
	ifstream in("F1.txt");
	ofstream out("F2.txt");
	in >> vok;
	vok.sort(Train::compN);
	out << vok;
	cin >> xin;
	if (!xout(vok, xin))
		cout << "Not Train this name";

}