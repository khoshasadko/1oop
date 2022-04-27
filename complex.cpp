#include <iostream>
#include "complex.h"
void complex::SetRe(double real)
{
	re = real;
}

double complex::GetRe()
{
	return re;
}

void complex::SetIm(double imag)
{
	im = imag;
}

double complex::GetIm()
{
	return im;
}

complex complex::sum(complex n1)
{
	complex x;
	x.re = n1.re + this->re;
	x.im = n1.im + this ->im;
	return x;
}

complex complex::dif(complex n1)
{
	complex x;
	x.re = n1.re - this->re;
	x.im = n1.im - this->im;
	return x;
}

complex complex::mul(complex n1)
{
	complex x;
	x.im = n1.im * this->re + n1.im * this->re;
	x.re = n1.re * this->im + n1.im * this->im;
	return x;

}

complex complex::div(complex n1)
{
	complex x;
	x.im = (this->re * n1.im-n1.re*this->im)/ (this->re * this->re + this->im * this->im);
	x.re = (this->im * n1.re-n1.im*this->re)/(this->im*this->im+this->re*this->re);
	return x;
}
