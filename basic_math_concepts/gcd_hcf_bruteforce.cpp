#include <iostream>
using namespace std;

void checkGcdHcf(int num1, int num2)
{
  int minimum = min(num1, num2);
  for (int i = minimum; i >= 1; i--)
  {
    if (num1 % i == 0 && num2 % i == 0)
    {
      cout << i;
      break;
        }
  }
}

int main()
{
  int num1, num2;
  cout << "Enter two number: ";
  cin >> num1 >> num2;

  checkGcdHcf(num1, num2);

  return 0;
}

// Time Complexity - O(min(num1,num2))
// Space Complexity - O(1)