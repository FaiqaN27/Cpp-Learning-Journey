#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter any number: ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    for (char ch = 'A' + n - i; ch <= 'A' + n - 1; ch++)
    {
      cout << ch << " ";
    }
    cout << endl;
  }

  return 0;
}

// pattern
// E
// D E
// C D E
// B C D E
// A B C D E