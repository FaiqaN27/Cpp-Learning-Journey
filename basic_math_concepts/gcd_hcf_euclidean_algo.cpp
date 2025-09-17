#include <iostream>
using namespace std;

void printGcd(int a, int b)
{
  while (a > 0 && b > 0)
  {
    if (a > b)
      a = a % b;
    else
      b = b % a;
  }
  if (a == 0)
    cout << "Greatest Common Divisor: " << b;
  else
    cout << "Greatest Common Divisor: " << a;
}

int main()
{
  int a, b;
  cout << "Enter two numbers: ";
  cin >> a >> b;

  printGcd(a, b);

  return 0;
}

// Time Complexity - O(log(min(a, b)))
// Space Complexity - O(1)