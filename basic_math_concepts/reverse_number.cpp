#include <iostream>
using namespace std;

int reverseNum(int n)
{
  int rev = 0;
  while (n != 0)
  {
    int rem = n % 10;
    rev = (rev * 10) + rem;
    n = n / 10;
  }
  return rev;
}

int main()
{
  //-12345 -> -54321
  int n;
  cout << "Enter number you want to reverse: ";
  cin >> n;

  int reverse = reverseNum(n);
  cout << "Reverse Number: " << reverse;
  return 0;
}

// Time Complexity - O(log₁₀(n))
// Space Complexity - O(1)