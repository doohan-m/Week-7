#include <iostream>
#include <iomanip>

using namespace std;

double Add(double a, double b)
{
	return (a+b);
}

double Sub(double a, double b)
{
	return (a-b);
}

double Mult(double a, double b)
{
	return a*b;
}

int main()
{
	double (*FcnPtr)(double, double);
	
	cout.setf(ios::showpoint | ios::right |ios::fixed | ios:: uppercase | ios::showpos);
	cout << setw(12) << setprecision(5);
	std::cout << "Add function is at \t" << hex << reinterpret_cast<unsigned int *>(&Add) << std::endl;
	std::cout << "Sub function is at \t" << hex << reinterpret_cast<unsigned int *>(&Sub) << std::endl;
	std::cout << "Mult function is at \t" << hex << reinterpret_cast<unsigned int *>(&Mult) << std::endl;

  	std::cin.get();  //Used for pausing the program until keyboard input

	FcnPtr = Add;

	std::cout << "After 'FcnPtr = Add' FcnPtr is pointing to \t" << hex << reinterpret_cast<unsigned int *>(FcnPtr) << std::endl;

	std::cout << "FcnPtr(10.0,20.0) gives " << FcnPtr(10.0,20.0) << std::endl;

	FcnPtr = Sub;

	std::cout << "After 'FcnPtr = Sub' FcnPtr is pointing to \t" << hex << reinterpret_cast<unsigned int *>(FcnPtr) << std::endl;

	std::cout << "FcnPtr(10.0,20.0) gives " << FcnPtr(10.0,20.0) << std::endl;

	FcnPtr = Mult;

	std::cout << "After 'FcnPtr = Mult' FcnPtr is pointing to \t" << hex << reinterpret_cast<unsigned int *>(FcnPtr) << std::endl;

	std::cout << "FcnPtr(10.0,20.0) gives " << FcnPtr(10.0,20.0) << std::endl;

	std::cout << "and finally address of main() is \t\t" << hex << reinterpret_cast<unsigned int *>(&main) << std::endl;

  	std::cin.get();  //Used for pausing the program until keyboard input

	return 0;
}