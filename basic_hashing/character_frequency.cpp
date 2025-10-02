// hashing character frequency using array

#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cout << "Enter any string: ";
  cin >> s;

  int n = 26;
  int hash[n] = {0};

  // pre compute
  for (auto i : s)
  {
    hash[i - 'a']++;
  }

  int q;
  cout << "enter number of character to find their frequency: ";
  cin >> q;
  while (q--)
  {
    char ch;
    cout << "enter character: ";
    cin >> ch;

    // fetch
    cout << "frequency of " << ch << " is " << hash[ch - 'a'] << endl;
  }

  return 0;
}