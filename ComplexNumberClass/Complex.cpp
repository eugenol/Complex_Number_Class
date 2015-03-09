#include "Complex.h"

using namespace std;

Complex::Complex()
{
	Im = 0;
	Re = 0;
}


Complex::~Complex()
{
}
//Replaced by inline finctions
/*
void Complex::setReal(double real)
{
	Re = real;
}
void Complex::setImaginary(double imaginary)
{
	Im = imaginary;
}
double Complex::getReal()
{
	return Re;
}
double Complex::getImaginary()
{
	return Im;
}
void Complex::setComplex(double real, double imaginary)
{
	Re = real;
	Im = imaginary;
}
*/
Complex Complex::conjugate()
{
	Complex retval;

	retval.setComplex(Re, Im*-1);
	return retval;
}
//Operator overloading
Complex Complex::operator+(Complex &b)
{
	Complex retval;
	retval.Re = Re + b.Re;
	retval.Im = Im + b.Im;

	return retval;
}

Complex Complex::operator-(Complex &b)
{
	Complex retval;

	retval.Re = Re - b.Re;
	retval.Im = Im - b.Im;

	return retval;
}

Complex Complex::operator*(Complex &b)
{
	Complex retval;

	retval.Re = Re*b.Re - Im*b.Im;
	retval.Im = Re*b.Im + Im*b.Re;

	return retval;
}

Complex Complex::operator/(Complex &b)
{
	Complex retval;
	double temp;

	temp = b.Re*b.Re + b.Im*b.Im;
	retval.Re = (Re*b.Re + Im*b.Im) / temp;
	retval.Im = (Im*b.Re - Re*b.Im) / temp;

	return retval;
}

ostream &operator<<(ostream &os, const Complex &b)
{
	if (b.Im < 0)
		cout << b.Re << b.Im;
	else
		cout << b.Re << "+" << b.Im << "i";

	return os;
}
istream &operator>>(istream &is, Complex &b)
{

}