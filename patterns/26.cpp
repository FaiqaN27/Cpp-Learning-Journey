#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter any num: ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j < i; j++)
    {
      cout << " ";
    }
    for (int k = 0; k <= n - i; k++)
    {
      cout << i;
    }
    cout << endl;
  }
}

// pattern
//  1111
//   222
//    33
//     4