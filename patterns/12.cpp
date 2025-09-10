#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter any number: ";
  cin >> n;
  int spaces = 2 * n - 2;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j;
    }

    for (int k = 0; k < spaces; k++)
    {
      cout << " ";
    }

    for (int l = i; l >= 1; l--)
    {
      cout << l;
    }
    cout << endl;
    spaces -= 2;
  }
  return 0;
}

// Pattern
//  1        1
//  12      21
//  123    321
//  1234  4321
//  1234554321