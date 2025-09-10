// Check if num is prime or not
#include <iostream>
using namespace std;

void primeNum(int n)
{
  if (n <= 1)
  {
    cout << n << " is not prime number";
    return;
  }
  for (int i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      cout << n << " is not prime number";
      return;
    }
  }
  cout << n << " is prime number";
}
int main()
{
  int num;
  cout << "Enter Any  Number: ";
  cin >> num;

  primeNum(num);

  return 0;
}