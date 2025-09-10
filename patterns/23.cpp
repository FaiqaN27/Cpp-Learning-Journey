#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter any number: ";
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    char ch = 'A';

    for (int i = 0; i < n; i++)
    {
      cout << ch << " ";
      ch++;
    }
    cout << endl;
  }
}

// Pattern
// A B C D E F
// A B C D E F
// A B C D E F
// A B C D E F
// A B C D E F
// A B C D E F