// print prime numbers less than or equal to num
#include <iostream>
using namespace std;
#include <cmath>

bool isPrime(int n)
{
  if (n <= 1)
  {
    return false;
  }
  for (int i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return true;
}

void primeNum(int n)
{
  for (int i = 2; i <= n; i++)
  {
    if (isPrime(i))
    {
      cout << i << " ";
    }
  }
}
int main()
{
  cout << "Enter any number: ";
  int num;
  cin >> num;

  primeNum(num);

  return 0;
}