#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter any number: ";
  cin >> n;
  int i = 1;
  int fact = 1;
  while (i <= n)
  {
    fact *= i;
    i++;
  }
  cout << "Factorial of " << n << " is " << fact;

  return 0;
}