#include <iostream>
using namespace std;

int checkPalindrome(int n)
{
  int rev = 0;
  while (n > 0)
  {
    int rem = n % 10;
    rev = (rev * 10) + rem;
    n = n / 10;
  }
  return rev;
}

int main()
{
  int n;
  cout << "Enter any nummber: ";
  cin >> n;

  int valid = checkPalindrome(n);
  valid == n ? cout << "Number is palindrome" : cout << "Number is not palindrome";
  return 0;
}

// Time Complexity - O(log n)
// Space Complexity - O(1)