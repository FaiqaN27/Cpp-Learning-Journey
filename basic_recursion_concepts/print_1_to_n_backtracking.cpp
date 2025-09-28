// Printing numbers from 1 to n while going back

#include <iostream>
using namespace std;

void print_1_to_N(int curr, int n)
{
  if (curr < 1)
    return;
  print_1_to_N(curr - 1, n);
  cout << curr << " ";
}

int main()
{
  int n;
  cout << "enter any num: ";
  cin >> n;
  cout << "Printing numbers from 1 to n while going back" << endl;

  print_1_to_N(n, n);

  return 0;
}