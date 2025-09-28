// Binary to decimal

#include <iostream>
using namespace std;

int toDec(int n)
{
  int pow = 1;
  int ans = 0;
  while (n != 0)
  {
    int rem = n % 10;
    n = n / 10;
    ans += (pow * rem);
    pow = pow * 2;
  }
  return ans;
}
int main()
{
  cout << "Enter binary number: ";
  int num;
  cin >> num;

  cout << num << " to decimal is " << toDec(num);

  return 0;
}
