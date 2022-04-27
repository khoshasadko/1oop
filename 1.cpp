#include <iostream>
#include "complex.h"


int main()
{
	complex a;
	double a1, a2;
	cout << "please enter real and imag" << endl;
	cin >> a1 >> a2;
	a.SetRe(a1);
	a.SetIm(a2);


	complex b;
	double b1, b2;
	cout << "please enter real and imag" << endl;
	cin >> b2 >> b1;
	b.SetRe(b1);
	b.SetIm(b2);

	cout << "a+b=" << b.sum(a).get()<<endl;
	cout << "a-b=" << b.dif(a).get()<<endl;
	cout << "a*b=" << b.mul(a).get()<<endl;
	cout << "a/b=" << b.div(a).get()<<endl;

	return 0;
}
