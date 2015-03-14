#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

using namespace std;

class Complex
{
	double Re;
	double Im;
public:
	Complex();
	~Complex();

	void setReal(double real) { Re = real; };
	void setImaginary(double imaginary) { Im = imaginary; };
	double getReal(void) { return Re; };
	double getImaginary(void) { return Im; };
	void setComplex(double real, double imaginary) { Re = real; Im = imaginary; };

	Complex conjugate(void);
	//Operator overloading
	Complex operator+(Complex &b);
	Complex operator-(Complex &b);
	Complex operator*(Complex &b);
	Complex operator/(Complex &b);
	Complex operator=(Complex &b);
	Complex operator+=(Complex &b);
	Complex operator-=(Complex &b);

	friend ostream &operator<<(ostream &os, const Complex &b);
	friend istream &operator>>(istream &is, Complex &b);
};
#endif

