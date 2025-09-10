// Sum of  digits of number

#include <iostream>
using namespace std;

int SumOfDigits(int n)
{
  int sum = 0;
  while (n != 0)
  {
    int rem = n % 10;
    n /= 10;
    sum += rem;
  }
  return sum;
}

int main()
{
  int n;
  cout << "Enter any Number: " << endl;
  cin >> n;

  cout << "Sum of digits of number: " << SumOfDigits(n);

  return 0;
}