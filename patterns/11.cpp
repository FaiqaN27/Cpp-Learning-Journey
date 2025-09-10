#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter any number: ";
  cin >> n;
  int str = 1;
  for (int i = 0; i < n; i++)
  {
    (i % 2 == 0) ? str = 1 : str = 0;
    for (int j = 0; j <= i; j++)
    {
      cout << str << " ";
      str = 1 - str; // o to 1 & 1 to 0
    }
    cout << endl;
  }
  return 0;
}

// Pattern
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1