#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter any num: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    for (int j = n - 1; j > i; j--)
    {
      cout << " ";
    }

    for (int k = 0; k <= i; k++)
    {
      cout << k + 1;
    }

    for (int l = i; l >= 1; l--)
    {
      cout << l;
    }

    cout << endl;
  }
}

// pattern
//    1
//   121
//  12321
// 1234321