#include <iostream>
#include "Polynomial.h"

using namespace std;

int main() {
	Polynomial PP;
	cout << "请输入多项式的项数：" << endl;
	int T;
	cin >> T;
	cout << "请输入多项式：" << endl;	
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
