// convert into binary
#include <iostream>
using namespace std;

int toBinary(int n)
{
  int ans = 0;
  int pow = 1;
  while (n != 0)
  {
    int rem = n % 2;
    n = n / 2;
    ans += (rem * pow);
    pow *= 10;
  }
  return ans;
}

int main()
{
  cout << "Enter decimal number: ";
  int num;
  cin >> num;

  cout << num << " to binary is " << toBinary(num);

  return 0;
}