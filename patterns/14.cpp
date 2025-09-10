#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter any number: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    for (char ch = 'A'; ch <= 'A' + i; ch++)
    {
      cout << ch;
    }

    cout << endl;
  }
  return 0;
}

// Pattern
//  A
//  AB
//  ABC
//  ABCD
//  ABCDE