#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter any number: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      cout << "*";
    }
    for (int k = 0; k < 2 * i; k++)
    {
      cout << " ";
    }
    for (int l = i; l < n; l++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << "*";
    }
    for (int k = 2 * (n - i) - 2; k > 0; k--)
    {
      cout << " ";
    }
    for (int l = 0; l <= i; l++)
    {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}

// pattern
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********