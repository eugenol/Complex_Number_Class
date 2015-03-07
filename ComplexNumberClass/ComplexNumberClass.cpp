// ComplexNumberClass.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include "Complex.h"

using namespace std;

int main(int argc, char* argv[])
{
	double temp;
	Complex a, b, res;

	cout << "Enter real part of first complex number: ";
	cin >> temp;
	a.setReal(temp);
	cout << endl;

	cout << "Enter imaginary part of first complex number: ";
	cin >> temp;
	a.setImaginary(temp);
	cout << endl;

	cout << "Enter real part of second complex number: ";
	cin >> temp;
	b.setReal(temp);
	cout << endl;

	cout << "Enter imaginary part of second complex number: ";
	cin >> temp;
	b.setImaginary(temp);
	cout << endl;
	
	res = a + b;
	cout << "a+b = " << res.getReal() << " " << res.getImaginary() << "i" <<endl;

	return 0;
}

