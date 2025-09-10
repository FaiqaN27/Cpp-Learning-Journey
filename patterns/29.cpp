#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter any num: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    for (char j = 'A' + i; j >= 'A'; j--)
    {
      cout << j << " ";
    }
    cout << endl;
  }

  return 0;
}

// pattern
// A
// B A
// C B A
// D C B A
// E D C B A