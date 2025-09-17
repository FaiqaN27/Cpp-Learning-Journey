#include <iostream>
using namespace std;

int count(int n)
{
  int count = 0;
  while (n > 0)
  {
    count++;
    n = n / 10;
  }

  return count;
}

int main()
{
  int n;
  cout << "Enter Any Number: ";
  cin >> n;

  int totalDigits = count(n);
  cout << "Total Digits: " << totalDigits;
  return 0;
}

// Time Complexity - O(log₁₀(n))
// Space Complexity - O(1)