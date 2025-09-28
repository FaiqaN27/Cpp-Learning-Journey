// Printing numbers from n to 1 while going back

#include <iostream>
using namespace std;

void print_N_to_1(int curr, int n)
{
  if (curr > n)
    return;
  print_N_to_1(curr + 1, n);
  cout << curr << " ";
}

int main()
{
  int n;
  cout << "enter any num: ";
  cin >> n;
  cout << "Printing numbers from n to 1 while going back" << endl;

  print_N_to_1(1, n);

  return 0;
}