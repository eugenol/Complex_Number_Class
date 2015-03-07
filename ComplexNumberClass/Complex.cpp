#include "Complex.h"


Complex::Complex()
{
	Im = 0;
	Re = 0;
}


Complex::~Complex()
{
}

void Complex::setReal(int real)
{
	Re = real;
}
void Complex::setImaginary(int imaginary)
{
	Im = imaginary;
}
int Complex::getReal(void)
{
	return Re;
}
int Complex::getImaginary()
{
	return Im;
}
void Complex::setComplex(int real, int imaginary)
{
	Re = real;
	Im = imaginary;
}