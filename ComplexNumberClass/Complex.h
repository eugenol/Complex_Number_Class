#ifndef COMPLEX_H
#define COMPLEX_H
class Complex
{
	int Re;
	int Im;
public:
	Complex();
	~Complex();

	void setReal(int real);
	void setImaginary(int imaginary);
	int getReal(void);
	int getImaginary();
	void setComplex(int real, int imaginary);
};
#endif

