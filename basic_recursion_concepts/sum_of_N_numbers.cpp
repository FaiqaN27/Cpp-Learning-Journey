// Sum of N Numbers using functional recursion

#include <iostream>
using namespace std;

int SumOfN(int n)
{
  if (n == 0)
    return 0;

  return n + SumOfN(n - 1);
}

int main()
{
  int n;
  cout << "Enter any number: ";
  cin >> n;

  cout << "Sum of " << n << " is " << SumOfN(n);

  return 0;
}