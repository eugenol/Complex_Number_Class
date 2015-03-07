#include "Complex.h"


Complex::Complex()
{
	Im = 0;
	Re = 0;
}


Complex::~Complex()
{
}

void Complex::setReal(double real)
{
	Re = real;
}
void Complex::setImaginary(double imaginary)
{
	Im = imaginary;
}
double Complex::getReal(void)
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
	//
	return retval;
}