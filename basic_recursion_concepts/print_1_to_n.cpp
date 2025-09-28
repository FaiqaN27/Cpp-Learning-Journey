#include <iostream>
using namespace std;

void printLinear_1toN(int curr, int n)
{
  if (curr > n)
    return;
  cout << curr << " ";
  printLinear_1toN(curr + 1, n);
}

int main()
{
  int n;
  cout << "enter any num: ";
  cin >> n;

  printLinear_1toN(1, n);

  return 0;
}