// function templates
#include <iostream>

template <class T> T sum (T a, T b)
{
  T result;
  result = a + b;
  return result;
}

int main () {
  int i=5, j=6, k;
  double f=2.0, g=0.5, h;
  
  k=sum(i,j);
  h=sum(f,g);
  
  std::cout << k << std::endl;
  std::cout << h << std::endl;
  
  return 0;
}
