#include <iostream>
using namespace std;

int fib(int n)
{
  if (n == 0 || n == 1)
    return n;

  return fib(n - 1) + fib(n - 2);
}

int main()
{
  int n;
  cout << "enter any number: ";
  cin >> n;

  cout << "The " << n << "th element in fibonacci series is: " << fib(n);

  return 0;
}

// Fibonacci series
//  function in which multiple recursive calls are happening
// 1st call - fib(n-1)
// 2nd call - fib(n-2)

// Time Complexity - O(2^n)
// Space Complexity - O(n)