#include <iostream>
#include <math.h>
#include "Complex.hpp"

using namespace std;
int Complex::count = 0;

Complex::Complex()
{
	cout << "Object " << count++ << " is created in the default constructor " << endl;
}

Complex::Complex(double real, double imag)
{
	Real = real;
	Imag = imag;
	cout << "Object " << count++ << " is created in the (double, double) constructor" << endl;
}

Complex::~Complex()
{
	cout << "Object " << --count << " is destroyed " << endl;
}


// Copy constructor
/*Complex::Complex(Complex& a)
{
	Real = a.Real;
	Imag = a.Imag;
	count++;
	std::cout << "Copy constructor called on a = " << a << std::endl;
}*/


double Complex::Modulus()
{
	return(sqrt(Real*Real + Imag*Imag));
}

double Complex::Phase()
{
	return(atan2(Imag,Real));
}


void Complex::Print()
{
	cout << Real;
	if(Imag >= 0)
		cout << "+j" << Imag;
	else
		cout << "-j" << fabs(Imag);
	cout << endl;
}

// Member function, LHS is the object itself, RHS is incoming object.
Complex Complex::operator+(const Complex&a)
{
	std::cout << "Calling member function" << std::endl;
	return Complex(this->Real + a.Real, this->Imag + a.Imag);
}

// Non-member function
Complex operator+(const Complex&a, const Complex& b)
{
	std::cout << "Calling non-member function" << std::endl;
	return Complex(a.Real + b.Real, a.Imag + b.Imag);
}



ostream& operator<<(ostream& os, const Complex& a)
{
	os << a.Real;
	if(a.Imag >= 0)
		os << "+j" << a.Imag;
	else
		os << "-j" << fabs(a.Imag);

	return os;
}


