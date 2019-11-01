// overloading functions
// Adapted from http://www.cplusplus.com/doc/tutorial/functions2/
#include <iostream>
using namespace std;

int doSomeOperation (int a, int b)
{
  return (a*b);
}

double doSomeOperation (double a, double b)
{
  return (a*b);
}

float doSomeOperation (float a, float b)
{
  return (a*b);
}

int main ()
{
  int x=5,y=2;
  double n=5.0,m=2.0;
  float a = 4.0, b = 3.1;
  cout << doSomeOperation (x,y) << '\n';
  cout << doSomeOperation (n,m) << '\n';
  cout << doSomeOperation (a,b) << '\n';
  return 0;
}
