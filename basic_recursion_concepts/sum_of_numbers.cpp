// Sum of N Numbers using parameterized recursion

#include <iostream>
using namespace std;

void sumOfNum(int curr, int sum)
{
  if (curr < 1)
  {
    cout << "Sum of N Numbers using parameterized recursion: " << sum;
    return;
  }
  sumOfNum(curr - 1, sum + curr);
}

int main()
{
  int n;
  cout << "enter any num: ";
  cin >> n;

  sumOfNum(n, 0);

  return 0;
}