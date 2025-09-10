#include <iostream>
using namespace std;

int factorial(int n)
{
  int fact = 1;
  int i = 1;
  while (i <= n)
  {
    fact *= i;
    i++;
  }
  return fact;
}

int formula(int n, int r)
{
  int _n = factorial(n);
  int _r = factorial(r);
  int _nr = factorial(n - r);
  return (_n / (_r * (_nr)));
}

int main()
{
  int n = 10, r = 6;

  cout << "nCr = " << formula(n, r);

  return 0;
}