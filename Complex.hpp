#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

using namespace std;

class Complex
{
private:
	static int count;
	double Real;
	double Imag;
public:
	Complex();// default constructor
	~Complex(); // destructor
	//Complex(Complex& a); // Copy constructor (for when constructor invoked by a function call).
	Complex(double real, double imag);
	double Modulus();
	double Phase();
	void Print();
	
	// operator overloading as a member function
	Complex operator+(const Complex& a);// variable a is the right hand side operand
	// in A+B is like saying A.operator+(B). 
	
	// As a non-member function, variable a is the left hand operand, variable b
	// is the right hand operand.
	friend Complex operator+(const Complex& a, const Complex& b);

	friend ostream& operator<<(ostream& os, const Complex& c);
};


/* A.operator+(B) only can work when we have access to the class 
representing the LHS argument. Hence, we put the friend declaration
inside the class header, but then we must define the friend function 
outside the class, ie. not as Class::function. Preferred method is 
to write the operator as a member function, but sometimes we don't 
have access to the member's LHS object's class.
*/

#endif // COMPLEX_H