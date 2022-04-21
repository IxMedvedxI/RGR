#include "Train.h"

int Train::getNumber()
{
	return number;
}

Train::Train()
{
	punkt = "";
	number = 0;
	time = 0;
}
Train::Train(string p, int n, int t) {
	punkt = p;
	number = n;
	time = t;
}
Train::Train(const Train& a) {
	punkt = a.punkt;
	number = a.number;
	time = a.time;
}
