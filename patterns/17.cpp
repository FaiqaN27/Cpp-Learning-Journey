#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter any number: ";
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - 1 - i; j++)
    {
      cout << " ";
    }
    for (char ch = 'A'; ch <= 'A' + i; ch++)
    {
      cout << ch;
    }
    for (char ch = 'A' + i - 1; ch >= 'A'; ch--)
    {
      cout << ch;
    }
    cout << endl;
  }
  return 0;
}

// pattern
//      A
//     ABA
//    ABCBA
//   ABCDCBA
//  ABCDEDCBA