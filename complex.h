#ifndef COMPLEX_H
#define COMPLEX_H 
#include<string>

using namespace std;

class complex
{
public:
	void SetRe(double real);
	double GetRe();
	void SetIm(double imag);
	double GetIm();
	complex sum(complex n1);
	complex dif(complex n1);
	complex mul(complex n1);
	complex div(complex n1);

	string get() {
		return to_string(re) + " + " + to_string(im) + "*i";
	}

private:
	double re;
	double im;

};

#endif



