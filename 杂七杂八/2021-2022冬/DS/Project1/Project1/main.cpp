#include <iostream>
#include "Polynomial.h"

using namespace std;

int main() {
	Polynomial PP;
	cout << "���������ʽ��������" << endl;
	int T;
	cin >> T;
	cout << "���������ʽ��" << endl;	
	while (2 * T--) {
		double cf;
		int en;
		PolyItem P;
		cin >> cf >> en;
		P.coef=cf;
		P.expn = en;
		PP.InsItem(P);
	}
	
	PP.Derivative();
	PP.Display();

	return 0;
}
