#include <iostream>
using namespace std;

void printN_to_1(int curr, int n)
{
  if (curr < 1)
    return;
  cout << curr << " ";
  printN_to_1(curr - 1, n);
}

int main()
{
  int n;
  cout << "enter any num: ";
  cin >> n;

  printN_to_1(n, n);

  return 0;
}