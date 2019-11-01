#include <iostream>
#include <conio.h>
#include "complex.h"

using namespace std;
int main()
{
	Complex A(20.0, -15.0);
	Complex B(1, 1);
	Complex C;
	Complex D;

	C = A.operator+(B);//both these lines call exactly the same operator overloaded functions

	cout << A << " + " << B << " = " << C << endl;

	_getch();

	D = A + B;
	cout << A << " + " << B << " = " << D << endl;

	_getch();
	return 0;
}


