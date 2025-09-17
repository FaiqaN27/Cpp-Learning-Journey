#include <iostream>
using namespace std;

void checkPrime(int n)
{
  int count = 0;
  for (int i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      count++;
      if (n / i != i)
        count++;
    }
  }
  if (count == 2)
    cout << n << " is prime number";
  else
    cout << n << " is not prime number";
}

int main()
{
  int n;
  cout << "Enter any number: ";
  cin >> n;

  checkPrime(n);

  return 0;
}

// Time Complexity - O(√n)
// Space Complexity - O(1)