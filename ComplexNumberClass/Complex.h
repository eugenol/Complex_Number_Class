#ifndef COMPLEX_H
#define COMPLEX_H
class Complex
{
	double Re;
	double Im;
public:
	Complex();
	~Complex();

	void setReal(double real);
	void setImaginary(double imaginary);
	double getReal(void);
	double getImaginary();
	void setComplex(double real, double imaginary);

	Complex conjugate(void);
	//Operator overloading
	Complex operator+(Complex &b);
	Complex operator-(Complex &b);
	Complex operator*(Complex &b);
	Complex operator/(Complex &b);
};
#endif

