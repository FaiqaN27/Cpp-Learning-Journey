#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter any num: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    cout << "*";
    if (i != 0)
    {
      for (int l = 0; l < 2 * i - 1; l++)
      {
        cout << " ";
      }
      cout << "*";
    }
    cout << endl;
  }

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << " ";
    }
    cout << "*";

    if (i != n - 2)
    {
      for (int k = 0; k < 2 * (n - 2 - i) - 1; k++)
      {
        cout << " ";
      }
      cout << "*";
    }

    cout << endl;
  }
}

// pattern
//     *
//    * *
//   *   *
//  *     *
//   *   *
//    * *
//     *