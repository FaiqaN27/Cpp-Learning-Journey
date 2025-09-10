#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int n;
  cout << "Enter any number: ";
  cin >> n;
  int i = 2;
  while (i < sqrt(n))
  {
    if (n % i == 0)
    {
      cout << n << " is not prime number";
      return 0;
    }
    i++;
  }
  cout << i << endl;
  cout << n << " is prime number";

  return 0;
}