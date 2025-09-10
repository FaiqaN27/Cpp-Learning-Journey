#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter any number: ";
  cin >> n;
  int i = 1;
  while (i <= n)
  {
    int j = 1;
    while (j <= i)
    {
      cout << i;
      j++;
    }
    cout << endl;
    i++;
  }
  return 0;
}

// Pattern
//  1
//  22
//  333
//  4444
//  55555